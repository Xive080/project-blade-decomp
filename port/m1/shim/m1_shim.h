/* SPDX-License-Identifier: AGPL-3.0-or-later */
/*
 * m1_shim.h - registro de llamadas del shim SDK minimo (M1).
 *
 * Cada funcion sce* del shim anota su llamada (nombre, 4 primeros argumentos
 * como enteros de 64 bits, retorno) en un registro en orden. Sirve para:
 *   - comprobar el orden de arranque contra la recomp (traza comparable);
 *   - detectar el "hito" (por ejemplo el primer sceGsSetDefDBuff);
 *   - tests unitarios.
 * Un solo hilo (hipotesis). Prefijo m1sh_ en todo lo propio, para no chocar con
 * los stubs generados de otra pieza de M1.
 */
#ifndef M1_SHIM_H
#define M1_SHIM_H

#include <stdint.h>
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

#define M1SH_LOG_CAP 4096u   /* entradas guardadas; el contador total sigue contando */

typedef struct m1sh_call {
    uint32_t    seq;       /* orden de llamada, desde 0 */
    const char *name;      /* literal estatico */
    uint64_t    arg[4];
    int64_t     ret;
} m1sh_call;

/* Borra registro, hito y estado de los dispositivos simulados (sif/cd/gs/dma). */
void     m1sh_reset(void);

uint32_t m1sh_total(void);                       /* llamadas totales desde el reset */
const m1sh_call *m1sh_get(uint32_t i);           /* NULL si i >= total o se salio del cap */
uint32_t m1sh_count(const char *name);           /* veces que se llamo a name */
int64_t  m1sh_first_seq(const char *name);       /* seq de la primera llamada, -1 si ninguna */

/* Hito: nombre de la funcion que marca "llegamos al punto acordado". */
void     m1sh_set_milestone(const char *name);
int      m1sh_milestone_reached(void);           /* 1 si ya se llamo */
int64_t  m1sh_milestone_seq(void);               /* -1 si no */

/* Gancho opcional por llamada (trazas en vivo). */
typedef void (*m1sh_trace_fn)(const m1sh_call *c, void *user);
void     m1sh_set_trace(m1sh_trace_fn fn, void *user);

/* Texto: "<seq> <nombre>(a0,a1,a2,a3) = ret" por linea, comparable. */
void     m1sh_dump(FILE *f);

/* Uso interno de sce_shim.c. */
void     m1sh_record(const char *name, uint64_t a0, uint64_t a1, uint64_t a2, uint64_t a3, int64_t ret);

#ifdef __cplusplus
}
#endif
#endif /* M1_SHIM_H */
