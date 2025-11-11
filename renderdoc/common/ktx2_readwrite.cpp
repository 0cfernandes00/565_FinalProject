
#include "common/ktx2_readwrite.h"
#include <stdint.h>
#include "common/common.h"
#include "common/formatting.h"
#include "common/result.h"
#include "os/os_specific.h"
#include "serialise/streamio.h"
#include <vector>


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

  // VK_FORMAT_BC7_UNORM_BLOCK == 177 in Vulkan spec
  if(vkFormat == 177)
  {
    ret.type = ResourceFormatType::BC7;
    ret.compCount = 4;
    ret.compByteWidth = 1;
    ret.compType = CompType::UNorm;
    return ret;
  }

  // common 8-bit RGBA
  if(vkFormat == 37)    // VK_FORMAT_R8G8B8A8_UNORM = 37
  {
    ret.type = ResourceFormatType::Regular;
    ret.compCount = 4;
    ret.compByteWidth = 1;
    ret.compType = CompType::UNorm;
    return ret;
  }

  if(vkFormat == 146)
  {
    ret.type = ResourceFormatType::BC7;
    ret.compCount = 4;
    ret.compByteWidth = 1;
    ret.compType = CompType::SNorm;
    return ret;
  }

  // fallback: undefined
  ret.type = ResourceFormatType::Undefined;
  ret.compCount = 0;
  ret.compByteWidth = 0;
  ret.compType = CompType::Typeless;
  return ret;
}

RDResult load_ktx2_from_file(StreamReader *reader, read_tex_data &ret)
{
  if(!reader)
    RETURN_ERROR_RESULT(ResultCode::InvalidParameter, "Null reader");

  // 1) read entire stream into memory so we can use absolute offsets safely
  uint64_t totalSize = reader->GetSize();
  if(totalSize == 0)
    RETURN_ERROR_RESULT(ResultCode::FileIOFailed, "Empty stream");

  bytebuf filebuf;
  filebuf.resize((size_t)totalSize);

  // reader is at start (caller should have reset file), read whole stream
  if(!reader->Read(filebuf.data(), totalSize))
    RETURN_ERROR_RESULT(ResultCode::FileIOFailed, "Failed to read full input stream");

  // create a memory-backed StreamReader so SetOffset/Read are trivial
  StreamReader mem(reader->GetSize() ? filebuf.data() : nullptr, (uint64_t)filebuf.size());

  
  // 2) validate identifier
  const uint8_t KTX2_ID[12] = {0xAB, 'K', 'T', 'X', ' ', '2', '0', 0xBB, 0x0D, 0x0A, 0x1A, 0x0A};
  uint8_t ident[12] = {};
  
  if(!mem.Read(ident, 12))
    RETURN_ERROR_RESULT(ResultCode::FileIOFailed, "Failed to read KTX2 identifier");
  

  if(memcmp(ident, KTX2_ID, 12) != 0)
    RETURN_ERROR_RESULT(ResultCode::ImageUnsupported, "Not a KTX2 file");

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

  #pragma pack(push, 1)
  struct LevelIndexEntry
  {
    uint64_t offset;                // byte offset from start of file
    uint64_t length;                // length of image data
    uint64_t uncompressedLength;    // may equal length if unsupercompressed
  };
  #pragma pack(pop)

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
      uint32_t levelIndex =
          mip;    // KTX2 level entries are per-level; array/cubemap splitting handled in indexing semantics
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
      uint64_t fileSize = reader->GetSize();

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
