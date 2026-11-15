/* SPDX-License-Identifier: AGPL-3.0-or-later */
#include "check.h"
#include "m1/m1_arena.h"
#include <string.h>

int main(void) {
    plat_gaddr a, b, c, g;
    uint8_t buf[64];
    uint8_t *base;

    /* sin init */
    CHECK(plat_mem_base() == NULL);
    CHECK(plat_mem_g2h(0, 0) == NULL);
    CHECK(m1_heap_alloc(16, 16) == 0);
    CHECK(Port_Ptr(0) == NULL && Port_Addr(NULL) == 0);

    CHECK(m1_arena_init(NULL) == PLAT_OK);
    CHECK(m1_arena_init(NULL) == PLAT_OK);           /* idempotente */
    base = plat_mem_base();
    CHECK(base != NULL);
    CHECK(plat_mem_size() == PLAT_RDRAM_SIZE);
    CHECK(plat_mem_active_strategy() == PLAT_MEM_OFFSET32);
    CHECK(m1_arena_scratch() == base + PLAT_SCRATCHPAD_GADDR);

    /* RDRAM a ceros, escribible y leible en todo su rango */
    CHECK(base[0] == 0 && base[PLAT_RDRAM_SIZE - 1] == 0);
    CHECK(plat_mem_write(PLAT_RDRAM_SIZE - 4, "abcd", 4) == PLAT_OK);
    CHECK(memcmp(base + PLAT_RDRAM_SIZE - 4, "abcd", 4) == 0);
    CHECK(plat_mem_write(PLAT_RDRAM_SIZE - 3, "abcd", 4) == PLAT_E_RANGE);
    CHECK(plat_mem_g2h(PLAT_RDRAM_SIZE, 1) == NULL);
    CHECK(plat_mem_g2h(PLAT_RDRAM_SIZE, 0) != NULL);   /* fin de rango con len 0 */
    CHECK(plat_mem_g2h(0x00200000u, 16) == base + 0x200000);
    CHECK(plat_mem_g2h(0xFFFFFFF0u, 4) == NULL);
    CHECK(plat_mem_fill(0x1000, 0x5A, 8) == PLAT_OK && base[0x1007] == 0x5A && base[0x1008] == 0);
    CHECK(plat_mem_read(0x1000, buf, 8) == PLAT_OK && buf[3] == 0x5A);

    /* scratchpad: 16 KB en 0x70000000 con la misma formula lineal */
    CHECK(plat_mem_g2h(PLAT_SCRATCHPAD_GADDR, PLAT_SCRATCHPAD_SIZE) == base + PLAT_SCRATCHPAD_GADDR);
    CHECK(plat_mem_g2h(PLAT_SCRATCHPAD_GADDR, PLAT_SCRATCHPAD_SIZE + 1) == NULL);
    CHECK(plat_mem_g2h(PLAT_SCRATCHPAD_GADDR + PLAT_SCRATCHPAD_SIZE, 1) == NULL);
    CHECK(plat_mem_fill(PLAT_SCRATCHPAD_GADDR, 0x11, PLAT_SCRATCHPAD_SIZE) == PLAT_OK);
    CHECK(m1_arena_scratch()[PLAT_SCRATCHPAD_SIZE - 1] == 0x11);

    /* espejos KSEG */
    CHECK(plat_mem_canonical(0x20123456u) == 0x00123456u);
    CHECK(plat_mem_canonical(0x30123456u) == 0x00123456u);
    CHECK(plat_mem_canonical(0xA0123456u) == 0x00123456u);
    CHECK(plat_mem_canonical(0x80123456u) == 0x00123456u);
    CHECK(plat_mem_canonical(0x70000010u) == 0x70000010u);
    CHECK(plat_mem_canonical(0x10003000u) == 0x10003000u);   /* registros HW: sin tocar */
    CHECK(plat_mem_g2h(0x20001000u, 4) == base + 0x1000);

    /* Port_Ptr / Port_Addr */
    CHECK(Port_Ptr(0x1234) == base + 0x1234);
    CHECK(Port_Addr(base + 0x1234) == 0x1234);
    CHECK(Port_Ptr(0xA0001000u) == base + 0x1000);
    CHECK(Port_Addr(Port_Ptr(0x00345670u)) == 0x00345670u);
    CHECK(plat_mem_h2g(base + 0x777, &g) == PLAT_OK && g == 0x777);
    CHECK(plat_mem_h2g(base + PLAT_SCRATCHPAD_GADDR + 5, &g) == PLAT_OK && g == PLAT_SCRATCHPAD_GADDR + 5);
    CHECK(plat_mem_h2g(base + PLAT_RDRAM_SIZE, &g) == PLAT_E_RANGE);
    CHECK(plat_mem_h2g(base - 1, &g) == PLAT_E_RANGE);
    CHECK(plat_mem_h2g(NULL, &g) == PLAT_E_RANGE);

    /* heap: dentro del rango, alineado, sin solapes, libera y fusiona */
    CHECK(m1_heap_bytes_used() == 0);
    CHECK(m1_heap_bytes_free() == M1_MAP_HEAP_END - M1_MAP_HEAP_BASE);
    a = m1_heap_alloc(100, 16);
    b = m1_heap_alloc(4096, 256);
    c = m1_heap_alloc(1, 0);
    CHECK(a >= M1_MAP_HEAP_BASE && a < M1_MAP_HEAP_END && (a & 15) == 0);
    CHECK(b != 0 && (b & 255) == 0);
    CHECK(c != 0 && (c & 15) == 0);
    CHECK(m1_heap_block_size(a) == 112 && m1_heap_block_size(c) == 16);
    CHECK(a + 112 <= b || b + 4096 <= a);
    CHECK(c + 16 <= a || a + 112 <= c);
    CHECK(m1_heap_blocks_used() == 3);
    CHECK(m1_heap_bytes_used() == 112 + 4096 + 16);
    CHECK(m1_heap_free(a + 16) == PLAT_E_INVALID);    /* no es inicio de bloque */
    CHECK(m1_heap_free(a) == PLAT_OK);
    CHECK(m1_heap_free(a) == PLAT_E_INVALID);         /* doble free */
    CHECK(m1_heap_free(b) == PLAT_OK && m1_heap_free(c) == PLAT_OK);
    CHECK(m1_heap_bytes_used() == 0 && m1_heap_blocks_used() == 0);
    CHECK(m1_heap_largest_free() == M1_MAP_HEAP_END - M1_MAP_HEAP_BASE);   /* todo fusionado */
    CHECK(m1_heap_alloc(0, 16) == 0);
    CHECK(m1_heap_alloc(16, 24) == 0);                /* alineacion no potencia de 2 */
    CHECK(m1_heap_alloc(M1_MAP_HEAP_END, 16) == 0);   /* mas que el heap */
    CHECK(m1_heap_alloc(0xFFFFFFFFu, 16) == 0);

    /* heap: llenar con muchos bloques y comprobar que no se solapan */
    {
        enum { N = 2000 };
        static plat_gaddr p[N];
        int i, ok = 1;
        for (i = 0; i < N; i++) { p[i] = m1_heap_alloc(48 + (uint32_t)(i % 7) * 16, (i % 3) ? 16 : 64); if (!p[i]) ok = 0; }
        CHECK(ok);
        {   /* sin solapes: marca cada unidad de 16 B y exige que este libre */
            static uint8_t used[(M1_MAP_HEAP_END - M1_MAP_HEAP_BASE) / 16];
            for (i = 0; i < N && ok; i++) {
                uint32_t u, n = m1_heap_block_size(p[i]) / 16, s0 = (p[i] - M1_MAP_HEAP_BASE) / 16;
                for (u = 0; u < n; u++) { if (used[s0 + u]) ok = 0; used[s0 + u] = 1; }
            }
        }
        CHECK(ok);
        for (i = 0; i < N; i += 2) CHECK(m1_heap_free(p[i]) == PLAT_OK);
        for (i = 1; i < N; i += 2) CHECK(m1_heap_free(p[i]) == PLAT_OK);
        CHECK(m1_heap_blocks_used() == 0);
        CHECK(m1_heap_largest_free() == M1_MAP_HEAP_END - M1_MAP_HEAP_BASE);
    }

    /* heap agotado */
    a = m1_heap_alloc(M1_MAP_HEAP_END - M1_MAP_HEAP_BASE, 16);
    CHECK(a == M1_MAP_HEAP_BASE);
    CHECK(m1_heap_alloc(16, 16) == 0);
    CHECK(m1_heap_free(a) == PLAT_OK);

    /* pool bajo */
    a = plat_mem_pool_alloc(1000, 64);
    CHECK(a >= M1_MAP_POOL_BASE && a < M1_MAP_POOL_END && (a & 63) == 0);
    CHECK(m1_pool_blocks_used() == 1 && m1_pool_bytes_used() == 1008);
    plat_mem_pool_free(a);
    CHECK(m1_pool_blocks_used() == 0);
    CHECK(plat_mem_pool_alloc(M1_MAP_POOL_END, 16) == 0);

    /* shutdown: vuelve a ceros al reiniciar */
    plat_mem_write(0x2000, "x", 1);
    m1_arena_shutdown();
    CHECK(plat_mem_base() == NULL && !m1_arena_is_init());
    CHECK(plat_mem_init(NULL) == PLAT_OK);
    CHECK(plat_mem_base()[0x2000] == 0);
    plat_mem_shutdown();

    /* configuracion: RDRAM menor, configuraciones invalidas, base fija */
    {
        m1_arena_config cfg;
        memset(&cfg, 0, sizeof cfg);
        cfg.struct_size = sizeof cfg;
        cfg.mem.rdram_size = 8u * 1024 * 1024;
        CHECK(m1_arena_init(&cfg) == PLAT_OK);
        CHECK(plat_mem_size() == 8u * 1024 * 1024);
        CHECK(plat_mem_g2h(8u * 1024 * 1024 - 4, 4) != NULL && plat_mem_g2h(8u * 1024 * 1024, 4) == NULL);
        a = m1_heap_alloc(64, 16);
        CHECK(a >= M1_MAP_HEAP_BASE && a + 64 <= 8u * 1024 * 1024);
        m1_arena_shutdown();

        cfg.mem.rdram_size = 64u * 1024 * 1024;              /* mas que 32 MB */
        CHECK(m1_arena_init(&cfg) == PLAT_E_INVALID);
        cfg.mem.rdram_size = 0;
        cfg.mem.strategy = PLAT_MEM_LOW_FIXED;                /* sin base pedida */
        CHECK(m1_arena_init(&cfg) == PLAT_E_INVALID);
        cfg.mem.preferred_base = 0x10000;                     /* normalmente imposible en macOS arm64 */
        {
            plat_status s = m1_arena_init(&cfg);
            CHECK(s == PLAT_OK || s == PLAT_E_UNSUPPORTED || s == PLAT_E_NOMEM);
            if (s == PLAT_OK) {
                CHECK(plat_mem_active_strategy() == PLAT_MEM_LOW_FIXED);
                CHECK(plat_mem_base() == (uint8_t *)(uintptr_t)0x10000);
                m1_arena_shutdown();
            } else CHECK(!m1_arena_is_init());
        }
        memset(&cfg, 0, sizeof cfg);
        cfg.struct_size = sizeof cfg;
        cfg.heap_base = 0x00340008; cfg.heap_end = 0x00400000;   /* base no alineada a 16 */
        CHECK(m1_arena_init(&cfg) == PLAT_E_INVALID);
        cfg.heap_base = 0x00340000; cfg.heap_end = 0x04000000;   /* mas alla de la RDRAM */
        CHECK(m1_arena_init(&cfg) == PLAT_E_INVALID);
    }

    CHECK(plat_status_str(PLAT_E_RANGE)[0] != 0 && plat_status_str(-99)[0] != 0);
    DONE("test_arena");
}
