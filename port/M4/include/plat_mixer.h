/* plat_mixer: mezclador de voces (muestras PCM mono -> estereo int16).
 * No es hilo-seguro: el llamador serializa API y plat_mix_render. */
#ifndef PLAT_MIXER_H
#define PLAT_MIXER_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct plat_mixer plat_mixer;
typedef uint32_t plat_sample_id; /* 0 = invalido */
typedef uint32_t plat_voice_id;  /* 0 = invalido; lleva generacion, un id viejo no afecta a la voz reutilizada */

typedef enum plat_mix_event_type {
    PLAT_MIX_EV_PLAY = 1,
    PLAT_MIX_EV_STOP = 2,       /* parada pedida por el juego */
    PLAT_MIX_EV_FINISHED = 3,   /* fin natural de muestra sin bucle */
    PLAT_MIX_EV_STOLEN = 4      /* voz robada por falta de hueco */
} plat_mix_event_type;

typedef struct plat_mix_event {
    int type;
    plat_voice_id voice;
    plat_sample_id sample;
    float pitch;
    float vol_l, vol_r;
    uint64_t frame; /* frames de salida renderizados hasta ese momento */
} plat_mix_event;

plat_mixer *plat_mix_create(uint32_t out_rate, int max_voices);
void plat_mix_destroy(plat_mixer *m);

/* Copia el PCM. loop_end==0 y has_loop==0: sin bucle. Devuelve 0 si falla. */
plat_sample_id plat_mix_add_sample(plat_mixer *m, const int16_t *pcm, size_t count, uint32_t rate,
                                   int has_loop, size_t loop_start, size_t loop_end);
void plat_mix_remove_sample(plat_mixer *m, plat_sample_id id); /* para las voces que la usan */

/* pitch: razon de velocidad (1.0 = tasa nativa). vol: 0..1 por canal. */
plat_voice_id plat_mix_play(plat_mixer *m, plat_sample_id s, float pitch, float vol_l, float vol_r);
void plat_mix_stop(plat_mixer *m, plat_voice_id v);
void plat_mix_stop_all(plat_mixer *m);
int plat_mix_set_pitch(plat_mixer *m, plat_voice_id v, float pitch);
int plat_mix_set_volume(plat_mixer *m, plat_voice_id v, float vol_l, float vol_r);
int plat_mix_is_playing(const plat_mixer *m, plat_voice_id v);
int plat_mix_active_voices(const plat_mixer *m);
void plat_mix_set_master(plat_mixer *m, float vol);

/* Conversion del registro PITCH del SPU2 (0x1000 = 1.0, tope 0x3FFF) a razon. */
float plat_mix_pitch_from_spu(uint16_t reg);
/* Volumen de voz SPU2 en modo directo (int16 con signo, 0x7FFF = 1.0) a 0..1. */
float plat_mix_volume_from_spu(int16_t reg);

/* Escribe frames*2 int16 intercalados (L,R). */
void plat_mix_render(plat_mixer *m, int16_t *out, size_t frames);

/* Registro de eventos (para comparar con un replay de la recomp). */
size_t plat_mix_event_count(const plat_mixer *m);
int plat_mix_event_get(const plat_mixer *m, size_t i, plat_mix_event *ev);
void plat_mix_events_clear(plat_mixer *m);
uint64_t plat_mix_frames_rendered(const plat_mixer *m);

#ifdef __cplusplus
}
#endif
#endif
