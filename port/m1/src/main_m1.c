/* SPDX-License-Identifier: AGPL-3.0-or-later */
/*
 * main_m1.c - punto de entrada del binario nativo del hito M1.
 *
 * Adaptacion de port/src/main_pc.c (que no se toca). Diferencias:
 *   - no arranca librw (AbRwEngineStart no existe todavia: ruta B/M7);
 *   - reserva la arena E2, reinicia el shim SDK y el log de stubs;
 *   - llama al main del juego decompilado: M1_GAME_ENTRY = 0x001953c0, el
 *     `jal` del crt0 0x00233218 (ver docs/port/m1.md, "M1-main"); --call 0xADDR
 *     fuerza otra funcion (p. ej. 0x00133a60, el arranque de RenderWare que
 *     func_001334b0, en asm MWCC, no puede llamar en este binario);
 *   - al terminar escribe el informe del hito: milestone, stubs llamados y
 *     el veredicto del criterio de M1.
 *
 * Opciones:
 *   --call 0xADDR   llama a la funcion decompilada con esa direccion (sin
 *                   argumentos; puede fallar: no es el arranque real)
 *   --shim-script   REPRODUCE la secuencia de SDK que muestra el log de la recomp
 *                   contra el shim. NO es codigo del juego: solo prueba que el
 *                   shim y el log estan bien enlazados en este binario.
 *   --stats-all     vuelca tambien los stubs no llamados
 *   --list          lista las funciones decompiladas enlazadas
 *   --elf RUTA      ELF del usuario (SCES_502.46) del que se cargan los datos en la imagen guest;
 *                   por omision la variable de entorno AIRBLADE_ELF. Solo lectura, no se copia.
 *   --no-stop       no parar en el primer sceGsSetDefDBuff (por omision se para: es el criterio de M1)
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>
#if !defined(_WIN32)
#include <signal.h>
#include <unistd.h>
#endif

#include "m1/m1_arena.h"
#include "m1_shim.h"
#include "sce_shim.h"
#include "m1_stub_log.h"
#include "m1_gmem.h"

/* CRC-32 de los segmentos PT_LOAD de SCES_502.46 (medido en esta maquina con zlib); solo para avisar
 * si el ELF cargado no es el esperado. No es el dato del juego. */
#define M1_ELF_EXPECTED_CRC 0x8d3911c0u
#define M1_GUEST_STACK_TOP  0x01fffff0u   /* hipotesis: SetupThread devuelve sp; la cima real no esta medida */

typedef struct { unsigned addr; void *fn; } m1_func_entry;
extern const m1_func_entry m1_func_table[];
extern const unsigned m1_func_table_count;

#ifndef M1_GAME_ENTRY
#define M1_GAME_ENTRY 0x001953c0u   /* main(argc, argv) llamado por el crt0 en 0x002332b4 */
#endif

static void *find_func(unsigned addr) {
    for (unsigned i = 0; i < m1_func_table_count; i++)
        if (m1_func_table[i].addr == addr) return m1_func_table[i].fn;
    return NULL;
}

static void shim_script(void) {
    /* Orden segun el log de la recomp (hipotesis: no cotejado con el main del juego). */
    sceSifInitRpc(0);
    sceSifInitIopHeap();
    sceSifLoadFileReset();
    sceSifRebootIop("cdrom0:\\IOPRP.IMG");
    sceSifSyncIop();
    sceCdInit(0);
    sceCdMmode(2);
    sceDmaReset(1);
    sceGsResetPath();
    sceGsResetGraph(0, 1, 2, 1);
    static sceGsDBuff db;
    sceGsSetDefDBuff(&db, 0, 640, 448, 1, 1, 1);
}

static int g_game_ran, g_script, g_stats_all;
static jmp_buf g_stop_jb;
static int g_stop_armed;

/* Se llama desde el shim tras registrar cada llamada SDK: en el hito paramos (el criterio de M1 es
 * "hasta el primer sceGsSetDefDBuff"). */
static void on_sdk_call(const m1sh_call *c, void *user) {
    (void)user;
    if (getenv("M1_SDK_TRACE") && c->name) {      /* M1_SDK_TRACE=1: cada llamada SDK; las de carga con su cadena */
        if (!strcmp(c->name, "sceSifLoadModule") || !strcmp(c->name, "sceSifRebootIop"))
            fprintf(stderr, "[m1-sdk] #%u %s(\"%s\")\n", c->seq, c->name, (const char *)(uintptr_t)c->arg[0]);
        else
            fprintf(stderr, "[m1-sdk] #%u %s\n", c->seq, c->name);
    }
    if (g_stop_armed && c->name && strcmp(c->name, "sceGsSetDefDBuff") == 0) longjmp(g_stop_jb, 1);
}

/* Informe del hito. crashed != 0 cuando lo escribe el manejador de SIGSEGV/SIGBUS:
 * no es seguro como senal asincrona, pero el proceso ya esta perdido y asi se ve
 * la ruta recorrida hasta el fallo (hipotesis de uso: solo diagnostico). */
static int report(int game_ran, int do_script, int stats_all, int crashed) {
    int ms = m1sh_milestone_reached();
    printf("\n== informe M1%s ==\n", crashed ? " (el codigo del juego se cayo: SIGSEGV/SIGBUS)" : "");
    printf("llamadas al shim SDK: %u (hito sceGsSetDefDBuff: %s)\n", m1sh_total(),
           ms ? "alcanzado" : "NO alcanzado");
    m1sh_dump(stdout);
    printf("stubs de funcion llamados: %u (llamadas totales %llu)\n", m1_stub_called_count(), m1_stub_total_calls());
    m1_stub_stats(stdout, stats_all);
    int met = game_ran && ms && !do_script && !crashed;
    printf("criterio M1 (codigo del juego llega a sceGsSetDefDBuff sin arnes): %s\n", met ? "hito alcanzado" : "NO CUMPLIDO");
    if (met)
        printf("  log de stubs de la ruta: %u stubs de funcion llamados (%s)\n", m1_stub_called_count(),
               m1_stub_called_count() == 0 ? "criterio estricto cumplido"
                                           : "cada uno debe estar justificado en docs/port/m1.md, M1-cierre");
    fflush(stdout);
    return met;
}

#if !defined(_WIN32)
static void on_crash(int sig) {
    (void)sig;
    report(g_game_ran, g_script, g_stats_all, 1);
    _exit(3);
}
#endif

int main(int argc, char **argv) {
    int do_script = 0, stats_all = 0, list = 0, no_stop = 0;
    const char *elf = getenv("AIRBLADE_ELF");
    unsigned entry = M1_GAME_ENTRY;
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "--shim-script")) do_script = 1;
        else if (!strcmp(argv[i], "--stats-all")) stats_all = 1;
        else if (!strcmp(argv[i], "--list")) list = 1;
        else if (!strcmp(argv[i], "--no-stop")) no_stop = 1;
        else if (!strcmp(argv[i], "--elf") && i + 1 < argc) elf = argv[++i];
        else if (!strcmp(argv[i], "--call") && i + 1 < argc) entry = (unsigned)strtoul(argv[++i], NULL, 0);
        else { fprintf(stderr, "opcion desconocida: %s\n", argv[i]); return 64; }
    }

    if (m1_arena_init(NULL) != PLAT_OK) {
        fprintf(stderr, "M1: no se pudo reservar la arena\n");
        return 1;
    }
    m1sh_reset();
    m1sh_set_milestone("sceGsSetDefDBuff");
    m1_stubs_init();

    printf("M1: arena E2 base=%p, %u funciones decompiladas enlazadas, %u stubs de funcion, %u de datos\n",
           (void *)plat_mem_base(), m1_func_table_count, m1_stub_total_count(), m1_stub_data_count());

    if (list) {
        for (unsigned i = 0; i < m1_func_table_count; i++) printf("0x%08x\n", m1_func_table[i].addr);
        m1_arena_shutdown();
        return 0;
    }

    if (elf && *elf) {
        uint32_t crc = 0, nb = 0;
        int rc = m1_image_load_elf(elf, &crc, &nb);
        if (rc != 0) {
            fprintf(stderr, "M1: no se pudo cargar el ELF (codigo %d): se sigue con la imagen a ceros\n", rc);
        } else {
            printf("M1: ELF cargado en la imagen guest: %u bytes, CRC-32 0x%08x (%s)\n", nb, crc,
                   crc == M1_ELF_EXPECTED_CRC ? "coincide con SCES_502.46" : "DISTINTO del SCES_502.46 esperado");
            int bad = m1_image_verify_tables(stdout);
            printf("M1: tablas de datos de la ruta: %s\n", bad ? "ALGUNA NO COINCIDE (otro ELF?)" : "todas coinciden");
        }
    } else {
        printf("M1: sin ELF (--elf o AIRBLADE_ELF): la imagen guest queda a ceros, la ruta no avanzara\n");
    }
    m1_gstack_init(M1_GUEST_STACK_TOP);

    int game_ran = 0;
    if (entry) {
        long long (*fn)(long long, long long) = (long long (*)(long long, long long))find_func(entry);
        if (!fn) {
            fprintf(stderr, "M1: 0x%08x no esta entre las funciones decompiladas enlazadas\n", entry);
        } else {
            printf("M1: llamando a func_%08x (argc=1, argv=0)\n", entry);
            fflush(stdout);
            g_game_ran = 1;
#if !defined(_WIN32)
            g_script = do_script; g_stats_all = stats_all;
            signal(SIGSEGV, on_crash);
            signal(SIGBUS, on_crash);
#endif
            m1sh_set_trace(on_sdk_call, NULL);
            if (!no_stop) g_stop_armed = 1;
            if (setjmp(g_stop_jb) == 0) {
                fn(1, 0);
            } else {
                printf("M1: primer sceGsSetDefDBuff alcanzado por el codigo del juego: se detiene la ejecucion\n");
            }
            g_stop_armed = 0;
            game_ran = 1;
        }
    } else {
        printf("M1: sin punto de entrada (M1_GAME_ENTRY=0): no se ejecuta codigo del juego\n");
    }
    if (do_script) {
        printf("M1: --shim-script: secuencia del log de la recomp contra el shim (NO es codigo del juego)\n");
        shim_script();
    }

    int met = report(game_ran, do_script, stats_all, 0);
    m1_arena_shutdown();
    return met ? 0 : 2;
}
