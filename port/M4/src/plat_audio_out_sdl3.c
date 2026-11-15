/* Backend SDL3 (opcional, -DPLAT_AUDIO_SDL3). Modelo push con SDL_AudioStream.
 * HIPOTESIS: no probado con altavoces reales; solo compilado y abierto en modo smoke. */
#ifdef PLAT_AUDIO_SDL3
#include "plat_audio_out.h"

#include <SDL3/SDL.h>
#include <stdlib.h>

typedef struct sdl_ctx { SDL_AudioStream *stream; uint32_t rate; } sdl_ctx;

static int sdl_write(void *vctx, const int16_t *s, size_t n) {
    sdl_ctx *c = (sdl_ctx *)vctx;
    /* limite de latencia: no acumular mas de ~250 ms; si se pasa, se descarta el exceso */
    int queued = SDL_GetAudioStreamQueued(c->stream);
    if (queued > (int)(c->rate / 4 * 4)) return 0;
    return SDL_PutAudioStreamData(c->stream, s, (int)(n * 4)) ? 0 : -1;
}

static int sdl_close(void *vctx) {
    sdl_ctx *c = (sdl_ctx *)vctx;
    SDL_DestroyAudioStream(c->stream);
    SDL_QuitSubSystem(SDL_INIT_AUDIO);
    free(c);
    return 0;
}

plat_audio_out *plat_audio_out_sdl3_open(uint32_t rate) {
    SDL_AudioSpec spec;
    sdl_ctx *c;
    plat_audio_out_ops ops;
    plat_audio_out *o;
    if (!SDL_InitSubSystem(SDL_INIT_AUDIO)) return NULL;
    spec.format = SDL_AUDIO_S16; spec.channels = 2; spec.freq = (int)rate;
    c = (sdl_ctx *)calloc(1, sizeof *c);
    if (!c) { SDL_QuitSubSystem(SDL_INIT_AUDIO); return NULL; }
    c->rate = rate;
    c->stream = SDL_OpenAudioDeviceStream(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, &spec, NULL, NULL);
    if (!c->stream) { free(c); SDL_QuitSubSystem(SDL_INIT_AUDIO); return NULL; }
    SDL_ResumeAudioStreamDevice(c->stream);
    ops.write = sdl_write; ops.close = sdl_close;
    o = plat_audio_out_custom(&ops, c, rate);
    if (!o) sdl_close(c);
    return o;
}
#endif
