/*
 * plat_time.h - tiempo, vblank e hilos (PORT_PLAN 3.9).
 * El juego avanza un paso por vblank: el ritmo vive aqui. El contador de
 * vblanks lo incrementa un temporizador del host o el vsync de la ventana;
 * en modo determinista solo lo mueve plat_time_step_vblank (tests y replays).
 */
#ifndef PLAT_TIME_H
#define PLAT_TIME_H

#include "plat_types.h"

PLAT_EXTERN_C_BEGIN

typedef struct plat_time_config {
    uint32_t struct_size;
    uint32_t vblank_hz_x1000;  /* 59940 NTSC, 50000 PAL; 0 = 59940 */
    int      deterministic;    /* 1 = sin reloj real, solo step_vblank */
} plat_time_config;

PLAT_API plat_status plat_time_init(const plat_time_config *cfg);
PLAT_API void        plat_time_shutdown(void);

PLAT_API uint64_t    plat_time_now_ns(void);           /* monotono */
PLAT_API void        plat_time_sleep_ns(uint64_t ns);

PLAT_API uint32_t    plat_time_vblank_count(void);
PLAT_API void        plat_time_step_vblank(void);      /* modo determinista o host con vsync */
/* Bloquea hasta que el contador supere `count`; en determinista avanza solo. */
PLAT_API void        plat_time_wait_vblank(void);

/* Aleatorio repetible (LCG propio), semilla fijable. */
PLAT_API void        plat_rand_seed(uint32_t seed);
PLAT_API uint32_t    plat_rand_u32(void);

/* Hilos y sincronizacion sobre primitivas del host. */
typedef plat_handle plat_thread_handle;
typedef plat_handle plat_sem_handle;
typedef void (*plat_thread_fn)(void *arg);

PLAT_API plat_status plat_thread_create(plat_thread_fn fn, void *arg, int priority, plat_thread_handle *out);
PLAT_API plat_status plat_thread_join(plat_thread_handle t);
PLAT_API plat_status plat_sem_create(int initial, int max, plat_sem_handle *out);
PLAT_API void        plat_sem_destroy(plat_sem_handle s);
PLAT_API plat_status plat_sem_signal(plat_sem_handle s);
PLAT_API plat_status plat_sem_wait(plat_sem_handle s, int64_t timeout_ns /* <0 infinito */);
PLAT_API plat_status plat_sem_poll(plat_sem_handle s);

PLAT_EXTERN_C_END
#endif /* PLAT_TIME_H */
