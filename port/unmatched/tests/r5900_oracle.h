/* SPDX-License-Identifier: AGPL-3.0-or-later */
/*
 * r5900_oracle.h - interprete minimo del R5900, SOLO para pruebas: ejecuta las palabras de instruccion ORIGINALES
 * leidas del ELF del usuario (nunca versionado) y sirve de referencia para comparar el C portado.
 * Escrito desde cero (manual del EE); no copia PS2Recomp (GPLv3) ni ningun otro emulador.
 * Cubre solo las instrucciones que usan las funciones de port/unmatched; una instruccion no soportada aborta
 * la ejecucion (rc != 0) en vez de seguir en silencio. Limites: sin excepciones, sin FPU/VU, sin branch-likely,
 * memoria plana de 32 MB sin espejos KSEG, un solo hilo. Hooks: al llegar a una direccion enganchada se llama a
 * la funcion de C y se vuelve a $ra (modela una llamada o tail call a otra funcion).
 */
#ifndef PORT_UNMATCHED_R5900_ORACLE_H
#define PORT_UNMATCHED_R5900_ORACLE_H
#include <stddef.h>
#include <stdint.h>

#define ORC_MEM_SIZE 0x02000000u

typedef struct orc_cpu orc_cpu;
typedef void (*orc_hook_fn)(orc_cpu *c, void *user);

struct orc_cpu {
    uint64_t gpr[32];
    uint64_t gpr_hi[32];        /* mitad alta de 128 bits (lq/MMI) */
    uint8_t *mem;               /* ORC_MEM_SIZE bytes */
    uint32_t pc;
    uint32_t hook_addr[8];
    orc_hook_fn hook_fn[8];
    void *hook_user[8];
    int nhooks;
    unsigned long steps;
    const char *err;
};

orc_cpu *orc_new(void);
void orc_free(orc_cpu *c);
int orc_load_elf(orc_cpu *c, const char *path);   /* carga el primer segmento LOAD con datos; 0 = bien */
void orc_hook(orc_cpu *c, uint32_t addr, orc_hook_fn fn, void *user);
/* Ejecuta desde `entry` hasta el primer `jr ra` que vuelve a la direccion centinela. 0 = bien; !=0 = error en c->err. */
int orc_call(orc_cpu *c, uint32_t entry, unsigned long max_steps);
#endif
