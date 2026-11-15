/*
 * plat_audio.h - audio (PORT_PLAN 3.4).
 * Dos servicios: muestras cortas (sampler de efectos, ADPCM PS2 ya decodificado
 * o por decodificar) y streams largos (musica/voces). Las muestras se
 * identifican por manejador, nunca por direccion RDRAM. El tiempo se mide en
 * vblanks, no en reloj real, para no cambiar el timing del juego.
 */
#ifndef PLAT_AUDIO_H
#define PLAT_AUDIO_H

#include "plat_types.h"

PLAT_EXTERN_C_BEGIN

typedef plat_handle plat_sample_handle;
typedef plat_handle plat_voice_handle;
typedef plat_handle plat_stream_handle;

typedef enum plat_audio_format {
    PLAT_AUDIO_PCM16 = 0,      /* mono/estereo intercalado, little endian */
    PLAT_AUDIO_VAG_ADPCM = 1   /* bloques de 16 B del SPU2 */
} plat_audio_format;

typedef struct plat_audio_config {
    uint32_t struct_size;
    uint32_t sample_rate;     /* salida, 0 = 48000 */
    uint32_t max_voices;      /* 0 = 48 */
} plat_audio_config;

PLAT_API plat_status plat_audio_init(const plat_audio_config *cfg);
PLAT_API void        plat_audio_shutdown(void);

/* Eventos para compararlos con la recomp (PORT_PLAN 6.5). */
typedef struct plat_audio_event {
    uint32_t vblank;   /* contador de plat_time */
    uint32_t kind;     /* 1 play, 2 stop, 3 param */
    uint32_t id;       /* sample o stream */
    int32_t  pitch;    /* 4096 = 1.0 en el SPU2 */
    int32_t  volume_l, volume_r;
} plat_audio_event;
typedef void (*plat_audio_event_fn)(void *user, const plat_audio_event *ev);
PLAT_API void plat_audio_set_event_hook(plat_audio_event_fn fn, void *user);

/* Muestras: los datos se copian; ids estables dados por el llamador (banco). */
PLAT_API plat_status plat_audio_sample_load(const void *data, size_t size, plat_audio_format fmt,
                                            uint32_t rate, uint32_t channels, int loop_start_frame,
                                            plat_sample_handle *out);
PLAT_API void        plat_audio_sample_free(plat_sample_handle s);
PLAT_API plat_status plat_audio_play(plat_sample_handle s, int pitch, int vol_l, int vol_r,
                                     plat_voice_handle *voice_out);
PLAT_API void        plat_audio_voice_set(plat_voice_handle v, int pitch, int vol_l, int vol_r);
PLAT_API void        plat_audio_voice_stop(plat_voice_handle v);
PLAT_API int         plat_audio_voice_active(plat_voice_handle v);

/* Streams: se abren por ruta del juego (plat_file) o desde memoria. */
PLAT_API plat_status plat_audio_stream_open(const char *game_path, plat_stream_handle *out);
PLAT_API plat_status plat_audio_stream_play(plat_stream_handle s, int loop, int vol_l, int vol_r);
PLAT_API void        plat_audio_stream_stop(plat_stream_handle s);
PLAT_API void        plat_audio_stream_close(plat_stream_handle s);
/* Longitud y posicion en vblanks (la consulta que hace el juego). */
PLAT_API int32_t     plat_audio_stream_length_vblanks(plat_stream_handle s);
PLAT_API int32_t     plat_audio_stream_position_vblanks(plat_stream_handle s);

/* Mezcla: el host llama desde su callback de audio. Escribe frames estereo PCM16. */
PLAT_API void        plat_audio_mix(int16_t *out, uint32_t frames);

PLAT_EXTERN_C_END
#endif /* PLAT_AUDIO_H */
