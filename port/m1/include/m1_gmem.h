/* SPDX-License-Identifier: AGPL-3.0-or-later */
/*
 * m1_gmem.h - memoria "guest" del port M1 para el codigo portado de ensamblador
 * (port/m1/ported/) y las piezas RenderWare del port (port/m1/rwport/).
 *
 * Modelo de memoria (decision de M1, ver docs/port/m1.md "M1-cierre"):
 *   - Imagen [M1_IMG_BASE, M1_IMG_END): un bloque estatico del host (m1_img). Los
 *     simbolos de datos del C decompilado con direccion (D_XXXXXXXX, G_xxxx, unk_..)
 *     son alias de ese bloque (gen/data_image.c, generado), asi el C decompilado y el
 *     codigo portado ven los MISMOS bytes. Se rellena con el ELF del usuario
 *     (m1_image_load_elf), solo lectura del ELF.
 *   - 0x10000000-0x1FFFFFFF (registros HW): una pagina sumidero de 64 KB.
 *   - Resto: la arena E2 (Port_Ptr): RDRAM, scratchpad 0x70000000, espejos KSEG.
 * Las direcciones guest son de 32 bits. Un puntero del host NO cabe en ellas:
 * en la frontera C-decompilado <-> codigo-portado hay que traducir a mano.
 */
#ifndef M1_GMEM_H
#define M1_GMEM_H
#include <stdint.h>
#include <string.h>
#include <stdio.h>

#define M1_IMG_BASE 0x00100000u
#define M1_IMG_END  0x00340000u        /* fin de .bss (0x336280) redondeado a pagina */
#define M1_IMG_SIZE (M1_IMG_END - M1_IMG_BASE)
#define M1_GP       0x002f96f0u        /* $gp del crt0 (confirmado en el desensamblado) */

extern unsigned char m1_img[M1_IMG_SIZE];   /* definido en gen/data_image.c */

unsigned char *m1_gptr_slow(uint32_t a);    /* hw sumidero / arena */
static inline unsigned char *m1_gptr(uint32_t a) {
    if (a >= M1_IMG_BASE && a < M1_IMG_END) return m1_img + (a - M1_IMG_BASE);
    return m1_gptr_slow(a);
}
static inline uint32_t m1_lw(uint32_t a)  { uint32_t v; memcpy(&v, m1_gptr(a), 4); return v; }
static inline uint32_t m1_lhu(uint32_t a) { uint16_t v; memcpy(&v, m1_gptr(a), 2); return v; }
static inline int32_t  m1_lh(uint32_t a)  { int16_t v;  memcpy(&v, m1_gptr(a), 2); return v; }
static inline uint32_t m1_lbu(uint32_t a) { return *m1_gptr(a); }
static inline uint64_t m1_ld(uint32_t a)  { uint64_t v; memcpy(&v, m1_gptr(a), 8); return v; }
static inline void m1_sw(uint32_t a, uint32_t v) { memcpy(m1_gptr(a), &v, 4); }
static inline void m1_sh(uint32_t a, uint32_t v) { uint16_t x = (uint16_t)v; memcpy(m1_gptr(a), &x, 2); }
static inline void m1_sb(uint32_t a, uint32_t v) { *m1_gptr(a) = (unsigned char)v; }
static inline void m1_sd(uint32_t a, uint64_t v) { memcpy(m1_gptr(a), &v, 8); }
/* lq/sq: los 4 bits bajos de la direccion se ignoran (hipotesis ya usada en port/unmatched) */
static inline void m1_lq(uint32_t a, uint64_t *lo, uint64_t *hi) { uint64_t t[2]; memcpy(t, m1_gptr(a & ~15u), 16); *lo = t[0]; *hi = t[1]; }
static inline void m1_sq(uint32_t a, uint64_t lo, uint64_t hi) { uint64_t t[2]; t[0] = lo; t[1] = hi; memcpy(m1_gptr(a & ~15u), t, 16); }

/* float de 32 bits sobre el patron de bits de un registro FPR; trunc.w.s satura como la FPU del R5900 */
static inline float m1_f(uint32_t b) { float f; memcpy(&f, &b, 4); return f; }
static inline uint32_t m1_fb(float f) { uint32_t b; memcpy(&b, &f, 4); return b; }
static inline uint32_t m1_trunc_w_s(uint32_t b) {
    float f = m1_f(b);
    if (!(f == f)) return 0x7fffffffu;
    if (f >= 2147483648.0f) return 0x7fffffffu;
    if (f <= -2147483648.0f) return 0x80000000u;
    return (uint32_t)(int32_t)f;
}

/* Pila guest de las funciones portadas: la fija el punto de entrada (m1_gstack_init). */
extern uint32_t m1_gsp;
void m1_gstack_init(uint32_t top);

/* Llamada indirecta (jalr): busca la direccion guest en la tabla de funciones enlazadas.
 * Si no esta, informa y aborta (no se inventa un destino). */
uint64_t m1_callg(uint32_t addr, uint64_t a0, uint64_t a1, uint64_t a2, uint64_t a3);

/* Escrituras a registros HW (0x10000000-0x1FFFFFFF) vistas por el sumidero: para el informe. */
unsigned m1_hw_write_count(void);

/* ---- imagen del ELF ---- */
/* Carga los segmentos PT_LOAD del ELF32 LE en m1_img y calcula CRC-32 de lo cargado.
 * Devuelve 0 si bien; <0 si no se puede abrir o no es el ELF esperado. No copia el ELF. */
int  m1_image_load_elf(const char *path, uint32_t *crc_out, uint32_t *bytes_out);
/* Tablas de datos del ELF que la ruta de arranque necesita, con su CRC-32 (medido sobre SCES_502.46 con
 * zlib.crc32; el CRC no contiene datos del juego). Devuelve el numero de tablas que NO coinciden; imprime
 * una linea por tabla en `out` si no es NULL. Sirve para detectar un ELF distinto o una imagen corrupta. */
int  m1_image_verify_tables(FILE *out);
#endif
