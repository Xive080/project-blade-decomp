#include "plat_mixer.h"
#include "test_common.h"
#include <math.h>

#define RATE 48000

/* cuenta cruces ascendentes por cero del canal ch en [0,n) */
static int crossings(const int16_t *o, size_t n, int ch) {
    size_t i; int c = 0;
    for (i = 1; i < n; i++) if (o[2 * (i - 1) + ch] < 0 && o[2 * i + ch] >= 0) c++;
    return c;
}
static int peak(const int16_t *o, size_t n, int ch) {
    size_t i; int p = 0;
    for (i = 0; i < n; i++) { int v = abs(o[2 * i + ch]); if (v > p) p = v; }
    return p;
}
static void make_sine(int16_t *pcm, size_t n, double cycles, int amp) {
    size_t i;
    for (i = 0; i < n; i++) pcm[i] = (int16_t)(amp * sin(2.0 * 3.14159265358979 * cycles * (double)i / (double)n));
}

int main(void) {
    static int16_t sine[4800], out[2 * 48000];
    plat_mixer *m = plat_mix_create(RATE, 4);
    plat_sample_id s;
    plat_voice_id v;
    plat_mix_event ev;
    int i;

    CHECK(m != NULL);
    CHECK(plat_mix_create(0, 4) == NULL);
    CHECK(plat_mix_create(RATE, 0) == NULL);

    /* 4800 muestras a 48 kHz con 100 ciclos = 1000 Hz; en bucle */
    make_sine(sine, 4800, 100.0, 20000);
    s = plat_mix_add_sample(m, sine, 4800, RATE, 1, 0, 4800);
    CHECK(s != 0);

    /* tono nativo: 1000 Hz -> 1000 cruces en 1 s */
    v = plat_mix_play(m, s, 1.0f, 1.0f, 1.0f);
    CHECK(v != 0);
    plat_mix_render(m, out, 48000);
    CHECK(abs(crossings(out, 48000, 0) - 1000) <= 1);
    CHECK(abs(peak(out, 48000, 0) - 20000) <= 8);
    CHECK_EQ(plat_mix_is_playing(m, v), 1);

    /* pitch x2 */
    plat_mix_set_pitch(m, v, 2.0f);
    plat_mix_render(m, out, 48000);
    CHECK(abs(crossings(out, 48000, 0) - 2000) <= 2);
    /* pitch 0.5 */
    plat_mix_set_pitch(m, v, 0.5f);
    plat_mix_render(m, out, 48000);
    CHECK(abs(crossings(out, 48000, 0) - 500) <= 1);

    /* pitch SPU2: 0x1000=1, 0x2000=2, 0x0800=0.5, tope 0x3FFF */
    CHECK(plat_mix_pitch_from_spu(0x1000) == 1.0f);
    CHECK(plat_mix_pitch_from_spu(0x2000) == 2.0f);
    CHECK(plat_mix_pitch_from_spu(0x0800) == 0.5f);
    CHECK(plat_mix_pitch_from_spu(0xFFFF) == (float)0x3FFF / 4096.0f);

    /* volumen y pan: L=0.5, R=0 */
    plat_mix_set_pitch(m, v, 1.0f);
    plat_mix_set_volume(m, v, 0.5f, 0.0f);
    plat_mix_render(m, out, 4800);
    CHECK(abs(peak(out, 4800, 0) - 10000) <= 8);
    CHECK_EQ(peak(out, 4800, 1), 0);
    plat_mix_set_master(m, 0.5f);
    plat_mix_render(m, out, 4800);
    CHECK(abs(peak(out, 4800, 0) - 5000) <= 8);
    plat_mix_set_master(m, 1.0f);

    /* parada: silencio y id viejo invalido */
    plat_mix_stop(m, v);
    CHECK_EQ(plat_mix_is_playing(m, v), 0);
    plat_mix_render(m, out, 480);
    CHECK_EQ(peak(out, 480, 0), 0);
    CHECK(plat_mix_set_pitch(m, v, 1.0f) != 0);
    plat_mix_stop(m, v); /* repetido: no genera evento ni rompe */

    /* una voz nueva reutiliza el hueco pero el id viejo sigue muerto */
    {
        plat_voice_id v2 = plat_mix_play(m, s, 1.0f, 1.0f, 1.0f);
        CHECK(v2 != v);
        CHECK_EQ(plat_mix_is_playing(m, v), 0);
        CHECK_EQ(plat_mix_is_playing(m, v2), 1);
        plat_mix_stop_all(m);
        CHECK_EQ(plat_mix_active_voices(m), 0);
    }

    /* sin bucle: termina sola y se registra FINISHED en el frame exacto */
    {
        int16_t one[100];
        plat_sample_id s1;
        plat_voice_id v3;
        size_t n;
        uint64_t base;
        for (i = 0; i < 100; i++) one[i] = 1000;
        s1 = plat_mix_add_sample(m, one, 100, RATE, 0, 0, 0);
        plat_mix_events_clear(m);
        base = plat_mix_frames_rendered(m);
        v3 = plat_mix_play(m, s1, 1.0f, 1.0f, 1.0f);
        plat_mix_render(m, out, 300);
        CHECK_EQ(plat_mix_is_playing(m, v3), 0);
        CHECK_EQ(out[2 * 50], 1000);
        CHECK_EQ(out[2 * 150], 0);
        n = plat_mix_event_count(m);
        CHECK_EQ(n, 2);
        CHECK_EQ(plat_mix_event_get(m, 0, &ev), 0);
        CHECK_EQ(ev.type, PLAT_MIX_EV_PLAY);
        CHECK(ev.pitch == 1.0f && ev.vol_l == 1.0f && ev.sample == s1);
        plat_mix_event_get(m, 1, &ev);
        CHECK_EQ(ev.type, PLAT_MIX_EV_FINISHED);
        CHECK(ev.frame - base >= 99 && ev.frame - base <= 101);
        /* tasa de muestra distinta: 24 kHz a 48 kHz dura el doble */
        {
            plat_sample_id s2 = plat_mix_add_sample(m, one, 100, 24000, 0, 0, 0);
            plat_voice_id v4 = plat_mix_play(m, s2, 1.0f, 1.0f, 1.0f);
            plat_mix_render(m, out, 190);
            CHECK_EQ(plat_mix_is_playing(m, v4), 1);
            plat_mix_render(m, out, 20);
            CHECK_EQ(plat_mix_is_playing(m, v4), 0);
        }
    }

    /* bucle parcial: muestra rampa 0..99, bucle [50,100) -> tras la primera pasada nunca baja de 50 */
    {
        int16_t ramp[100];
        plat_sample_id sr;
        plat_voice_id vr;
        int min_after = 1 << 20;
        size_t k;
        for (i = 0; i < 100; i++) ramp[i] = (int16_t)(i * 100);
        sr = plat_mix_add_sample(m, ramp, 100, RATE, 1, 50, 100);
        vr = plat_mix_play(m, sr, 1.0f, 1.0f, 1.0f);
        plat_mix_render(m, out, 1000);
        for (k = 120; k < 1000; k++) if (out[2 * k] < min_after) min_after = out[2 * k];
        CHECK(min_after >= 5000);
        CHECK_EQ(plat_mix_is_playing(m, vr), 1);
        plat_mix_stop(m, vr);
    }

    /* robo de voz: 5 voces en un mezclador de 4 -> la mas antigua cae */
    {
        plat_voice_id ids[5];
        plat_mix_stop_all(m);
        plat_mix_events_clear(m);
        for (i = 0; i < 5; i++) ids[i] = plat_mix_play(m, s, 1.0f, 0.1f, 0.1f);
        CHECK_EQ(plat_mix_active_voices(m), 4);
        CHECK_EQ(plat_mix_is_playing(m, ids[0]), 0);
        CHECK_EQ(plat_mix_is_playing(m, ids[4]), 1);
        { int stolen = 0; size_t e; for (e = 0; e < plat_mix_event_count(m); e++) { plat_mix_event_get(m, e, &ev); stolen += ev.type == PLAT_MIX_EV_STOLEN; } CHECK_EQ(stolen, 1); }
        plat_mix_stop_all(m);
    }

    /* saturacion: dos voces a tope no desbordan */
    {
        int16_t loud[64];
        plat_sample_id sl;
        for (i = 0; i < 64; i++) loud[i] = 30000;
        sl = plat_mix_add_sample(m, loud, 64, RATE, 1, 0, 64);
        plat_mix_play(m, sl, 1.0f, 1.0f, 1.0f);
        plat_mix_play(m, sl, 1.0f, 1.0f, 1.0f);
        plat_mix_render(m, out, 64);
        CHECK_EQ(out[10], 32767);
        plat_mix_stop_all(m);
    }

    /* quitar una muestra detiene sus voces y su id deja de valer */
    {
        plat_voice_id vv = plat_mix_play(m, s, 1.0f, 1.0f, 1.0f);
        plat_mix_remove_sample(m, s);
        CHECK_EQ(plat_mix_is_playing(m, vv), 0);
        CHECK_EQ(plat_mix_play(m, s, 1.0f, 1.0f, 1.0f), 0);
        s = plat_mix_add_sample(m, sine, 100, RATE, 0, 0, 0);
        CHECK(s != 0);
    }

    /* parametros invalidos */
    CHECK_EQ(plat_mix_add_sample(m, sine, 0, RATE, 0, 0, 0), 0);
    CHECK_EQ(plat_mix_add_sample(m, sine, 10, RATE, 1, 8, 4), 0);

    /* determinismo: dos mezcladores con la misma secuencia dan bytes identicos */
    {
        plat_mixer *a = plat_mix_create(RATE, 8), *b = plat_mix_create(RATE, 8);
        static int16_t oa[2 * 3000], ob[2 * 3000];
        plat_sample_id sa = plat_mix_add_sample(a, sine, 4800, 32000, 1, 0, 4800);
        plat_sample_id sb = plat_mix_add_sample(b, sine, 4800, 32000, 1, 0, 4800);
        plat_mix_play(a, sa, 1.37f, 0.7f, 0.3f); plat_mix_play(b, sb, 1.37f, 0.7f, 0.3f);
        plat_mix_render(a, oa, 3000); plat_mix_render(b, ob, 3000);
        CHECK(memcmp(oa, ob, sizeof oa) == 0);
        plat_mix_destroy(a); plat_mix_destroy(b);
    }

    plat_mix_destroy(m);
    if (g_fail) { printf("test_mixer: %d fallos\n", g_fail); return 1; }
    printf("test_mixer: ok\n");
    return 0;
}
