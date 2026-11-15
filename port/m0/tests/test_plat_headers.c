/* Comprueba que la capa plat_* compila sola como C y como C++ y que sus
 * invariantes de layout se mantienen. No enlaza implementaciones. */
#include "plat/plat.h"
#include <stdio.h>

PLAT_STATIC_ASSERT(sizeof(plat_gaddr) == 4, gaddr_u32);
PLAT_STATIC_ASSERT(PLAT_RDRAM_SIZE == 0x2000000u, rdram_32mb);
PLAT_STATIC_ASSERT(PLAT_SECTOR_SIZE == 2048u, sector);
PLAT_STATIC_ASSERT(PLAT_PAD_SQUARE == 0x8000u, pad_mask);

int main(void) {
    printf("plat_api=%d.%d\n", PLAT_API_VERSION_MAJOR, PLAT_API_VERSION_MINOR);
    return 0;
}
