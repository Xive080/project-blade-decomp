/* SPDX-License-Identifier: AGPL-3.0-or-later */
/*
 * m1_stub_log.h - registro en tiempo de ejecucion de los stubs generados por
 * port/m1/tools/gen_stubs.py. Cada stub de funcion llama a m1_stub_hit() la
 * primera y las siguientes veces; el log guarda el orden de primera llamada.
 *
 * Criterio de M1: para la ruta acordada (por ejemplo hasta el primer
 * sceGsSetDefDBuff) m1_stub_called_count() debe ser 0.
 *
 * Variables de entorno (opcionales):
 *   M1_STUB_TRACE=1  imprime en stderr la primera llamada de cada stub.
 *   M1_STUB_ABORT=1  aborta en la primera llamada a un stub de funcion.
 *
 * Hilos: en GCC/clang los contadores usan operaciones atomicas; en otros
 * compiladores no son seguros entre hilos (hipotesis: sin probar en MSVC).
 */
#ifndef M1_STUB_LOG_H
#define M1_STUB_LOG_H

#include <stddef.h>
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

#define M1_STUB_FUNC 0u
#define M1_STUB_DATA 1u

typedef struct m1_stub_entry {
    const char *name;
    unsigned guest_addr;  /* 0 si el nombre no lleva direccion */
    unsigned kind;        /* M1_STUB_FUNC o M1_STUB_DATA */
    unsigned size;        /* bytes (solo datos) */
    unsigned calls;       /* llamadas hasta ahora */
    unsigned first_seq;   /* orden de primera llamada, desde 1; 0 = nunca */
} m1_stub_entry;

/* Generados en stubs.c */
extern m1_stub_entry m1_stub_table[];
extern const unsigned m1_stub_table_count;
void m1_stubs_init(void);

/* Lo llama m1_stubs_init() con la tabla generada. */
void m1_stub_set_table(m1_stub_entry *table, unsigned count);

/* Lo llama cada stub de funcion. */
void m1_stub_hit(m1_stub_entry *e);

/* Estadisticas. */
unsigned m1_stub_total_count(void);      /* stubs de funcion generados */
unsigned m1_stub_data_count(void);       /* stubs de datos generados */
unsigned m1_stub_called_count(void);     /* stubs de funcion distintos llamados */
unsigned long long m1_stub_total_calls(void);
const m1_stub_entry *m1_stub_nth_called(unsigned n); /* n-esimo por orden de primera llamada, NULL si no hay */
void m1_stub_reset(void);                /* pone a cero contadores y orden */

/* Vuelca el log: resumen y una linea por stub llamado (en orden de primera
 * llamada) y, si all != 0, tambien los no llamados y los datos. */
void m1_stub_stats(FILE *out, int all);

#ifdef __cplusplus
}
#endif
#endif
