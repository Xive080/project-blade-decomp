#include "plat_audio_out.h"
#include "plat_vag.h"
#include "test_common.h"
#include <math.h>

static uint32_t rd32(const uint8_t *p) { return p[0] | (p[1] << 8) | (p[2] << 16) | ((uint32_t)p[3] << 24); }

int main(int argc, char **argv) {
    const char *path = argc > 1 ? argv[1] : "plat_m4_test.wav";
    plat_mixer *m = plat_mix_create(44100, 8);
    plat_audio_out *o = plat_audio_out_wav_open(path, 44100);
    int16_t pcm[441];
    size_t i;
    plat_sample_id s;
    FILE *f;
    uint8_t h[44];
    long sz;

    CHECK(m && o);
    for (i = 0; i < 441; i++) pcm[i] = (int16_t)(10000 * sin(2 * 3.14159265 * (double)i / 441.0));
    s = plat_mix_add_sample(m, pcm, 441, 44100, 1, 0, 441);
    plat_mix_play(m, s, 1.0f, 1.0f, 1.0f);
    /* 3 "vblanks" de 735 frames y uno suelto de 1000: el tamano total debe ser exacto */
    CHECK_EQ(plat_audio_pump(m, o, 735), 0);
    CHECK_EQ(plat_audio_pump(m, o, 735), 0);
    CHECK_EQ(plat_audio_pump(m, o, 735), 0);
    CHECK_EQ(plat_audio_pump(m, o, 1000), 0);
    CHECK_EQ(plat_audio_out_frames_written(o), 3205);
    CHECK_EQ(plat_mix_frames_rendered(m), 3205);
    CHECK_EQ(plat_audio_out_close(o), 0);

    f = fopen(path, "rb");
    CHECK(f != NULL);
    if (f) {
        CHECK_EQ(fread(h, 1, 44, f), 44);
        fseek(f, 0, SEEK_END); sz = ftell(f);
        CHECK_EQ(sz, 44 + 3205 * 4);
        CHECK(memcmp(h, "RIFF", 4) == 0 && memcmp(h + 8, "WAVEfmt ", 8) == 0 && memcmp(h + 36, "data", 4) == 0);
        CHECK_EQ(rd32(h + 4), 36 + 3205 * 4);
        CHECK_EQ(rd32(h + 24), 44100);
        CHECK_EQ(rd32(h + 40), 3205 * 4);
        fclose(f);
        remove(path);
    }

    /* backend nulo y errores */
    o = plat_audio_out_null_open(48000);
    CHECK(o != NULL);
    CHECK_EQ(plat_audio_pump(m, o, 100), 0);
    CHECK_EQ(plat_audio_out_close(o), 0);
    CHECK(plat_audio_out_wav_open("/nonexistent_dir_m4/x.wav", 44100) == NULL);
    CHECK(plat_audio_out_wav_open(path, 0) == NULL);

#ifdef PLAT_AUDIO_SDL3
    /* smoke opcional: solo si M4_AUDIO_SMOKE esta definida en el entorno (abre el dispositivo real) */
    if (getenv("M4_AUDIO_SMOKE")) {
        plat_audio_out *so = plat_audio_out_sdl3_open(44100);
        printf("sdl3: %s\n", so ? "abierto" : "sin dispositivo");
        if (so) { plat_audio_pump(m, so, 4410); plat_audio_out_close(so); }
    }
#endif
    plat_mix_destroy(m);
    if (g_fail) { printf("test_audio_out: %d fallos\n", g_fail); return 1; }
    printf("test_audio_out: ok\n");
    return 0;
}
