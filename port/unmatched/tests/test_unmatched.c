/* SPDX-License-Identifier: AGPL-3.0-or-later */
/*
 * Pruebas de port/unmatched. Tres capas:
 *  1) MMI portable contra vectores calculados a mano (sin ELF).
 *  2) Funciones portadas contra una referencia escalar escrita aparte (sin ELF).
 *  3) Funciones portadas contra el interprete tests/r5900_oracle.c ejecutando los BYTES ORIGINALES del ELF del
 *     usuario (AIRBLADE_ELF, o SCES_502.46 en el directorio actual). Sin ELF se omite y se avisa (SKIP).
 * El oraculo es nuestro interprete, no la recomp: no se ha ejecutado la recomp para estas pruebas.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdalign.h>
#include "m1_prelude.h"
#include "mmi_portable.h"
#include "r5900_oracle.h"

s32 func_001236f8(s32 c);
s32 func_00112318(u32 idx, u8 *out);
void func_00104308(u8 *dst, const s16 *a, const s16 *b);

/* ---- datos que el original lee de la RDRAM (en el port se cargan del disco del usuario) ---- */
u8 D_002EB340[512];
u32 D_002DBCB0[8];
u8 D_002EA6E0;
static u8 *g_tail_buf_host;        /* para convertir el puntero 'out' en un desplazamiento comparable */
static unsigned long g_tail_calls;
static s32 g_tail_ret_host;
static u32 g_tail_val_host;
static long g_tail_off_host;

s32 func_00121a58(void *out, u32 value)
{
    g_tail_calls++;
    g_tail_val_host = value;
    g_tail_off_host = (long)((u8 *)out - g_tail_buf_host);
    g_tail_ret_host = (s32)(value * 31u + (u32)g_tail_off_host);
    return g_tail_ret_host;
}

static unsigned long g_checks, g_fails;
#define CHECK(c, ...) do { g_checks++; if (!(c)) { g_fails++; if (g_fails <= 20) { fprintf(stderr, "FALLO %s:%d: ", __FILE__, __LINE__); fprintf(stderr, __VA_ARGS__); fputc('\n', stderr); } } } while (0)

static uint32_t rng_s = 0x9E3779B9u;
static uint32_t rnd(void) { rng_s ^= rng_s << 13; rng_s ^= rng_s >> 17; rng_s ^= rng_s << 5; return rng_s; }

/* ---------------------------------------------------------------- 1) MMI portable */
static void test_mmi(void)
{
    ps2_v128 a, b, r; int i;
    CHECK(mmi_selftest_endian(), "anfitrion no little-endian");
    for (i = 0; i < 8; i++) { mmi_h_set(&a, i, (int16_t)(0x7FFF - i)); mmi_h_set(&b, i, (int16_t)(i + 2)); }
    r = mmi_paddh(a, b);                                   /* 0x7FFF+2 desborda a 0x8001 (modular, no satura) */
    CHECK(mmi_h_get(r, 0) == (int16_t)0x8001 && mmi_h_get(r, 7) == (int16_t)(0x7FF8 + 9), "paddh modular");
    mmi_h_set(&a, 0, -5); mmi_h_set(&b, 0, 3);
    CHECK(mmi_h_get(mmi_pminh(a, b), 0) == -5 && mmi_h_get(mmi_pmaxh(a, b), 0) == 3, "pminh/pmaxh con signo");
    mmi_h_set(&a, 1, (int16_t)0x8000); mmi_h_set(&b, 1, 1);
    CHECK(mmi_h_get(mmi_pminh(a, b), 1) == (int16_t)0x8000, "pminh 0x8000 es el minimo (con signo)");
    for (i = 0; i < 16; i++) { a.b[i] = (uint8_t)(0x10 + i); b.b[i] = (uint8_t)(0x80 + i); }
    r = mmi_ppacb(a, b);                                   /* bajos: bytes pares de b(rt); altos: pares de a(rs) */
    CHECK(r.b[0] == 0x80 && r.b[1] == 0x82 && r.b[7] == 0x8E && r.b[8] == 0x10 && r.b[9] == 0x12 && r.b[15] == 0x1E, "ppacb");
    CHECK(mmi_movz(7, 9, 0) == 9 && mmi_movz(7, 9, 1) == 7 && mmi_movn(7, 9, 1) == 9 && mmi_movn(7, 9, 0) == 7, "movz/movn");
    CHECK(mmi_movz(7, 9, (int64_t)1 << 32) == 7, "movz compara 64 bits: mitad baja 0 y alta != 0 NO es cero");
}

/* ---------------------------------------------------------------- 2) referencias escalares */
static int ref_toupper(int c) { return (D_002EB340[c + 1] & 2) ? c - 32 : c; }
static void ref_clamp_add(u8 *dst, const s16 *a, const s16 *b)
{
    int k, j;
    for (k = 0; k < 24; k++)
        for (j = 0; j < 16; j++) {
            int16_t s = (int16_t)(uint16_t)((uint16_t)a[16 * k + j] + (uint16_t)b[16 * k + j]);
            dst[16 * k + j] = (u8)(s < 0 ? 0 : (s > 255 ? 255 : s));
        }
}
static void fill_a_b(s16 *a, s16 *b, int mode)
{
    int i;
    for (i = 0; i < 768; i++) {
        if (mode == 0) { a[i] = (s16)(rnd() & 0xFFFF); b[i] = (s16)(rnd() & 0xFFFF); }
        else if (mode == 1) { a[i] = (s16)((int)(rnd() % 700) - 300); b[i] = (s16)((int)(rnd() % 700) - 300); }
        else if (mode == 2) { a[i] = 0x7FFF; b[i] = 0x7FFF; }
        else if (mode == 3) { a[i] = (s16)0x8000; b[i] = (s16)0x8000; }
        else if (mode == 4) { a[i] = 255; b[i] = (s16)(i & 1); }
        else { a[i] = (s16)(i & 1 ? -1 : 0); b[i] = (s16)(i & 1 ? 1 : 0); }
    }
}

static void test_scalar_refs(void)
{
    int c, mode, t;
    alignas(16) static s16 a[768], b[768];
    alignas(16) static u8 d1[384], d2[384];
    for (c = 0; c < 512; c++) D_002EB340[c] = (u8)rnd();
    for (c = -1; c <= 255; c++) CHECK(func_001236f8(c) == ref_toupper(c), "toupper(%d)", c);
    for (mode = 0; mode < 6; mode++)
        for (t = 0; t < (mode < 2 ? 200 : 1); t++) {
            fill_a_b(a, b, mode);
            memset(d1, 0x5A, sizeof d1); memset(d2, 0xA5, sizeof d2);
            func_00104308(d1, a, b); ref_clamp_add(d2, a, b);
            CHECK(memcmp(d1, d2, sizeof d1) == 0, "clamp_add modo %d caso %d", mode, t);
        }
}

/* ---------------------------------------------------------------- 3) oraculo con bytes originales */
typedef struct { unsigned long calls; uint32_t a0, a1; } hook_rec;
static void hook_121a58(orc_cpu *c, void *user)
{
    hook_rec *h = (hook_rec *)user;
    h->calls++; h->a0 = (uint32_t)c->gpr[4]; h->a1 = (uint32_t)c->gpr[5];
    c->gpr[2] = (uint64_t)(int64_t)(int32_t)(h->a1 * 31u + (h->a0 - 0x00800000u));   /* mismo modelo que func_00121a58 (el buffer 'out' esta en 0x00800000) */
}
#define SE(x) ((uint64_t)(int64_t)(int32_t)(uint32_t)(x))

static void test_oracle(const char *elf)
{
    orc_cpu *c = orc_new();
    int i, idx;
    if (!c) { CHECK(0, "sin memoria"); return; }
    if (orc_load_elf(c, elf)) { printf("SKIP oraculo: no se pudo leer el ELF '%s' (AIRBLADE_ELF)\n", elf); orc_free(c); return; }

    /* el vector constante del MMI y la tabla ctype son datos reales del ELF */
    { static const u8 ff[16] = {0xff,0,0xff,0,0xff,0,0xff,0,0xff,0,0xff,0,0xff,0,0xff,0};
      CHECK(memcmp(c->mem + 0x1043B0, ff, 16) == 0, "vector de 0x1043B0 distinto de 8 x 0x00FF"); }

    /* --- 0x1236f8: toupper, con la tabla REAL del ELF y con una sintetica --- */
    for (i = 0; i < 2; i++) {
        int ch;
        if (i == 0) memcpy(D_002EB340, c->mem + 0x2EB340, 258);
        else { for (ch = 0; ch < 258; ch++) D_002EB340[ch] = (u8)rnd(); memcpy(c->mem + 0x2EB340, D_002EB340, 258); }
        for (ch = -1; ch <= 256; ch++) {
            c->gpr[4] = SE(ch);
            CHECK(orc_call(c, 0x001236F8, 100) == 0, "oraculo: %s", c->err ? c->err : "?");
            CHECK((int32_t)c->gpr[2] == func_001236f8(ch), "toupper(%d) tabla %s: original %d, port %d", ch, i ? "sintetica" : "real", (int32_t)c->gpr[2], func_001236f8(ch));
        }
    }
    memcpy(D_002EB340, c->mem + 0x2EB340, 258);   /* ancla independiente del interprete con la tabla (ya sintetica aqui) */
    /* ancla con la tabla real: se recarga del ELF */
    {
        orc_cpu *r = orc_new();
        if (r && orc_load_elf(r, elf) == 0) {
            memcpy(D_002EB340, r->mem + 0x2EB340, 258);
            CHECK(func_001236f8('a') == 'A' && func_001236f8('z') == 'Z' && func_001236f8('A') == 'A' && func_001236f8('1') == '1', "toupper con la tabla real");
        }
        orc_free(r);
    }

    /* --- 0x112318: tail call j --- */
    {
        static const u32 idxs[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 100, 0x7FFFFFFFu, 0x80000000u, 0xFFFFFFFFu};
        u8 host_out[8];
        hook_rec h;
        int round;
        memset(&h, 0, sizeof h);
        orc_hook(c, 0x00121A58, hook_121a58, &h);
        g_tail_buf_host = host_out;
        for (round = 0; round < 2; round++) {
            for (i = 0; i < 8; i++) D_002DBCB0[i] = round ? rnd() : (u32)c->mem[0x2DBCB0 + 4 * i] | (u32)c->mem[0x2DBCB0 + 4 * i + 1] << 8 | (u32)c->mem[0x2DBCB0 + 4 * i + 2] << 16 | (u32)c->mem[0x2DBCB0 + 4 * i + 3] << 24;
            D_002EA6E0 = round ? (u8)rnd() : c->mem[0x2EA6E0];
            if (round) {
                for (i = 0; i < 8; i++) { c->mem[0x2DBCB0 + 4 * i] = (u8)D_002DBCB0[i]; c->mem[0x2DBCB0 + 4 * i + 1] = (u8)(D_002DBCB0[i] >> 8); c->mem[0x2DBCB0 + 4 * i + 2] = (u8)(D_002DBCB0[i] >> 16); c->mem[0x2DBCB0 + 4 * i + 3] = (u8)(D_002DBCB0[i] >> 24); }
                c->mem[0x2EA6E0] = D_002EA6E0;
            }
            for (idx = 0; idx < (int)(sizeof idxs / sizeof idxs[0]); idx++) {
                s32 pr; unsigned long hc0 = h.calls, pc0 = g_tail_calls;
                memset(host_out, 0xAA, sizeof host_out); memset(c->mem + 0x00800000, 0xAA, 8);
                c->gpr[4] = SE(idxs[idx]); c->gpr[5] = 0x00800000u;
                CHECK(orc_call(c, 0x00112318, 200) == 0, "oraculo tail: %s", c->err ? c->err : "?");
                pr = func_00112318(idxs[idx], host_out);
                CHECK((h.calls - hc0) == (g_tail_calls - pc0), "idx %u: numero de llamadas al callee: original %lu, port %lu", idxs[idx], h.calls - hc0, g_tail_calls - pc0);
                CHECK(memcmp(host_out, c->mem + 0x00800000, 8) == 0, "idx %u: byte escrito en out difiere", idxs[idx]);
                if (idxs[idx] < 8u) {
                    CHECK(h.a1 == g_tail_val_host && (long)(h.a0 - 0x00800000u) == g_tail_off_host, "idx %u: argumentos del tail call difieren", idxs[idx]);
                    CHECK((int32_t)c->gpr[2] == pr, "idx %u: el retorno del callee no se propaga (%d vs %d)", idxs[idx], (int32_t)c->gpr[2], pr);
                }
            }
        }
    }

    /* --- 0x104308: MMI --- */
    {
        alignas(16) static s16 a[768], b[768];
        alignas(16) static u8 d_port[384];
        int mode, t;
        for (mode = 0; mode < 6; mode++)
            for (t = 0; t < (mode < 2 ? 100 : 1); t++) {
                fill_a_b(a, b, mode);
                memcpy(c->mem + 0x00800000, a, sizeof a);       /* 1536 B */
                memcpy(c->mem + 0x00801000, b, sizeof b);
                memset(c->mem + 0x00802000, 0x5A, 384); memset(d_port, 0x5A, sizeof d_port);
                c->gpr[4] = 0x00802000u; c->gpr[5] = 0x00800000u; c->gpr[6] = 0x00801000u;
                CHECK(orc_call(c, 0x00104308, 2000) == 0, "oraculo mmi: %s", c->err ? c->err : "?");
                func_00104308(d_port, a, b);
                CHECK(memcmp(d_port, c->mem + 0x00802000, 384) == 0, "mmi modo %d caso %d: el destino difiere del original", mode, t);
            }
    }
    printf("oraculo: instrucciones originales ejecutadas sin error; ultimo recuento de pasos %lu\n", c->steps);
    orc_free(c);
}

int main(int argc, char **argv)
{
    const char *elf = argc > 1 ? argv[1] : getenv("AIRBLADE_ELF");
    if (!elf || !*elf) elf = "SCES_502.46";
    test_mmi();
    test_scalar_refs();
    test_oracle(elf);
    printf("%lu comprobaciones, %lu fallos\n", g_checks, g_fails);
    return g_fails ? 1 : 0;
}
