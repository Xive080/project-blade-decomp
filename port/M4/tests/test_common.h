#ifndef TEST_COMMON_H
#define TEST_COMMON_H
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

static int g_fail = 0;
#define CHECK(c) do { if (!(c)) { printf("FALLO %s:%d: %s\n", __FILE__, __LINE__, #c); g_fail++; } } while (0)
#define CHECK_EQ(a, b) do { long long _a = (long long)(a), _b = (long long)(b); \
    if (_a != _b) { printf("FALLO %s:%d: %s=%lld != %s=%lld\n", __FILE__, __LINE__, #a, _a, #b, _b); g_fail++; } } while (0)

static uint32_t g_rng = 12345u;
static uint32_t rnd(void) { g_rng = g_rng * 1664525u + 1013904223u; return g_rng >> 8; }

/* Construye un VAG con cabecera de 48 bytes sobre nblocks bloques aleatorios.
 * Los bytes de flags se ponen a flags (0 o los pedidos). */
#if defined(__GNUC__)
__attribute__((unused))
#endif
static uint8_t *make_vag(size_t nblocks, uint32_t rate, int with_header, size_t *out_size) {
    size_t hdr = with_header ? 48 : 0, i, j;
    uint8_t *d = (uint8_t *)calloc(hdr + nblocks * 16 + 1, 1);
    if (with_header) {
        memcpy(d, "VAGp", 4);
        d[7] = 3;
        d[12] = (uint8_t)((nblocks * 16) >> 24); d[13] = (uint8_t)((nblocks * 16) >> 16);
        d[14] = (uint8_t)((nblocks * 16) >> 8); d[15] = (uint8_t)(nblocks * 16);
        d[16] = (uint8_t)(rate >> 24); d[17] = (uint8_t)(rate >> 16); d[18] = (uint8_t)(rate >> 8); d[19] = (uint8_t)rate;
        memcpy(d + 32, "synthetic", 9);
    }
    for (i = 0; i < nblocks; i++) {
        uint8_t *b = d + hdr + i * 16;
        b[0] = (uint8_t)(((rnd() % 5) << 4) | (rnd() % 13));
        b[1] = 0;
        for (j = 2; j < 16; j++) b[j] = (uint8_t)rnd();
    }
    *out_size = hdr + nblocks * 16;
    return d;
}
#endif
