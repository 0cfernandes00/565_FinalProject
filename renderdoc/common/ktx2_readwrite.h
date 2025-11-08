#pragma once
#pragma once
#pragma once

#include <stdio.h>
#include "common/tex_data.h"
#include "serialise/streamio.h"

extern bool is_ktx2_file(const byte *headerBuffer, size_t size);
extern RDResult load_ktx2_from_file(StreamReader *reader, read_tex_data &data);
// extern RDResult write_ktx2_to_file(FILE *f, const write_tex_data &data);