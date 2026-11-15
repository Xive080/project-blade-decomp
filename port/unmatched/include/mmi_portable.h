/* SPDX-License-Identifier: AGPL-3.0-or-later */
/*
 * mmi_portable.h - las pocas instrucciones MMI del R5900 que usan las funciones de
 * port/unmatched, en C99 portable (sin intrinsecos de ningun SIMD concreto).
 * Semantica escrita desde el manual del EE (conocimiento general, no copiada de ningun
 * proyecto); cada una se contrasta en tests/test_unmatched.c contra un interprete que
 * ejecuta los bytes originales (verificacion cruzada, no es prueba formal).
 *
 * Hipotesis: anfitrion little-endian (x86-64, arm64 en macOS/Linux/Windows). Si no lo es,
 * ps2_v128 hay que reescribirlo con extraccion explicita; mmi_selftest_endian() lo detecta.
 * No incluye movz/movn de 64 bits mas alla de lo documentado abajo.
 */
#ifndef PORT_UNMATCHED_MMI_PORTABLE_H
#define PORT_UNMATCHED_MMI_PORTABLE_H
#include <stdint.h>
#include <string.h>

typedef struct ps2_v128 { uint8_t b[16]; } ps2_v128;   /* registro de 128 bits, orden de memoria PS2 */

static inline int mmi_selftest_endian(void) { const uint16_t x = 1; uint8_t c; memcpy(&c, &x, 1); return c == 1; }

/* lq / sq: copia de 16 bytes sin exigir alineacion. El EE ignora los 4 bits bajos de la direccion (hipotesis,
 * no medido aqui): los llamadores deben pasar direcciones alineadas a 16 si el original las tenia. */
static inline ps2_v128 mmi_lq(const void *p) { ps2_v128 v; memcpy(&v, p, 16); return v; }
static inline void mmi_sq(void *p, ps2_v128 v) { memcpy(p, &v, 16); }

static inline int16_t mmi_h_get(ps2_v128 v, int i) { int16_t h; memcpy(&h, v.b + 2 * i, 2); return h; }
static inline void mmi_h_set(ps2_v128 *v, int i, int16_t h) { memcpy(v->b + 2 * i, &h, 2); }

/* PADDH rd,rs,rt: suma de 8 medias palabras, con desbordamiento modular (NO satura). */
static inline ps2_v128 mmi_paddh(ps2_v128 s, ps2_v128 t) {
    ps2_v128 d; int i;
    for (i = 0; i < 8; i++) mmi_h_set(&d, i, (int16_t)(uint16_t)((uint16_t)mmi_h_get(s, i) + (uint16_t)mmi_h_get(t, i)));
    return d;
}
/* PMINH / PMAXH: minimo y maximo CON signo por media palabra. */
static inline ps2_v128 mmi_pminh(ps2_v128 s, ps2_v128 t) {
    ps2_v128 d; int i;
    for (i = 0; i < 8; i++) { int16_t a = mmi_h_get(s, i), b = mmi_h_get(t, i); mmi_h_set(&d, i, a < b ? a : b); }
    return d;
}
static inline ps2_v128 mmi_pmaxh(ps2_v128 s, ps2_v128 t) {
    ps2_v128 d; int i;
    for (i = 0; i < 8; i++) { int16_t a = mmi_h_get(s, i), b = mmi_h_get(t, i); mmi_h_set(&d, i, a > b ? a : b); }
    return d;
}
/* PPACB rd,rs,rt: los bytes pares de rt van a los 8 bajos de rd; los pares de rs, a los 8 altos. */
static inline ps2_v128 mmi_ppacb(ps2_v128 s, ps2_v128 t) {
    ps2_v128 d; int i;
    for (i = 0; i < 8; i++) { d.b[i] = t.b[2 * i]; d.b[8 + i] = s.b[2 * i]; }
    return d;
}
/* Escalares: MOVZ/MOVN rd,rs,rt comparan rt ENTERO DE 64 BITS con 0. Con operandos de 32 bits el resultado es el de
 * (rt == 0) / (rt != 0), pero si rt es un s64 cuya mitad baja es 0 y la alta no, difiere: pasar el tipo de 64 bits. */
static inline int64_t mmi_movz(int64_t rd_old, int64_t rs, int64_t rt) { return rt == 0 ? rs : rd_old; }
static inline int64_t mmi_movn(int64_t rd_old, int64_t rs, int64_t rt) { return rt != 0 ? rs : rd_old; }
#endif
