/*
 * plat_timing.h - contador de vblank y timing (hito M2c).
 *
 * Genera vblanks a 60 / 59.94 / 50 Hz (PAL) con aritmetica entera exacta (sin
 * deriva), con reloj inyectable para tests y un modo manual determinista.
 * Sustituye al manejador de vblank de la recomp (EeScheduler) por un contador
 * que incrementa el anfitrion.
 *
 * Contexto (docs/PERFORMANCE_PLAN.md): la logica del juego va a 50 pasos/s
 * atada al vblank PAL; por eso PAL_50 es el modo por defecto.
 * HIPOTESIS: el juego no distingue vblank-start de vblank-end; aqui se emite
 * un unico evento por cuadro (INTC VBLANK_S).
 */
#ifndef PLAT_TIMING_H
#define PLAT_TIMING_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum plat_video_mode {
    PLAT_VIDEO_PAL_50 = 0,    /* 50 Hz exactos (la recomp usa 20000 us) */
    PLAT_VIDEO_NTSC_60 = 1,   /* 60 Hz exactos */
    PLAT_VIDEO_NTSC_59_94 = 2 /* 60000/1001 Hz */
} plat_video_mode;

typedef struct plat_timing plat_timing;

/* Reloj monotonico en nanosegundos. NULL = steady_clock. */
typedef uint64_t (*plat_clock_fn)(void *user);
/* Espera hasta 'ns' nanosegundos. NULL = std::this_thread::sleep_for. */
typedef void (*plat_sleep_fn)(void *user, uint64_t ns);
/* Manejador de vblank: se llama una vez por vblank, con el contador ya incrementado. */
typedef void (*plat_vblank_cb)(void *user, uint64_t vblank_count);

plat_timing *plat_timing_create(plat_video_mode mode);
void plat_timing_destroy(plat_timing *t);
void plat_timing_set_clock(plat_timing *t, plat_clock_fn clock, plat_sleep_fn sleep, void *user);
void plat_timing_set_mode(plat_timing *t, plat_video_mode mode); /* reinicia la referencia de tiempo conservando el contador */

/* Hasta 8 manejadores (equivalente a AddIntcHandler(VBLANK)). Devuelve id >=0 o -1. */
int plat_timing_add_vblank_handler(plat_timing *t, plat_vblank_cb cb, void *user);
int plat_timing_remove_vblank_handler(plat_timing *t, int id);

/* Maximo de vblanks que se recuperan de golpe si el anfitrion se retrasa; el resto se descarta
 * (cuenta en plat_timing_dropped). 0 = sin limite. Defecto 4. */
void plat_timing_set_max_catchup(plat_timing *t, uint32_t max_vblanks);

/* Fija el origen de tiempo en "ahora" y pone el contador a 0. */
void plat_timing_start(plat_timing *t);
/* Modo reloj: avanza segun el reloj. Devuelve los vblanks emitidos en esta llamada. */
uint32_t plat_timing_update(plat_timing *t);
/* Duerme hasta el siguiente vblank y llama a update. Devuelve los vblanks emitidos. */
uint32_t plat_timing_wait_next(plat_timing *t);
/* Modo determinista: emite n vblanks sin mirar el reloj (para replays y tests). */
void plat_timing_advance(plat_timing *t, uint32_t n);

uint64_t plat_timing_vblank_count(const plat_timing *t);
uint32_t plat_timing_vblank_count32(const plat_timing *t); /* contador de 32 bits como lo veria el guest */
uint64_t plat_timing_dropped(const plat_timing *t);
int plat_timing_field(const plat_timing *t);               /* paridad del contador: campo par/impar */
plat_video_mode plat_timing_mode(const plat_timing *t);

/* Constantes del modo. */
double plat_timing_hz(plat_video_mode mode);
double plat_timing_step_seconds(plat_video_mode mode);     /* 1/hz: el dt de un paso por vblank */
/* Instante (ns desde el inicio) en que ocurre el vblank numero n (n=0 es el inicio). Es el menor ns que cuenta ya n vblanks (redondeo hacia arriba). */
uint64_t plat_timing_vblank_time_ns(plat_video_mode mode, uint64_t n);
/* Cuantos vblanks han ocurrido tras 'ns' desde el inicio. Exacto, inverso de lo anterior. */
uint64_t plat_timing_vblanks_at(plat_video_mode mode, uint64_t ns);
/* Nanosegundos que faltan para el siguiente vblank segun el reloj. */
uint64_t plat_timing_ns_until_next(plat_timing *t);

#ifdef __cplusplus
}
#endif
#endif
