/* SPDX-License-Identifier: AGPL-3.0-or-later */
/*
 * m1_arena.h - arena de memoria nativa del port (M1, PORT_PLAN 3.1, estrategia E2).
 *
 * Implementa plat_mem.h (M0, solo interfaces) y la amplia con:
 *   - Port_Ptr / Port_Addr: traduccion guest <-> host (host = base + guest).
 *   - un heap del juego (m1_heap_*) y el pool bajo (plat_mem_pool_*), ambos
 *     asignadores de rangos sobre la propia RDRAM, con metadatos fuera de ella.
 *   - un mapa de memoria de referencia (M1_MAP_*).
 *
 * Reserva: un solo rango virtual [base, base + 0x70004000) en PROT_NONE; solo se
 * "commitean" los 32 MB de RDRAM y los 16 KB de scratchpad. Asi el scratchpad
 * en 0x70000000 se traduce con la MISMA formula lineal, y cualquier acceso a un
 * hueco fuera de la RDRAM falla con una violacion de segmento en vez de leer
 * basura. La base la elige el SO (E2) o se pide (E1b, solo si el SO la da).
 *
 * Un solo hilo (hipotesis): no hay cerrojos.
 */
#ifndef M1_ARENA_H
#define M1_ARENA_H

#include "plat_types.h"
#include "plat_mem.h"

PLAT_EXTERN_C_BEGIN

/* Mapa de memoria de referencia. Valores propuestos: los limites del ELF
 * (0x100000-0x336280) vienen del log de la recomp; el resto es HIPOTESIS
 * (sin contrastar con el mapa real del juego) y se puede cambiar por config. */
#define M1_MAP_POOL_BASE   0x00010000u  /* pool bajo (bloques por direccion) */
#define M1_MAP_POOL_END    0x00100000u
#define M1_MAP_ELF_BASE    0x00100000u  /* segmento cargado del ELF */
#define M1_MAP_ELF_END     0x00336280u
#define M1_MAP_HEAP_BASE   0x00340000u  /* heap del juego */
#define M1_MAP_HEAP_END    0x01E00000u
#define M1_MAP_STACK_END   0x01FFFFF0u  /* cima de pila (crece hacia abajo) */

typedef struct m1_arena_config {
    uint32_t        struct_size;   /* sizeof(m1_arena_config) */
    plat_mem_config mem;           /* struct_size de mem lo rellena m1_arena_init */
    uint32_t        pool_base, pool_end;   /* 0,0 = valores por defecto */
    uint32_t        heap_base, heap_end;   /* 0,0 = valores por defecto */
} m1_arena_config;

/* cfg == NULL: valores por defecto (AUTO, 32 MB). Idempotente hasta shutdown. */
PLAT_API plat_status m1_arena_init(const m1_arena_config *cfg);
PLAT_API void        m1_arena_shutdown(void);
PLAT_API int         m1_arena_is_init(void);

PLAT_API uint8_t    *m1_arena_scratch(void);   /* host de 0x70000000; NULL sin init */

/* Heap del juego (equivale al malloc/free del juego sobre su RDRAM).
 * Devuelve direcciones del juego (0 = sin hueco). align: potencia de 2, minimo 16. */
PLAT_API plat_gaddr  m1_heap_alloc(uint32_t size, uint32_t align);
PLAT_API plat_status m1_heap_free(plat_gaddr a);
PLAT_API uint32_t    m1_heap_block_size(plat_gaddr a);       /* 0 si no es un bloque */
PLAT_API uint32_t    m1_heap_bytes_used(void);
PLAT_API uint32_t    m1_heap_bytes_free(void);
PLAT_API uint32_t    m1_heap_blocks_used(void);
PLAT_API uint32_t    m1_heap_largest_free(void);

PLAT_API uint32_t    m1_pool_bytes_used(void);
PLAT_API uint32_t    m1_pool_blocks_used(void);

/* Quita bits de segmento (misma logica que plat_mem_canonical). */
static inline plat_gaddr m1_canon(plat_gaddr a) {
    if (a >= PLAT_SCRATCHPAD_GADDR && a < PLAT_SCRATCHPAD_GADDR + PLAT_SCRATCHPAD_SIZE) return a;
    if (a >= 0x80000000u) return a & 0x1FFFFFFFu;                 /* KSEG0/KSEG1 */
    if (a >= 0x20000000u && a < 0x40000000u) return a & 0x0FFFFFFFu; /* sin cache / acelerado */
    return a;
}

/* Port_Ptr: guest -> host SIN comprobar rango (puntos calientes). 0 -> NULL, para
 * conservar la semantica de puntero nulo. Acepta espejos KSEG.
 * Port_Addr: host -> guest SIN comprobar. NULL -> 0. */
static inline void *Port_Ptr(plat_gaddr a) {
    return a ? (void *)(plat_mem_base() + m1_canon(a)) : (void *)0;
}
static inline plat_gaddr Port_Addr(const void *p) {
    return p ? (plat_gaddr)((const uint8_t *)p - plat_mem_base()) : 0u;
}

PLAT_EXTERN_C_END
#endif /* M1_ARENA_H */
