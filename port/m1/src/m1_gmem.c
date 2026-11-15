/* SPDX-License-Identifier: AGPL-3.0-or-later */
/* m1_gmem.c - memoria guest (ver m1_gmem.h), pila de las funciones portadas, llamada indirecta, cargador de ELF. */
#include <stdlib.h>
#include "m1_gmem.h"
#include "m1/m1_arena.h"

typedef struct { unsigned addr; void *fn; } m1_func_entry;
extern const m1_func_entry m1_func_table[];
extern const unsigned m1_func_table_count;

static unsigned char g_hw[0x10000];
static unsigned g_hw_writes;
uint32_t m1_gsp;

unsigned char *m1_gptr_slow(uint32_t a) {
    if (a >= 0x10000000u && a < 0x20000000u) {      /* registros HW: sumidero */
        g_hw_writes++;
        return g_hw + (a & 0xfff0u);
    }
    if (a >= 0x80000000u && a < 0xC0000000u) a &= 0x1fffffffu;            /* KSEG0/1 */
    else if (a >= 0x20000000u && a < 0x70000000u) a &= 0x0fffffffu;       /* espejo no cacheado */
    if (a >= M1_IMG_BASE && a < M1_IMG_END) return m1_img + (a - M1_IMG_BASE);
    return (unsigned char *)Port_Ptr(a);
}
unsigned m1_hw_write_count(void) { return g_hw_writes; }

void m1_gstack_init(uint32_t top) { m1_gsp = top & ~15u; }

uint64_t m1_callg(uint32_t addr, uint64_t a0, uint64_t a1, uint64_t a2, uint64_t a3) {
    for (unsigned i = 0; i < m1_func_table_count; i++)
        if (m1_func_table[i].addr == addr) {
            long long (*fn)(long long, long long, long long, long long) =
                (long long (*)(long long, long long, long long, long long))m1_func_table[i].fn;
            return (uint64_t)fn((long long)a0, (long long)a1, (long long)a2, (long long)a3);
        }
    fprintf(stderr, "m1_callg: 0x%08x no esta en la tabla de funciones enlazadas (llamada indirecta sin destino)\n", addr);
    fflush(stderr);
    abort();
}

static uint32_t crc32_upd(uint32_t crc, const unsigned char *p, size_t n) {
    crc = ~crc;
    while (n--) { crc ^= *p++; for (int k = 0; k < 8; k++) crc = (crc >> 1) ^ (0xEDB88320u & (0u - (crc & 1u))); }
    return ~crc;
}

int m1_image_load_elf(const char *path, uint32_t *crc_out, uint32_t *bytes_out) {
    FILE *f = fopen(path, "rb");          /* solo lectura */
    if (!f) return -1;
    unsigned char eh[52];
    if (fread(eh, 1, 52, f) != 52 || memcmp(eh, "\x7f" "ELF", 4) != 0 || eh[4] != 1 || eh[5] != 1) { fclose(f); return -2; }
    uint32_t phoff, phentsize, phnum;
    memcpy(&phoff, eh + 28, 4); phentsize = eh[42] | (eh[43] << 8); phnum = eh[44] | (eh[45] << 8);
    uint32_t crc = 0, total = 0;
    memset(m1_img, 0, sizeof m1_img);
    for (uint32_t i = 0; i < phnum; i++) {
        unsigned char ph[32];
        if (phentsize < 32 || fseek(f, (long)(phoff + i * phentsize), SEEK_SET) != 0 || fread(ph, 1, 32, f) != 32) { fclose(f); return -3; }
        uint32_t type, off, vaddr, filesz;
        memcpy(&type, ph, 4); memcpy(&off, ph + 4, 4); memcpy(&vaddr, ph + 8, 4); memcpy(&filesz, ph + 16, 4);
        if (type != 1 || filesz == 0) continue;
        if (vaddr < M1_IMG_BASE || (uint64_t)vaddr + filesz > M1_IMG_END) { fclose(f); return -4; }
        if (fseek(f, (long)off, SEEK_SET) != 0 || fread(m1_img + (vaddr - M1_IMG_BASE), 1, filesz, f) != filesz) { fclose(f); return -5; }
        crc = crc32_upd(crc, m1_img + (vaddr - M1_IMG_BASE), filesz);
        total += filesz;
    }
    fclose(f);
    if (crc_out) *crc_out = crc;
    if (bytes_out) *bytes_out = total;
    return 0;
}

typedef struct { const char *name; uint32_t addr, len, crc; } m1_table;
static const m1_table k_tables[] = {
    { "dispositivo RW (fpSystem en +4 = 0x1e9810)", 0x002e4dc0u, 0x48u, 0x55f8c094u },
    { "tabla de saltos de 0x1e9810 (20 peticiones)", 0x002f07b0u, 0x50u, 0x1541d09bu },
    { "tabla de saltos de 0x1c28e0 (peticiones 13..18)", 0x002f0350u, 0x18u, 0xd47b0001u },
    { "cadenas de las 7 IRX (0x22b5f0)", 0x002f0c08u, 0xe0u, 0x62036262u },
    { "cadenas del arranque de main (0x1953c0)", 0x002efe10u, 0x38u, 0xdfcf5d70u },
    { "tabla de modos de video (88 x 16 B)", 0x002e46d0u, 0x580u, 0xd2cfe6e8u },
};

int m1_image_verify_tables(FILE *out) {
    int bad = 0;
    for (unsigned i = 0; i < sizeof k_tables / sizeof k_tables[0]; i++) {
        const m1_table *t = &k_tables[i];
        uint32_t c = crc32_upd(0, m1_img + (t->addr - M1_IMG_BASE), t->len);
        if (c != t->crc) bad++;
        if (out) fprintf(out, "  tabla 0x%08x+0x%x crc 0x%08x %s  (%s)\n", t->addr, t->len, c, c == t->crc ? "ok" : "DISTINTO", t->name);
    }
    return bad;
}
