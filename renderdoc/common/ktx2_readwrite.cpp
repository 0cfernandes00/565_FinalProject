
#include "common/ktx2_readwrite.h"
#include <stdint.h>
#include "common/common.h"
#include "common/formatting.h"
#include "common/result.h"
#include "os/os_specific.h"
#include "serialise/streamio.h"
#include <vector>
#include <iostream>

#include "basisu/basisu_transcoder.h"
#include "libktx/Etc.h"
#include "libktx/EtcImage.h"
#include "libktx/EtcBlock4x4.h"

#define KTX2_SUPERCOMPRESSION_UASTC 1
#define KTX2_SUPERCOMPRESSION_ETC1S 2

static bool basisInit = false;

static const uint8_t KTX2_IDENTIFIER[12] = {0xAB, 'K',  'T',  'X',  ' ',  '2',
                                            '0',  0xBB, 0x0D, 0x0A, 0x1A, 0x0A};

// TO-DO: Caroline: this could be a hack and only load certain types of ktx2 files.
bool is_ktx2_file(const byte *headerBuffer, size_t size)
{
  if(size < 12)
    return false;

  return memcmp(headerBuffer, KTX2_IDENTIFIER, 12) == 0;
}

#pragma pack(push, 1)
struct KTX2Header
{
  uint32_t vkFormat;
  uint32_t typeSize;
  uint32_t pixelWidth;
  uint32_t pixelHeight;
  uint32_t pixelDepth;
  uint32_t layerCount;
  uint32_t faceCount;
  uint32_t levelCount;
  uint32_t supercompressionScheme;
  uint32_t dfdByteOffset;
  uint32_t dfdByteLength;
  uint32_t kvdByteOffset;
  uint32_t kvdByteLength;
  uint64_t sgdByteOffset;
  uint64_t sgdByteLength;
};
#pragma pack(pop)


struct LevelIndexEntry
{
  uint64_t offset;                // byte offset from start of file
  uint64_t length;                // length of image data
  uint64_t uncompressedLength;    // may equal length if unsupercompressed
};


enum VkFormat
{
  VK_FORMAT_UNDEFINED = 0,
  VK_FORMAT_R4G4_UNORM_PACK8 = 1,
  VK_FORMAT_R4G4B4A4_UNORM_PACK16 = 2,
  VK_FORMAT_B4G4R4A4_UNORM_PACK16 = 3,
  VK_FORMAT_R5G6B5_UNORM_PACK16 = 4,
  VK_FORMAT_B5G6R5_UNORM_PACK16 = 5,
  VK_FORMAT_R5G5B5A1_UNORM_PACK16 = 6,
  VK_FORMAT_B5G5R5A1_UNORM_PACK16 = 7,
  VK_FORMAT_A1R5G5B5_UNORM_PACK16 = 8,
  VK_FORMAT_R8_UNORM = 9,
  VK_FORMAT_R8_SNORM = 10,
  VK_FORMAT_R8_USCALED = 11,
  VK_FORMAT_R8_SSCALED = 12,
  VK_FORMAT_R8_UINT = 13,
  VK_FORMAT_R8_SINT = 14,
  VK_FORMAT_R8_SRGB = 15,
  VK_FORMAT_R8G8_UNORM = 16,
  VK_FORMAT_R8G8_SNORM = 17,
  VK_FORMAT_R8G8_USCALED = 18,
  VK_FORMAT_R8G8_SSCALED = 19,
  VK_FORMAT_R8G8_UINT = 20,
  VK_FORMAT_R8G8_SINT = 21,
  VK_FORMAT_R8G8_SRGB = 22,
  VK_FORMAT_R8G8B8_UNORM = 23,
  VK_FORMAT_R8G8B8_SNORM = 24,
  VK_FORMAT_R8G8B8_USCALED = 25,
  VK_FORMAT_R8G8B8_SSCALED = 26,
  VK_FORMAT_R8G8B8_UINT = 27,
  VK_FORMAT_R8G8B8_SINT = 28,
  VK_FORMAT_R8G8B8_SRGB = 29,
  VK_FORMAT_B8G8R8_UNORM = 30,
  VK_FORMAT_B8G8R8_SNORM = 31,
  VK_FORMAT_B8G8R8_USCALED = 32,
  VK_FORMAT_B8G8R8_SSCALED = 33,
  VK_FORMAT_B8G8R8_UINT = 34,
  VK_FORMAT_B8G8R8_SINT = 35,
  VK_FORMAT_B8G8R8_SRGB = 36,
  VK_FORMAT_R8G8B8A8_UNORM = 37,
  VK_FORMAT_R8G8B8A8_SNORM = 38,
  VK_FORMAT_R8G8B8A8_USCALED = 39,
  VK_FORMAT_R8G8B8A8_SSCALED = 40,
  VK_FORMAT_R8G8B8A8_UINT = 41,
  VK_FORMAT_R8G8B8A8_SINT = 42,
  VK_FORMAT_R8G8B8A8_SRGB = 43,
  VK_FORMAT_B8G8R8A8_UNORM = 44,
  VK_FORMAT_B8G8R8A8_SNORM = 45,
  VK_FORMAT_B8G8R8A8_USCALED = 46,
  VK_FORMAT_B8G8R8A8_SSCALED = 47,
  VK_FORMAT_B8G8R8A8_UINT = 48,
  VK_FORMAT_B8G8R8A8_SINT = 49,
  VK_FORMAT_B8G8R8A8_SRGB = 50,
  VK_FORMAT_A8B8G8R8_UNORM_PACK32 = 51,
  VK_FORMAT_A8B8G8R8_SNORM_PACK32 = 52,
  VK_FORMAT_A8B8G8R8_USCALED_PACK32 = 53,
  VK_FORMAT_A8B8G8R8_SSCALED_PACK32 = 54,
  VK_FORMAT_A8B8G8R8_UINT_PACK32 = 55,
  VK_FORMAT_A8B8G8R8_SINT_PACK32 = 56,
  VK_FORMAT_A8B8G8R8_SRGB_PACK32 = 57,
  VK_FORMAT_A2R10G10B10_UNORM_PACK32 = 58,
  VK_FORMAT_A2R10G10B10_SNORM_PACK32 = 59,
  VK_FORMAT_A2R10G10B10_USCALED_PACK32 = 60,
  VK_FORMAT_A2R10G10B10_SSCALED_PACK32 = 61,
  VK_FORMAT_A2R10G10B10_UINT_PACK32 = 62,
  VK_FORMAT_A2R10G10B10_SINT_PACK32 = 63,
  VK_FORMAT_A2B10G10R10_UNORM_PACK32 = 64,
  VK_FORMAT_A2B10G10R10_SNORM_PACK32 = 65,
  VK_FORMAT_A2B10G10R10_USCALED_PACK32 = 66,
  VK_FORMAT_A2B10G10R10_SSCALED_PACK32 = 67,
  VK_FORMAT_A2B10G10R10_UINT_PACK32 = 68,
  VK_FORMAT_A2B10G10R10_SINT_PACK32 = 69,
  VK_FORMAT_R16_UNORM = 70,
  VK_FORMAT_R16_SNORM = 71,
  VK_FORMAT_R16_USCALED = 72,
  VK_FORMAT_R16_SSCALED = 73,
  VK_FORMAT_R16_UINT = 74,
  VK_FORMAT_R16_SINT = 75,
  VK_FORMAT_R16_SFLOAT = 76,
  VK_FORMAT_R16G16_UNORM = 77,
  VK_FORMAT_R16G16_SNORM = 78,
  VK_FORMAT_R16G16_USCALED = 79,
  VK_FORMAT_R16G16_SSCALED = 80,
  VK_FORMAT_R16G16_UINT = 81,
  VK_FORMAT_R16G16_SINT = 82,
  VK_FORMAT_R16G16_SFLOAT = 83,
  VK_FORMAT_R16G16B16_UNORM = 84,
  VK_FORMAT_R16G16B16_SNORM = 85,
  VK_FORMAT_R16G16B16_USCALED = 86,
  VK_FORMAT_R16G16B16_SSCALED = 87,
  VK_FORMAT_R16G16B16_UINT = 88,
  VK_FORMAT_R16G16B16_SINT = 89,
  VK_FORMAT_R16G16B16_SFLOAT = 90,
  VK_FORMAT_R16G16B16A16_UNORM = 91,
  VK_FORMAT_R16G16B16A16_SNORM = 92,
  VK_FORMAT_R16G16B16A16_USCALED = 93,
  VK_FORMAT_R16G16B16A16_SSCALED = 94,
  VK_FORMAT_R16G16B16A16_UINT = 95,
  VK_FORMAT_R16G16B16A16_SINT = 96,
  VK_FORMAT_R16G16B16A16_SFLOAT = 97,
  VK_FORMAT_R32_UINT = 98,
  VK_FORMAT_R32_SINT = 99,
  VK_FORMAT_R32_SFLOAT = 100,
  VK_FORMAT_R32G32_UINT = 101,
  VK_FORMAT_R32G32_SINT = 102,
  VK_FORMAT_R32G32_SFLOAT = 103,
  VK_FORMAT_R32G32B32_UINT = 104,
  VK_FORMAT_R32G32B32_SINT = 105,
  VK_FORMAT_R32G32B32_SFLOAT = 106,
  VK_FORMAT_R32G32B32A32_UINT = 107,
  VK_FORMAT_R32G32B32A32_SINT = 108,
  VK_FORMAT_R32G32B32A32_SFLOAT = 109,
  VK_FORMAT_R64_UINT = 110,
  VK_FORMAT_R64_SINT = 111,
  VK_FORMAT_R64_SFLOAT = 112,
  VK_FORMAT_R64G64_UINT = 113,
  VK_FORMAT_R64G64_SINT = 114,
  VK_FORMAT_R64G64_SFLOAT = 115,
  VK_FORMAT_R64G64B64_UINT = 116,
  VK_FORMAT_R64G64B64_SINT = 117,
  VK_FORMAT_R64G64B64_SFLOAT = 118,
  VK_FORMAT_R64G64B64A64_UINT = 119,
  VK_FORMAT_R64G64B64A64_SINT = 120,
  VK_FORMAT_R64G64B64A64_SFLOAT = 121,
  VK_FORMAT_B10G11R11_UFLOAT_PACK32 = 122,
  VK_FORMAT_E5B9G9R9_UFLOAT_PACK32 = 123,
  VK_FORMAT_D16_UNORM = 124,
  VK_FORMAT_X8_D24_UNORM_PACK32 = 125,
  VK_FORMAT_D32_SFLOAT = 126,
  VK_FORMAT_S8_UINT = 127,
  VK_FORMAT_D16_UNORM_S8_UINT = 128,
  VK_FORMAT_D24_UNORM_S8_UINT = 129,
  VK_FORMAT_D32_SFLOAT_S8_UINT = 130,
  VK_FORMAT_BC1_RGB_UNORM_BLOCK = 131,
  VK_FORMAT_BC1_RGB_SRGB_BLOCK = 132,
  VK_FORMAT_BC1_RGBA_UNORM_BLOCK = 133,
  VK_FORMAT_BC1_RGBA_SRGB_BLOCK = 134,
  VK_FORMAT_BC2_UNORM_BLOCK = 135,
  VK_FORMAT_BC2_SRGB_BLOCK = 136,
  VK_FORMAT_BC3_UNORM_BLOCK = 137,
  VK_FORMAT_BC3_SRGB_BLOCK = 138,
  VK_FORMAT_BC4_UNORM_BLOCK = 139,
  VK_FORMAT_BC4_SNORM_BLOCK = 140,
  VK_FORMAT_BC5_UNORM_BLOCK = 141,
  VK_FORMAT_BC5_SNORM_BLOCK = 142,
  VK_FORMAT_BC6H_UFLOAT_BLOCK = 143,
  VK_FORMAT_BC6H_SFLOAT_BLOCK = 144,
  VK_FORMAT_BC7_UNORM_BLOCK = 145,
  VK_FORMAT_BC7_SRGB_BLOCK = 146,
  VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK = 147,
  VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK = 148,
  VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK = 149,
  VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK = 150,
  VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK = 151,
  VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK = 152,
  VK_FORMAT_EAC_R11_UNORM_BLOCK = 153,
  VK_FORMAT_EAC_R11_SNORM_BLOCK = 154,
  VK_FORMAT_EAC_R11G11_UNORM_BLOCK = 155,
  VK_FORMAT_EAC_R11G11_SNORM_BLOCK = 156,
  VK_FORMAT_ASTC_4x4_UNORM_BLOCK = 157,
  VK_FORMAT_ASTC_4x4_SRGB_BLOCK = 158,
  VK_FORMAT_ASTC_5x4_UNORM_BLOCK = 159,
  VK_FORMAT_ASTC_5x4_SRGB_BLOCK = 160,
  VK_FORMAT_ASTC_5x5_UNORM_BLOCK = 161,
  VK_FORMAT_ASTC_5x5_SRGB_BLOCK = 162,
  VK_FORMAT_ASTC_6x5_UNORM_BLOCK = 163,
  VK_FORMAT_ASTC_6x5_SRGB_BLOCK = 164,
  VK_FORMAT_ASTC_6x6_UNORM_BLOCK = 165,
  VK_FORMAT_ASTC_6x6_SRGB_BLOCK = 166,
  VK_FORMAT_ASTC_8x5_UNORM_BLOCK = 167,
  VK_FORMAT_ASTC_8x5_SRGB_BLOCK = 168,
  VK_FORMAT_ASTC_8x6_UNORM_BLOCK = 169,
  VK_FORMAT_ASTC_8x6_SRGB_BLOCK = 170,
  VK_FORMAT_ASTC_8x8_UNORM_BLOCK = 171,
  VK_FORMAT_ASTC_8x8_SRGB_BLOCK = 172,
  VK_FORMAT_ASTC_10x5_UNORM_BLOCK = 173,
  VK_FORMAT_ASTC_10x5_SRGB_BLOCK = 174,
  VK_FORMAT_ASTC_10x6_UNORM_BLOCK = 175,
  VK_FORMAT_ASTC_10x6_SRGB_BLOCK = 176,
  VK_FORMAT_ASTC_10x8_UNORM_BLOCK = 177,
  VK_FORMAT_ASTC_10x8_SRGB_BLOCK = 178,
  VK_FORMAT_ASTC_10x10_UNORM_BLOCK = 179,
  VK_FORMAT_ASTC_10x10_SRGB_BLOCK = 180
};




/*
RDResult write_ktx2_to_file(FILE *f, const write_tex_data &data)
{
  if(!f)
    return RDResult(ResultCode::InvalidParameter, "Missing file handle writing DDS file");

  uint32_t magic[12] = {0xAB, 'K', 'T', 'X', ' ', '2', '0', 0xBB, 0x0D, 0x0A, 0x1A, 0x0A};
  KTX2_HEADER header;
  KTX2_HEADER_DXT10 headerDXT10;
  RDCEraseEl(header);
  RDCEraseEl(headerDXT10);

  header.dwSize = sizeof(KTX2_HEADER);

  header.ddspf.dwSize = sizeof(KTX2_PIXELFORMAT);

  header.dwWidth = data.width;
  header.dwHeight = data.height;
  header.dwDepth = data.depth;
  header.dwMipMapCount = data.mips;

  header.dwFlags = DDSD_CAPS | DDSD_WIDTH | DDSD_HEIGHT | DDSD_PIXELFORMAT;
  if(data.mips > 1)
    header.dwFlags |= DDSD_MIPMAPCOUNT;
  if(data.depth > 1)
    header.dwFlags |= DDSD_DEPTH;

  bool blockFormat = false;

  if(data.format.Special())
  {
    switch(data.format.type)
    {
      case ResourceFormatType::BC1:
      case ResourceFormatType::BC2:
      case ResourceFormatType::BC3:
      case ResourceFormatType::BC4:
      case ResourceFormatType::BC5:
      case ResourceFormatType::BC6:
      case ResourceFormatType::BC7: blockFormat = true; break;
      case ResourceFormatType::ETC2:
      case ResourceFormatType::EAC:
      case ResourceFormatType::ASTC:
      case ResourceFormatType::YUV8:
      case ResourceFormatType::YUV10:
      case ResourceFormatType::YUV12:
      case ResourceFormatType::YUV16:
      {
        RETURN_ERROR_RESULT(ResultCode::ImageUnsupported,
                            "Unsupported file format %s to write to DDS",
                            ToStr(data.format.type).c_str());
      }
      default: break;
    }
  }

  if(blockFormat)
    header.dwFlags |= DDSD_LINEARSIZE;
  else
    header.dwFlags |= DDSD_PITCH;

  header.dwCaps = DDSCAPS_TEXTURE;
  if(data.mips > 1)
    header.dwCaps |= DDSCAPS_MIPMAP;
  if(data.mips > 1 || data.slices > 1 || data.depth > 1)
    header.dwCaps |= DDSCAPS_COMPLEX;

  header.dwCaps2 = data.depth > 1 ? DDSCAPS2_VOLUME : 0;

  bool dx10Header = false;

  headerDXT10.dxgiFormat = ResourceFormat2DXGIFormat(data.format);
  headerDXT10.resourceDimension =
      data.depth > 1 ? D3D10_RESOURCE_DIMENSION_TEXTURE3D : D3D10_RESOURCE_DIMENSION_TEXTURE2D;
  headerDXT10.miscFlag = 0;
  headerDXT10.arraySize = data.slices;

  if(headerDXT10.dxgiFormat == DXGI_FORMAT_UNKNOWN)
  {
    RETURN_ERROR_RESULT(ResultCode::ImageUnsupported,
                        "Couldn't convert resource format %s to DDS-compatible DXGI format",
                        data.format.Name().c_str());
  }

  if(data.cubemap)
  {
    header.dwCaps2 = DDSCAPS2_CUBEMAP | DDSCAPS2_CUBEMAP_ALLFACES;
    headerDXT10.miscFlag |= DDS_RESOURCE_MISC_TEXTURECUBE;
    headerDXT10.arraySize /= 6;
  }

  if(headerDXT10.arraySize > 1)
    dx10Header = true;    // need to specify dx10 header to give array size

  uint32_t bytesPerPixel = 1;

  if(blockFormat)
  {
    int blockSize =
        (data.format.type == ResourceFormatType::BC1 || data.format.type == ResourceFormatType::BC4)
            ? 8
            : 16;
    header.dwPitchOrLinearSize =
        RDCMAX(1U, ((header.dwWidth + 3) / 4)) * blockSize * RDCMAX(1U, data.height / 4);
  }
  else
  {
    switch(data.format.type)
    {
      case ResourceFormatType::S8:
      case ResourceFormatType::A8: bytesPerPixel = 1; break;
      case ResourceFormatType::R10G10B10A2:
      case ResourceFormatType::R9G9B9E5:
      case ResourceFormatType::R11G11B10:
      case ResourceFormatType::D24S8: bytesPerPixel = 4; break;
      case ResourceFormatType::R5G6B5:
      case ResourceFormatType::R5G5B5A1:
      case ResourceFormatType::R4G4B4A4: bytesPerPixel = 2; break;
      case ResourceFormatType::D32S8: bytesPerPixel = 8; break;
      case ResourceFormatType::D16S8:
      case ResourceFormatType::YUV8:
      case ResourceFormatType::YUV10:
      case ResourceFormatType::YUV12:
      case ResourceFormatType::YUV16:
      case ResourceFormatType::R4G4:
      {
        RETURN_ERROR_RESULT(ResultCode::ImageUnsupported,
                            "Unsupported file format %s to write to DDS",
                            ToStr(data.format.type).c_str());
      }
      default: bytesPerPixel = data.format.compCount * data.format.compByteWidth;
    }

    header.dwPitchOrLinearSize = header.dwWidth * bytesPerPixel;
  }

  // special case a couple of formats to write out non-DX10 style, for
  // backwards compatibility
  if(data.format.compByteWidth * data.format.compCount <= 4 &&
     data.format.type == ResourceFormatType::Regular && data.format.compType == CompType::UNorm)
  {
    uint32_t bits = data.format.compByteWidth * 8;

    header.ddspf.dwFlags = DDPF_RGBA;
    header.ddspf.dwRGBBitCount = data.format.compCount * bits;

    header.ddspf.dwRBitMask = (1U << bits) - 1;
    if(data.format.compCount >= 2)
      header.ddspf.dwGBitMask = header.ddspf.dwRBitMask << bits;
    if(data.format.compCount >= 3)
      header.ddspf.dwBBitMask = header.ddspf.dwGBitMask << bits;
    if(data.format.compCount >= 4)
      header.ddspf.dwABitMask = header.ddspf.dwBBitMask << bits;

    if(data.format.BGRAOrder() && data.format.compCount >= 3)
      std::swap(header.ddspf.dwRBitMask, header.ddspf.dwBBitMask);
  }
  else if(data.format.type == ResourceFormatType::R4G4B4A4)
  {
    header.ddspf.dwFlags = DDPF_RGBA;
    header.ddspf.dwRGBBitCount = 16;
    header.ddspf.dwRBitMask = 0x0f00;
    header.ddspf.dwGBitMask = 0x00f0;
    header.ddspf.dwBBitMask = 0x000f;
    header.ddspf.dwABitMask = 0xf000;
  }
  else if(data.format.type == ResourceFormatType::R5G5B5A1)
  {
    header.ddspf.dwFlags = DDPF_RGBA;
    header.ddspf.dwRGBBitCount = 16;
    header.ddspf.dwRBitMask = 0x7c00;
    header.ddspf.dwGBitMask = 0x03e0;
    header.ddspf.dwBBitMask = 0x001f;
    header.ddspf.dwABitMask = 0x8000;
  }
  else if(data.format.type == ResourceFormatType::R5G6B5)
  {
    header.ddspf.dwFlags = DDPF_RGBA;
    header.ddspf.dwRGBBitCount = 16;
    header.ddspf.dwRBitMask = 0xf800;
    header.ddspf.dwGBitMask = 0x07e0;
    header.ddspf.dwBBitMask = 0x001f;
    header.ddspf.dwABitMask = 0x0000;
  }
  else if(data.format.type == ResourceFormatType::BC1 && data.format.compType == CompType::UNorm)
  {
    header.ddspf.dwFlags = DDPF_FOURCC;
    header.ddspf.dwFourCC = MAKE_FOURCC('D', 'X', 'T', '1');
  }
  else if(data.format.type == ResourceFormatType::BC2 && data.format.compType == CompType::UNorm)
  {
    header.ddspf.dwFlags = DDPF_FOURCC;
    header.ddspf.dwFourCC = MAKE_FOURCC('D', 'X', 'T', '3');
  }
  else if(data.format.type == ResourceFormatType::BC3 && data.format.compType == CompType::UNorm)
  {
    header.ddspf.dwFlags = DDPF_FOURCC;
    header.ddspf.dwFourCC = MAKE_FOURCC('D', 'X', 'T', '5');
  }
  else if(data.format.type == ResourceFormatType::BC4 && data.format.compType == CompType::UNorm)
  {
    header.ddspf.dwFlags = DDPF_FOURCC;
    header.ddspf.dwFourCC = MAKE_FOURCC('B', 'C', '4', 'U');
  }
  else if(data.format.type == ResourceFormatType::BC4 && data.format.compType == CompType::SNorm)
  {
    header.ddspf.dwFlags = DDPF_FOURCC;
    header.ddspf.dwFourCC = MAKE_FOURCC('B', 'C', '4', 'S');
  }
  else if(data.format.type == ResourceFormatType::BC5 && data.format.compType == CompType::UNorm)
  {
    header.ddspf.dwFlags = DDPF_FOURCC;
    header.ddspf.dwFourCC = MAKE_FOURCC('A', 'T', 'I', '2');
  }
  else if(data.format.type == ResourceFormatType::BC5 && data.format.compType == CompType::SNorm)
  {
    header.ddspf.dwFlags = DDPF_FOURCC;
    header.ddspf.dwFourCC = MAKE_FOURCC('B', 'C', '5', 'S');
  }
  else
  {
    // just write out DX10 header
    dx10Header = true;
  }

  if(dx10Header)
  {
    header.ddspf.dwFlags = DDPF_FOURCC;
    header.ddspf.dwFourCC = MAKE_FOURCC('D', 'X', '1', '0');
  }

  {
    FileIO::fwrite(&magic, sizeof(magic), 1, f);
    FileIO::fwrite(&header, sizeof(header), 1, f);
    if(dx10Header)
      FileIO::fwrite(&headerDXT10, sizeof(headerDXT10), 1, f);

    int i = 0;
    for(uint32_t slice = 0; slice < RDCMAX(1U, data.slices); slice++)
    {
      for(uint32_t mip = 0; mip < RDCMAX(1U, data.mips); mip++)
      {
        uint32_t numdepths = RDCMAX(1U, data.depth >> mip);
        for(uint32_t d = 0; d < numdepths; d++)
        {
          byte *bytedata = data.subresources[i];

          uint32_t rowlen = RDCMAX(1U, data.width >> mip);
          uint32_t numRows = RDCMAX(1U, data.height >> mip);
          uint32_t pitch = RDCMAX(1U, rowlen * bytesPerPixel);

          // pitch/rows are in blocks, not pixels, for block formats.
          if(blockFormat)
          {
            numRows = RDCMAX(1U, (numRows + 3) / 4);

            uint32_t blockSize = (data.format.type == ResourceFormatType::BC1 ||
                                  data.format.type == ResourceFormatType::BC4)
                                     ? 8
                                     : 16;

            pitch = RDCMAX(blockSize, (((rowlen + 3) / 4)) * blockSize);
          }

          for(uint32_t row = 0; row < numRows; row++)
          {
            FileIO::fwrite(bytedata, 1, pitch, f);

            bytedata += pitch;
          }

          i++;
        }
      }
    }
  }

  return RDResult();
}
*/


// small mapping for some vk formats we care about (expand as needed)
static ResourceFormat VKFormat2ResourceFormat(uint32_t vkFormat)
{
  ResourceFormat ret;
  RDCEraseEl(ret);
  switch(vkFormat)
  {
    case 177:    // VK_FORMAT_BC7_UNORM_BLOCK == 177 in Vulkan spec
      ret.type = ResourceFormatType::BC7;
      ret.compCount = 4;
      ret.compByteWidth = 1;
      ret.compType = CompType::UNorm;
      break;

    case 37:    // common 8-bit RGBA
      // VK_FORMAT_R8G8B8A8_UNORM = 37
      ret.type = ResourceFormatType::Regular;
      ret.compCount = 4;
      ret.compByteWidth = 1;
      ret.compType = CompType::UNorm;
      break;

    case 131: // VK_FORMAT_BC1_RGB_UNORM_BLOCK
      ret.type = ResourceFormatType::BC1;
      ret.compCount = 3;
      ret.compByteWidth = 1;
      ret.compType = CompType::UNorm;
      break;

    case 132: // VK_FORMAT_BC1_RGB_SRGB_BLOCK
      ret.type = ResourceFormatType::BC1;
      ret.compCount = 3;
      ret.compByteWidth = 1;
      ret.compType = CompType::UNormSRGB;
      break;

    case 133: // VK_FORMAT_BC1_RGBA_UNORM_BLOCK
      ret.type = ResourceFormatType::BC1;
      ret.compCount = 4;
      ret.compByteWidth = 1;
      ret.compType = CompType::UNorm;
      break;
          
    case 134: // VK_FORMAT_BC1_RGBA_SRGB_BLOCK
      ret.type = ResourceFormatType::BC1;
      ret.compCount = 4;
      ret.compByteWidth = 1;
      ret.compType = CompType::UNormSRGB;
      break;

    case 135: // VK_FORMAT_BC2_UNORM_BLOCK
      ret.type = ResourceFormatType::BC2;
      ret.compCount = 4;
      ret.compByteWidth = 1;
      ret.compType = CompType::UNorm;
      break;

    case 136: // VK_FORMAT_BC2_SRGB_BLOCK
      ret.type = ResourceFormatType::BC2;
      ret.compCount = 4;
      ret.compByteWidth = 1;
      ret.compType = CompType::UNormSRGB;
      break;

    case 137: // VK_FORMAT_BC3_UNORM_BLOCK
        ret.type = ResourceFormatType::BC3;
        ret.compCount = 4;
        ret.compByteWidth = 1;
        ret.compType = CompType::UNorm;
        break;

    case 138: // VK_FORMAT_BC3_SRGB_BLOCK
        ret.type = ResourceFormatType::BC3;
        ret.compCount = 4;
        ret.compByteWidth = 1;
        ret.compType = CompType::UNormSRGB;
        break;

    case 139: // VK_FORMAT_BC4_UNORM_BLOCK
        ret.type = ResourceFormatType::BC4;
        ret.compCount = 1;
        ret.compByteWidth = 1;
        ret.compType = CompType::UNorm;
        break;

    case 140: // VK_FORMAT_BC4_SNORM_BLOCK
        ret.type = ResourceFormatType::BC4;
        ret.compCount = 1;
        ret.compByteWidth = 1;
        ret.compType = CompType::SNorm;
        break;

    case 141: // VK_FORMAT_BC5_UNORM_BLOCK
        ret.type = ResourceFormatType::BC5;
        ret.compCount = 2;
        ret.compByteWidth = 1;
        ret.compType = CompType::UNorm;
        break;

    case 142: // VK_FORMAT_BC5_SNORM_BLOCK
        ret.type = ResourceFormatType::BC5;
        ret.compCount = 2;
        ret.compByteWidth = 1;
        ret.compType = CompType::SNorm;
        break;

    case 143: // VK_FORMAT_BC6H_UFLOAT_BLOCK
        break;

    case 144: // VK_FORMAT_BC6H_SFLOAT_BLOCK
        break;

    case 145:   // VK_FORMAT_BC7_UNORM_BLOCK
        ret.type = ResourceFormatType::BC7;
        ret.compCount = 4;
        ret.compByteWidth = 1;
        ret.compType = CompType::UNorm;
        break;

    case 146:    // VK_FORMAT_BC7_SRGB_BLOCK
      ret.type = ResourceFormatType::BC7;
      ret.compCount = 4;
      ret.compByteWidth = 1;
      ret.compType = CompType::UNormSRGB;
      break;

    case 147:    // VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK
      ret.type = ResourceFormatType::ETC2;
      ret.compCount = 3;
      ret.compByteWidth = 1;
      ret.compType = CompType::UNorm;
      break;

    case 148:    // VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK
      ret.type = ResourceFormatType::ETC2;
      ret.compCount = 3;
      ret.compByteWidth = 1;
      ret.compType = CompType::UNormSRGB;
      break;

    case 151:    // VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK
      ret.type = ResourceFormatType::ETC2;
      ret.compCount = 4;
      ret.compByteWidth = 1;
      ret.compType = CompType::UNorm;
      break;

    case 152:    // VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK (your case)
      ret.type = ResourceFormatType::ETC2;
      ret.compCount = 4;
      ret.compByteWidth = 1;
      ret.compType = CompType::UNormSRGB;
      break;

    case 159:    // VK_FORMAT_ASTC_5x4_UNORM_BLOCK
      ret.type = ResourceFormatType::ASTC;
      ret.compCount = 4;
      ret.compByteWidth = 1;
      ret.compType = CompType::UNorm;
      break;

    default:    // fallback: undefined
      ret.type = ResourceFormatType::Undefined;
      ret.compCount = 0;
      ret.compByteWidth = 0;
      ret.compType = CompType::Typeless;
  }
  return ret;
}

struct KTX2_ETC1S_GlobalData
{
  uint32_t endpointCount;
  uint32_t selectorCount;
  uint32_t endpointsByteLength;
  uint32_t selectorsByteLength;
  uint8_t endpoints;
  uint8_t selectors;
};


// Manual ETC2 decoder - no external dependencies
// Based on the Khronos ETC2 specification

// ETC2 decoder — corrected implementation
#include <algorithm>
#include <cstdint>
#include <cstring>

// Define formats used by the decoder
enum class ETC2Format
{
  RGB8,
  RGBA8,
  SRGB8,
  SRGBA8
};

namespace ETC2Decoder
{
// Helper: clamp to 0..255
static inline uint8_t Clamp255(int v)
{
  if(v < 0)
    return 0;
  if(v > 255)
    return 255;
  return (uint8_t)v;
}

// Extend n-bit value to 8-bit by replication
static inline int ExpandBits(int val, int bits)
{
  if(bits == 4)
    return (val << 4) | val;
  if(bits == 5)
    return (val << 3) | (val >> 2);
  if(bits == 3)
    return (val << 5) | (val << 2) | (val >> 1);
  int shift = 8 - bits;
  return (val << shift) | (val >> (bits - shift));
}

static const int SELECTOR_LUT[16] = {0, 4, 8, 12, 1, 5, 9, 13, 2, 6, 10, 14, 3, 7, 11, 15};
//  ALT LUT (row-major mapping) - try if LUT permutation is the culprit
//static const int SELECTOR_LUT[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};


static const int ETC_MODIFIERS[8][4] = {
    {2, 8, -2, -8},     {5, 17, -5, -17},   {9, 29, -9, -29},     {13, 42, -13, -42},
    {18, 60, -18, -60}, {24, 80, -24, -80}, {33, 106, -33, -106}, {47, 183, -47, -183}};

static const int EAC_ALPHA_MOD[16] = {-3, -6, -9, -15, 2, 5, 8, 14, -3, -6, -9, -15, 2, 5, 8, 14};

void DecodeETC2Block_RGB(const uint8_t *block, uint8_t *outRGBA, int width, int height, int blockX,
                         int blockY, int imageRowPitch)
{
  if(!block || !outRGBA)
    return;
  
  const uint32_t selectors = (uint32_t(block[4]) << 24) | (uint32_t(block[5]) << 16) |
                             (uint32_t(block[6]) << 8) | (uint32_t(block[7]) << 0);
  
  /*
  const uint32_t selectors = (uint32_t(block[6]) << 24) | (uint32_t(block[7]) << 16) |
                                  (uint32_t(block[4]) << 8) | (uint32_t(block[5]) << 0);
  */
  /*
  const uint32_t selectors = (uint32_t(block[7]) << 24) | (uint32_t(block[6]) << 16) |
                                  (uint32_t(block[5]) << 8) | (uint32_t(block[4]) << 0);
  */
  const bool diffBit = (block[3] & 0x02) != 0;
  const bool flipBit = (block[3] & 0x01) != 0;

  int r1, g1, b1, r2, g2, b2;

  if(diffBit)
  {
    int r_base5 = block[0] >> 3;
    int g_base5 = block[1] >> 3;
    int b_base5 = block[2] >> 3;

    int r_diff3 = block[0] & 0x7;
    if(r_diff3 & 0x4)
      r_diff3 |= ~0x7;
    int g_diff3 = block[1] & 0x7;
    if(g_diff3 & 0x4)
      g_diff3 |= ~0x7;
    int b_diff3 = block[2] & 0x7;
    if(b_diff3 & 0x4)
      b_diff3 |= ~0x7;

    int r_base5_2 = r_base5 + r_diff3;
    int g_base5_2 = g_base5 + g_diff3;
    int b_base5_2 = b_base5 + b_diff3;

    bool diffOverflow = (r_base5_2 < 0 || r_base5_2 > 31 || g_base5_2 < 0 || g_base5_2 > 31 ||
                         b_base5_2 < 0 || b_base5_2 > 31);

    if(diffOverflow)
    {
      r1 = ExpandBits((block[0] & 0xF0) >> 4, 4);
      g1 = ExpandBits((block[1] & 0xF0) >> 4, 4);
      b1 = ExpandBits((block[2] & 0xF0) >> 4, 4);
      r2 = ExpandBits(block[0] & 0x0F, 4);
      g2 = ExpandBits(block[1] & 0x0F, 4);
      b2 = ExpandBits(block[2] & 0x0F, 4);
    }
    else
    {
      r1 = ExpandBits(r_base5, 5);
      g1 = ExpandBits(g_base5, 5);
      b1 = ExpandBits(b_base5, 5);
      r2 = ExpandBits(r_base5_2, 5);
      g2 = ExpandBits(g_base5_2, 5);
      b2 = ExpandBits(b_base5_2, 5);
    }
  }
  else
  {
    r1 = ExpandBits((block[0] & 0xF0) >> 4, 4);
    g1 = ExpandBits((block[1] & 0xF0) >> 4, 4);
    b1 = ExpandBits((block[2] & 0xF0) >> 4, 4);
    r2 = ExpandBits(block[0] & 0x0F, 4);
    g2 = ExpandBits(block[1] & 0x0F, 4);
    b2 = ExpandBits(block[2] & 0x0F, 4);
  }

  const int table1 = (block[3] >> 5) & 0x7;
  const int table2 = (block[3] >> 2) & 0x7;

  for(int py = 0; py < 4; ++py)
  {
    for(int px = 0; px < 4; ++px)
    {
      int pixelIndex = py * 4 + px;
      int s = SELECTOR_LUT[pixelIndex];
      int lsb = (selectors >> s) & 1;
      int msb = (selectors >> (s + 16)) & 1;
      int modIndex = (msb << 1) | lsb;

      bool useSubblock1;

      if(flipBit == 0)
      {
        // Horizontal split → top 2 rows = subblock0, bottom 2 rows = subblock1
        useSubblock1 = (py >= 2);
      }
      else
      {
        // Vertical split → left 2 columns = subblock0, right 2 columns = subblock1
        useSubblock1 = (px >= 2);
      }

      int r, g, b;
      if(useSubblock1)
      {
        r = r2 + ETC_MODIFIERS[table2][modIndex];
        g = g2 + ETC_MODIFIERS[table2][modIndex];
        b = b2 + ETC_MODIFIERS[table2][modIndex];
      }
      else
      {
        r = r1 + ETC_MODIFIERS[table1][modIndex];
        g = g1 + ETC_MODIFIERS[table1][modIndex];
        b = b1 + ETC_MODIFIERS[table1][modIndex];
      }

      int gx = blockX * 4 + px;
      int gy = blockY * 4 + py;
      if(gx < width && gy < height)
      {
        size_t outIdx = (size_t)gy * (size_t)imageRowPitch + (size_t)gx;
        uint8_t *dst = outRGBA + (outIdx * 4);
        dst[0] = Clamp255(r);
        dst[1] = Clamp255(g);
        dst[2] = Clamp255(b);
        dst[3] = 255;
      }
    }
  }
}

void DecodeETC2Block_RGBA(const uint8_t *block16, uint8_t *outRGBA, int width, int height,
                          int blockX, int blockY, int imageRowPitch)
{
  if(!block16 || !outRGBA)
    return;
  DecodeETC2Block_RGB(block16 + 8, outRGBA, width, height, blockX, blockY, imageRowPitch);

  const uint8_t *a = block16;
  const int baseAlpha = (int)a[0];
  const int multiplier = (int)a[1];
  uint64_t alphaBits = 0;
  for(int i = 2; i < 8; ++i)
    alphaBits = (alphaBits << 8) | uint64_t(a[i]);

  for(int py = 0; py < 4; ++py)
  {
    for(int px = 0; px < 4; ++px)
    {
      int pixelIndex = py * 4 + px;
      int s = SELECTOR_LUT[pixelIndex];
      int shift = 45 - (s * 3);
      int idx = int((alphaBits >> shift) & 0x7);
      int alpha = baseAlpha + multiplier * EAC_ALPHA_MOD[idx];

      int gx = blockX * 4 + px;
      int gy = blockY * 4 + py;
      if(gx < width && gy < height)
      {
        size_t outIdx = (size_t)gy * (size_t)imageRowPitch + (size_t)gx;
        outRGBA[outIdx * 4 + 3] = Clamp255(alpha);
      }
    }
  }
}
}

// Main decode function
void DecodeEtc2ToRGBA8(const uint8_t *etcData, size_t dataSize, int width, int height,
                       ETC2Format format, uint8_t *outBuffer)
{
  if(!etcData || !outBuffer || width <= 0 || height <= 0)
    return;

  bool hasAlpha = (format == ETC2Format::RGBA8 || format == ETC2Format::SRGBA8);

  const int blocksX = (width + 3) / 4;
  const int blocksY = (height + 3) / 4;
  const int bytesPerBlock = hasAlpha ? 16 : 8;
  const uint64_t expected = uint64_t(blocksX) * uint64_t(blocksY) * uint64_t(bytesPerBlock);

  // Safety Check
  if(dataSize < expected)
  {
    RDCLOG("Error: ETC2 buffer too small. Expected %llu, got %llu", expected, (uint64_t)dataSize);
    // Fill magenta error placeholder
    for(int i = 0; i < width * height; ++i)
    {
      outBuffer[i * 4 + 0] = 255;
      outBuffer[i * 4 + 1] = 0;
      outBuffer[i * 4 + 2] = 255;
      outBuffer[i * 4 + 3] = 255;
    }
    return;
  }

  // Initialize alpha to opaque
  for(int i = 0; i < width * height; ++i)
    outBuffer[i * 4 + 3] = 255;

  const uint8_t *p = etcData;
  const uint8_t *end = etcData + dataSize;

  for(int by = 0; by < blocksY; ++by)
  {
    for(int bx = 0; bx < blocksX; ++bx)
    {
      if(p + bytesPerBlock > end)
        return;    // Bounds safety

      if(hasAlpha)
      {
        ETC2Decoder::DecodeETC2Block_RGBA(p, outBuffer, width, height, bx, by, width);
      }
      else
      {
        ETC2Decoder::DecodeETC2Block_RGB(p, outBuffer, width, height, bx, by, width);
      }
      p += bytesPerBlock;
    }
  }
}


RDResult load_ktx2_from_file(StreamReader *reader, read_tex_data &ret)
{
  if(!basisInit)
  {
    basisInit = true;
    basist::basisu_transcoder_init();
  }

  if(!reader)
    RETURN_ERROR_RESULT(ResultCode::InvalidParameter, "Null reader");

  // 1) read whole file into memory exactly once
  uint64_t fileSize = reader->GetSize();
  if(fileSize == 0)
    RETURN_ERROR_RESULT(ResultCode::FileIOFailed, "Empty stream");

  bytebuf filebuf;
  filebuf.resize((size_t)fileSize);

  // read full stream into filebuf
  if(!reader->Read(filebuf.data(), filebuf.size()))
    RETURN_ERROR_RESULT(ResultCode::FileIOFailed, "Failed to read full input stream");

  // memory-backed helper reader (so SetOffset/Read work)
  StreamReader mem(filebuf.data(), (uint64_t)filebuf.size());

  const uint8_t KTX2_ID[12] = {0xAB, 'K', 'T', 'X', ' ', '2', '0', 0xBB, 0x0D, 0x0A, 0x1A, 0x0A};
  uint8_t ident[12] = {};
  if(!mem.Read(ident, 12))
    RETURN_ERROR_RESULT(ResultCode::FileIOFailed, "Failed to read KTX2 identifier");
  if(memcmp(ident, KTX2_ID, 12) != 0)
    RETURN_ERROR_RESULT(ResultCode::ImageUnsupported, "Not a KTX2 file");

  // 2) Use ktx2_transcoder to parse the KTX2 (this fills header, level index, DFD, etc)
  basist::ktx2_transcoder kt2;
  bool kt2InitSuccess = kt2.init(filebuf.data(), (uint32_t)filebuf.size());

  // Check if ETC2 format
  const basist::ktx2_header &hdr = kt2.get_header();
  ret.format = VKFormat2ResourceFormat(hdr.m_vk_format);

  const bool isETC2 = (hdr.m_vk_format >= VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK &&
                       hdr.m_vk_format <= VK_FORMAT_EAC_R11G11_SNORM_BLOCK);

  if(kt2InitSuccess || isETC2)
  {
    // read basic metadata from transcoder
    const uint32_t width = kt2.get_width();
    const uint32_t height = kt2.get_height();
    const uint32_t levelCount = kt2.get_levels();
    const uint32_t faceCount = kt2.get_faces();      // 1 or 6
    const uint32_t layerCount = kt2.get_layers();    // 0 means no layers
    if(width == 0 || height == 0)
      RETURN_ERROR_RESULT(ResultCode::ImageUnsupported, "Invalid KTX2 dimensions");

    // compute slices (layers * faces). layerCount==0 => 1
    const uint32_t layers = layerCount > 0 ? layerCount : 1;
    const uint32_t faces = faceCount > 0 ? faceCount : 1;
    const uint32_t slices = layers * faces;

    // fill ret metadata
    ret.width = width;
    ret.height = RDCMAX(1U, height);
    ret.depth = 1;
    ret.slices = slices;
    ret.cubemap = (faceCount == 6);
    ret.mips = levelCount;

    if(isETC2)
    {
      // KTX2 Spec: vkFormat is at offset 12
      uint32_t vkFormat = *reinterpret_cast<uint32_t *>(filebuf.data() + 12);

      RDCLOG("Decoding ETC2 format %u to RGBA8", vkFormat);

      // FIX: Level Index starts at 80 (48 header + 32 DFD offsets)
      // Your previous crash was caused by reading from offset 48
      const uint8_t *levelIndexStart = filebuf.data() + 80;

      ret.buffer.clear();
      ret.subresources.clear();
      ret.buffer.reserve((size_t)width * (size_t)height * 4 * ret.mips * ret.slices);

      for(uint32_t slice = 0; slice < ret.slices; ++slice)
      {
        for(uint32_t mip = 0; mip < ret.mips; ++mip)
        {
          // Entry format: byteOffset (8), byteLength (8), uncompressedByteLength (8)
          size_t entrySize = 24;
          size_t entryOffset = mip * entrySize;
          const uint8_t *entryPtr = levelIndexStart + entryOffset;

          // Bounds check the index read
          if(entryPtr + entrySize > filebuf.data() + filebuf.size())
            RETURN_ERROR_RESULT(ResultCode::FileIOFailed, "KTX2 Level Index out of bounds");

          uint64_t offset = *reinterpret_cast<const uint64_t *>(entryPtr);
          uint64_t length = *reinterpret_cast<const uint64_t *>(entryPtr + 8);

          // Bounds check the data read
          if(offset + length > filebuf.size())
            RETURN_ERROR_RESULT(ResultCode::FileIOFailed, "KTX2 Level Data out of bounds");

          uint32_t mipW = RDCMAX(1U, width >> mip);
          uint32_t mipH = RDCMAX(1U, height >> mip);

          uint32_t pixels = mipW * mipH;
          size_t decodedBytes = (size_t)pixels * 4;    // RGBA8

          size_t prev = ret.buffer.size();
          ret.buffer.resize(prev + decodedBytes);

          uint64_t compressedBytesPerSlice = length / ret.slices;

          RDCLOG("level %u: offset=%llu length=%llu slices=%u perSlice=%llu", mip,
                 (unsigned long long)offset, (unsigned long long)length, ret.slices,
                 (unsigned long long)(length / (ret.slices ? ret.slices : 1)));

          if(ret.slices > 1 && length % ret.slices != 0)
          {
            RDCLOG("Warning: level length not divisible by slices — fallback will be used.");
          }


          const uint8_t *srcEtcData = filebuf.data() + offset + (slice * compressedBytesPerSlice);
          uint8_t *destPtr = ret.buffer.data() + prev;

          // Select Format
          ETC2Format etcFormat;
          switch(vkFormat)
          {
            case 147: etcFormat = ETC2Format::RGB8; break;
            case 148: etcFormat = ETC2Format::SRGB8; break;
            case 151: etcFormat = ETC2Format::RGBA8; break;
            case 152: etcFormat = ETC2Format::SRGBA8; break;

            // CRITICAL FIX: Map RGB8A1 (Punchthrough) to RGB8 (8 bytes/block)
            // Treating this as RGBA8 (16 bytes) causes buffer overruns.
            case 149: etcFormat = ETC2Format::RGB8; break;    // Loss of alpha, but prevents crash
            case 150: etcFormat = ETC2Format::RGB8; break;    // Loss of alpha, but prevents crash

            default:
              RETURN_ERROR_RESULT(ResultCode::ImageUnsupported, "Unsupported ETC2 variant %u",
                                  vkFormat);
          }


          // Call the updated manual decoder
          DecodeEtc2ToRGBA8(srcEtcData, (size_t)compressedBytesPerSlice, mipW, mipH, etcFormat,
                            destPtr);

          ret.subresources.push_back({prev, decodedBytes});
        }
      }

      // Set output Resource Format
      ResourceFormat rgba8;
      RDCEraseEl(rgba8);
      rgba8.type = ResourceFormatType::Regular;
      rgba8.compCount = 4;
      rgba8.compByteWidth = 1;
      bool isSRGB = (vkFormat == 148 || vkFormat == 152 || vkFormat == 150);
      rgba8.compType = isSRGB ? CompType::UNormSRGB : CompType::UNorm;
      ret.format = rgba8;

      RDCLOG("ETC2 decoded to RGBA8: %ux%u, mips=%u, slices=%u", ret.width, ret.height, ret.mips,
             ret.slices);
      return ResultCode::Succeeded;
    }

    // If the file is basis-compressed (ETC1S or UASTC) -> use kt2 transcode API
    const bool isBasis = kt2.is_etc1s() || kt2.is_uastc();
    if(isBasis)
    {
      if(!kt2.start_transcoding())
        RETURN_ERROR_RESULT(ResultCode::ImageUnsupported,
                            "ktx2_transcoder::start_transcoding failed");

      // We'll decode to tightly-packed RGBA8 on the CPU for RenderDoc's proxy path.
      const basist::transcoder_texture_format targetFmt =
          basist::transcoder_texture_format::cTFRGBA32;

      // prepare output storage and subresource list
      ret.buffer.clear();
      ret.subresources.clear();
      // reserve approx space
      ret.buffer.reserve((size_t)width * (size_t)height * 4 * ret.mips *
                         (ret.slices ? ret.slices : 1));

      // Iterate slices then mips to produce subresource ordering slice*mips + mip
      for(uint32_t slice = 0; slice < ret.slices; ++slice)
      {
        // map slice -> (layer, face)
        uint32_t layer = slice / faces;
        uint32_t face = slice % faces;

        for(uint32_t mip = 0; mip < ret.mips; ++mip)
        {
          basist::ktx2_image_level_info lvlInfo;
          if(!kt2.get_image_level_info(lvlInfo, mip, layer, face))
            RETURN_ERROR_RESULT(ResultCode::ImageUnsupported,
                                "ktx2_transcoder::get_image_level_info failed (slice=%u mip=%u)",
                                slice, mip);

          uint32_t mipW = RDCMAX(1U, lvlInfo.m_orig_width);
          uint32_t mipH = RDCMAX(1U, lvlInfo.m_orig_height);
          uint32_t pixels = mipW * mipH;
          size_t bytes = (size_t)pixels * 4;

          size_t prev = ret.buffer.size();
          ret.buffer.resize(prev + bytes);

          // transcode to RGBA32; output buffer is pixels (not bytes) for RGBA32 mode
          bool ok = kt2.transcode_image_level(
              mip,      // level_index
              layer,    // layer_index
              face,     // face_index
              ret.buffer.data() + prev,
              pixels,    // output_blocks_buf_size_in_blocks_or_pixels
              targetFmt,
              0,    // decode_flags
              0,    // output_row_pitch_in_blocks_or_pixels (0 == tightly packed)
              0     // output_rows_in_pixels (0 == all rows)
          );

          if(!ok)
            RETURN_ERROR_RESULT(ResultCode::ImageUnsupported,
                                "ktx2_transcoder::transcode_image_level failed (slice=%u mip=%u)",
                                slice, mip);

          ret.subresources.push_back({prev, bytes});
        }
      }

      // We decoded to RGBA8 UNorm on CPU.
      ResourceFormat rgba8;
      RDCEraseEl(rgba8);
      rgba8.type = ResourceFormatType::Regular;
      rgba8.compCount = 4;
      rgba8.compByteWidth = 1;
      rgba8.compType = CompType::UNorm;
      ret.format = rgba8;

      RDCLOG("KTX2 Basis decoded: %ux%u, mips=%u, slices=%u", ret.width, ret.height, ret.mips,
             ret.slices);
      return ResultCode::Succeeded;
    }


    // Not Basis-compressed: treat as raw/passthrough KTX2 levels.
    // Use the level index from the transcoder (packed_uint handled via get_uint64()/get()).
    const basisu::vector<basist::ktx2_level_index> &levels = kt2.get_level_index();

    // calculate total expected data size and copy per-level payloads into ret.buffer.
    ret.buffer.clear();
    ret.subresources.clear();
    ret.buffer.reserve((size_t)filebuf.size());    // conservative

    // For each mip we read the level bytes. KTX2 stores level payloads per-level.
    // For array/cubemap textures the level payload typically contains data for all layers/faces.
    // We therefore split each level payload evenly across 'slices' if slices>1. This is a common
    // layout for KTX2 (each image for a layer/face has identical encoded size per-level).
    for(uint32_t mip = 0; mip < levelCount; ++mip)
    {
      const basist::ktx2_level_index &li = levels[mip];

      // extract packed_uint fields safely
      uint64_t offset = li.m_byte_offset.get_uint64();    // offset into filebuf
      uint64_t length = li.m_byte_length.get_uint64();    // bytes for this whole level
      // uint64_t uncompressedLength = li.m_uncompressed_byte_length.get_uint64();

      if(length == 0)
      {
        // push zero-sized subresources for each slice
        for(uint32_t slice = 0; slice < ret.slices; ++slice)
        {
          // subresource index ordering: slice*mips + mip
          ret.subresources.push_back({ret.buffer.size(), 0});
        }
        continue;
      }

      // bounds check: ensure level bytes are within filebuf
      if(offset + length > filebuf.size())
        RETURN_ERROR_RESULT(ResultCode::FileIOFailed, "KTX2 level index out of range");

      // If multiple slices, attempt to split equally per-slice. Validate divisibility; if not
      // divisible, fall back to single subresource (whole level) and let higher layers handle it.
      if(ret.slices > 1)
      {
        // If the file actually concatenates per-slice images equally (typical), we can split.
        if(length % ret.slices == 0)
        {
          size_t perSlice = (size_t)(length / ret.slices);
          for(uint32_t slice = 0; slice < ret.slices; ++slice)
          {
            size_t prev = ret.buffer.size();
            ret.buffer.resize(prev + perSlice);
            memcpy(ret.buffer.data() + prev, filebuf.data() + offset + (size_t)slice * perSlice,
                   perSlice);

            // push at index slice*mips + mip
            ret.subresources.push_back({prev, perSlice});
          }
        }
        else
        {
          // Not equally split: copy the whole level once and set subresource for each slice to
          // point to the appropriate span (best effort: replicate blocks). Simpler fallback: copy
          // whole level once and create one subresource per slice referencing the same data (this
          // is safer than misligned splits).
          size_t prev = ret.buffer.size();
          ret.buffer.resize(prev + (size_t)length);
          memcpy(ret.buffer.data() + prev, filebuf.data() + offset, (size_t)length);

          // point every slice at the whole level payload (non-ideal but safe)
          for(uint32_t slice = 0; slice < ret.slices; ++slice)
            ret.subresources.push_back({prev, (size_t)length});
        }
      }
      else
      {
        // single-slice (normal 2D) -> copy level payload
        size_t prev = ret.buffer.size();
        ret.buffer.resize(prev + (size_t)length);
        memcpy(ret.buffer.data() + prev, filebuf.data() + offset, (size_t)length);
        ret.subresources.push_back({prev, (size_t)length});
      }
    }

    // Now ensure ret.subresources count is slices * mips. If we produced per-mip entries only and
    // slices==1, that is fine. If slices>1 and we pushed per-slice per-mip above, the count should
    // match. If not, try to repair by duplicating last subresource (best-effort).
    const size_t expectedCount = (size_t)ret.slices * (size_t)ret.mips;
    if(ret.subresources.size() != expectedCount)
    {
      // attempt to fix: if we have exactly ret.mips entries and slices>1, replicate each per-slice
      if(ret.slices > 1 && ret.subresources.size() == ret.mips)
      {
        rdcarray<rdcpair<size_t, size_t>> old = ret.subresources;
        ret.subresources.clear();
        ret.subresources.reserve(expectedCount);
        for(uint32_t slice = 0; slice < ret.slices; ++slice)
        {
          for(uint32_t mip = 0; mip < ret.mips; ++mip)
            ret.subresources.push_back(old[mip]);
        }
      }
      else
      {
        RDCWARN("KTX2: unexpected subresource count %zu (expected %zu).", ret.subresources.size(),
                expectedCount);
        // fall through; ImageViewer/CreateProxyTexture may catch unsupported shape
      }
    }

    // Map vk format found in the parsed header to a ResourceFormat; prefer kt2.get_header().m_vk_format

    //const basist::ktx2_header &hdr = kt2.get_header();
    //ret.format = VKFormat2ResourceFormat(hdr.m_vk_format);


    if(ret.format.type == ResourceFormatType::Undefined)
    {
      // If unknown VK format, still succeed if we have raw bytes. But prefer to indicate unsupported.
      RETURN_ERROR_RESULT(ResultCode::ImageUnsupported, "Unsupported vkFormat %u",
                          (uint32_t)hdr.m_vk_format);
    }

    RDCLOG("KTX2 raw passthrough: %ux%u, mips=%u, slices=%u, vkFormat=%u", ret.width, ret.height,
           ret.mips, ret.slices, (uint32_t)hdr.m_vk_format);

    return ResultCode::Succeeded;

  }
  else
  {

      // 3) read header
    KTX2Header header = {};
    if(!mem.Read(header))
      RETURN_ERROR_RESULT(ResultCode::FileIOFailed, "Failed to read KTX2 header");

    // minimal check
    if(header.pixelWidth == 0 || header.pixelHeight == 0)
      RETURN_ERROR_RESULT(ResultCode::ImageUnsupported, "Invalid KTX2 dimensions");

    // only support no supercompression for this minimal loader
    if(header.supercompressionScheme != 0)
      RETURN_ERROR_RESULT(ResultCode::ImageUnsupported, "Supercompression not supported yet");

    // 4) read level index array (levelCount entries, each 3 x uint64)
    uint32_t levelCount = RDCMAX(1U, header.levelCount);

    rdcarray<LevelIndexEntry> levels;
    levels.resize(levelCount);

    for(uint32_t i = 0; i < levelCount; ++i)
    {
      if(!mem.Read(levels[i]))
        RETURN_ERROR_RESULT(ResultCode::FileIOFailed, "Failed to read level index");
    }

    // 5) fill metadata
    ret.width = header.pixelWidth;
    ret.height = RDCMAX(1U, header.pixelHeight);
    ret.depth = RDCMAX(1U, header.pixelDepth);
    uint32_t slices = header.layerCount > 0 ? header.layerCount : 1;
    ret.cubemap = (header.faceCount == 6);
    if(ret.cubemap)
      slices *= 6;
    ret.slices = slices;
    ret.mips = levelCount;

    // 6) map vkFormat -> ResourceFormat (you can expand mapping as needed)
    ret.format = VKFormat2ResourceFormat(header.vkFormat);
    if(ret.format.type == ResourceFormatType::Undefined)
    {
      // if not known, mark unsupported for now
      RETURN_ERROR_RESULT(ResultCode::ImageUnsupported, "Unsupported vkFormat %u", header.vkFormat);
    }

    // 7) read each level's data and append into ret.buffer, record subresources
    size_t curOff = 0;
    ret.buffer.clear();
    ret.subresources.clear();
    ret.subresources.reserve((size_t)ret.slices * ret.mips);

    for(uint32_t slice = 0; slice < ret.slices; ++slice)
    {
      for(uint32_t mip = 0; mip < ret.mips; ++mip)
      {
        uint32_t levelIndex = mip;    // KTX2 level entries are per-level; array/cubemap splitting
                                      // handled in indexing semantics
        const LevelIndexEntry &li = levels[levelIndex];

        if(li.length == 0)
        {
          // empty level: push zero-sized subresource
          ret.subresources.push_back({curOff, 0});
          continue;
        }

        // set mem reader to absolute offset then read
        mem.SetOffset(li.offset);

        size_t sz = (size_t)li.length;
        size_t prevSize = ret.buffer.size();
        ret.buffer.resize(prevSize + sz);

        uint64_t curPos = reader->GetOffset();
        fileSize = reader->GetSize();

        RDCLOG("Trying to read %llu bytes at offset %llu (fileSize = %llu)", (unsigned long long)sz,
               (unsigned long long)curPos, (unsigned long long)fileSize);

        if(!mem.Read(ret.buffer.data() + prevSize, sz))
          RETURN_ERROR_RESULT(ResultCode::FileIOFailed, "Failed to read level image data");

        ret.subresources.push_back({prevSize, sz});
        curOff = prevSize + sz;
      }
    }

    // 8) done
    RDCLOG("KTX2 loaded: %ux%u, mips=%u, slices=%u, format vk=%u -> %s", ret.width, ret.height,
           ret.mips, ret.slices, header.vkFormat, ret.format.Name().c_str());

    return ResultCode::Succeeded;

  }

}
