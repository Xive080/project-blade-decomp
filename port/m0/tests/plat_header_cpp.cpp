// Las cabeceras plat_* deben ser validas como C++17 (los nucleos son C++).
#include "plat/plat.h"
static_assert(sizeof(plat_pad_report) == 32, "informe de pad de 32 bytes");
static_assert(PLAT_RDRAM_SIZE == 32u * 1024u * 1024u, "RDRAM de 32 MB");
int plat_header_cpp_probe() { plat_config c{}; c.struct_size = sizeof c; return (int)c.struct_size; }
