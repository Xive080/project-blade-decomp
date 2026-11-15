/* plat_audio_out: salida de audio portable. Modelo "push": el hilo del juego llama a write().
 * Backends: WAV (tests), nulo, y SDL3 si se compila con PLAT_AUDIO_SDL3. */
#ifndef PLAT_AUDIO_OUT_H
#define PLAT_AUDIO_OUT_H

#include <stddef.h>
#include <stdint.h>
#include "plat_mixer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct plat_audio_out plat_audio_out;

/* Estereo int16 intercalado. Devuelve 0 si ok. */
plat_audio_out *plat_audio_out_wav_open(const char *path, uint32_t rate);
plat_audio_out *plat_audio_out_null_open(uint32_t rate);
#ifdef PLAT_AUDIO_SDL3
plat_audio_out *plat_audio_out_sdl3_open(uint32_t rate); /* NULL si no hay dispositivo */
#endif

int plat_audio_out_write(plat_audio_out *o, const int16_t *stereo, size_t frames);
uint64_t plat_audio_out_frames_written(const plat_audio_out *o);
uint32_t plat_audio_out_rate(const plat_audio_out *o);
int plat_audio_out_close(plat_audio_out *o); /* WAV: cierra y fija las longitudes de cabecera */

/* Renderiza el mezclador en bloques y los escribe. Util para sincronizar por vblank. */
int plat_audio_pump(plat_mixer *m, plat_audio_out *o, size_t frames);

/* Interfaz para backends externos. */
typedef struct plat_audio_out_ops {
    int (*write)(void *ctx, const int16_t *stereo, size_t frames);
    int (*close)(void *ctx);
} plat_audio_out_ops;
plat_audio_out *plat_audio_out_custom(const plat_audio_out_ops *ops, void *ctx, uint32_t rate);

#ifdef __cplusplus
}
#endif
#endif
