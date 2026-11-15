/*
 * plat_mem.h - memoria del juego (PORT_PLAN 3.1 y 3.2).
 *
 * El juego ve una arena de RDRAM de 32 MB direccionada con plat_gaddr.
 * La estrategia de punteros es un detalle de implementacion (vease
 * docs/port/m0.md, spike): la interfaz solo promete
 *   host = plat_mem_base() + guest         (traduccion lineal y barata)
 * de modo que E1b (rango bajo, base fija) y E2 (arena en cualquier sitio)
 * comparten esta API. El codigo del juego NO debe suponer base == 0.
 */
#ifndef PLAT_MEM_H
#define PLAT_MEM_H

#include "plat_types.h"

PLAT_EXTERN_C_BEGIN

#define PLAT_RDRAM_SIZE      (32u * 1024u * 1024u)
#define PLAT_SCRATCHPAD_SIZE (16u * 1024u)
#define PLAT_SCRATCHPAD_GADDR 0x70000000u  /* ventana del scratchpad de PS2 */

typedef enum plat_mem_strategy {
    PLAT_MEM_AUTO = 0,        /* elegir la mejor disponible */
    PLAT_MEM_LOW_FIXED = 1,   /* E1b: base fija por debajo de 4 GB (si el SO deja) */
    PLAT_MEM_OFFSET32 = 2     /* E2: base en cualquier direccion, offsets de 32 bits */
} plat_mem_strategy;

typedef struct plat_mem_config {
    uint32_t          struct_size;  /* sizeof(plat_mem_config), para evolucionar */
    plat_mem_strategy strategy;
    uintptr_t         preferred_base; /* 0 = lo decide la implementacion; solo LOW_FIXED */
    uint32_t          rdram_size;   /* 0 = PLAT_RDRAM_SIZE */
} plat_mem_config;

/* Reserva la arena (llenada de ceros) y el scratchpad. Idempotente mientras no
 * se llame a shutdown. Si strategy no esta disponible y no es AUTO, falla. */
PLAT_API plat_status plat_mem_init(const plat_mem_config *cfg);
PLAT_API void        plat_mem_shutdown(void);

PLAT_API plat_mem_strategy plat_mem_active_strategy(void);
PLAT_API uint8_t    *plat_mem_base(void);            /* host de guest 0; NULL sin init */
PLAT_API uint32_t    plat_mem_size(void);

/* Traducciones con comprobacion de rango. len = bytes que se van a usar
 * (0 = solo la direccion). Devuelven NULL / PLAT_E_RANGE si no cabe. */
PLAT_API void       *plat_mem_g2h(plat_gaddr a, size_t len);
PLAT_API plat_status plat_mem_h2g(const void *p, plat_gaddr *out);

/* Atajos sin comprobar para los puntos calientes (precondicion: validado). */
#define PLAT_G2H_FAST(a)  ((void *)(plat_mem_base() + (uint32_t)(a)))

/* Espejos KSEG de PS2: quita los bits altos de segmento (0x20000000 sin cache,
 * 0x30000000 acelerado, 0x80000000/0xA0000000 kernel) y devuelve la direccion
 * fisica dentro de RDRAM; pasa el scratchpad sin cambios. */
PLAT_API plat_gaddr  plat_mem_canonical(plat_gaddr a);

/* Copia/relleno con rango comprobado. */
PLAT_API plat_status plat_mem_read (plat_gaddr src, void *dst, size_t len);
PLAT_API plat_status plat_mem_write(plat_gaddr dst, const void *src, size_t len);
PLAT_API plat_status plat_mem_fill (plat_gaddr dst, uint8_t value, size_t len);

/* Asignador del propio port para bloques que el juego recibe por direccion
 * (pool bajo, 3.2). Alineacion minima 16. Devuelve 0 si no hay hueco. */
PLAT_API plat_gaddr  plat_mem_pool_alloc(uint32_t size, uint32_t align);
PLAT_API void        plat_mem_pool_free(plat_gaddr a);

PLAT_EXTERN_C_END
#endif /* PLAT_MEM_H */
