#include "check.h"
#include "plat_timing.h"

struct Fake { uint64_t now = 0; uint64_t slept = 0; };
static uint64_t fclock(void *u) { return ((Fake *)u)->now; }
static void fsleep(void *u, uint64_t ns) { ((Fake *)u)->now += ns; ((Fake *)u)->slept += ns; }
static uint64_t g_seen = 0; static int g_calls = 0;
static void on_vb(void *, uint64_t c) { g_seen = c; g_calls++; }

int main() {
    // Constantes exactas.
    CHECK(plat_timing_vblank_time_ns(PLAT_VIDEO_PAL_50, 50) == 1000000000ull);
    CHECK(plat_timing_vblank_time_ns(PLAT_VIDEO_NTSC_60, 60) == 1000000000ull);
    CHECK(plat_timing_vblank_time_ns(PLAT_VIDEO_NTSC_59_94, 60000) == 1001000000000ull);
    CHECK(plat_timing_vblank_time_ns(PLAT_VIDEO_PAL_50, 1) == 20000000ull); // = los 20000 us del parche PAL de la recomp
    CHECK(plat_timing_vblanks_at(PLAT_VIDEO_PAL_50, 19999999ull) == 0);
    CHECK(plat_timing_vblanks_at(PLAT_VIDEO_PAL_50, 20000000ull) == 1);
    for (uint64_t n = 1; n < 5000; n += 7)
        for (int m = 0; m < 3; m++) {
            uint64_t t = plat_timing_vblank_time_ns((plat_video_mode)m, n);
            CHECK(plat_timing_vblanks_at((plat_video_mode)m, t) == n);
            CHECK(plat_timing_vblanks_at((plat_video_mode)m, t - 1) == n - 1);
        }
    CHECK(plat_timing_hz(PLAT_VIDEO_PAL_50) > 49.999 && plat_timing_hz(PLAT_VIDEO_PAL_50) < 50.001);
    CHECK(plat_timing_hz(PLAT_VIDEO_NTSC_59_94) > 59.939 && plat_timing_hz(PLAT_VIDEO_NTSC_59_94) < 59.941);
    CHECK(plat_timing_step_seconds(PLAT_VIDEO_PAL_50) == 0.02);

    // Sin deriva: 10 minutos en NTSC 59.94 con pasos irregulares de reloj.
    {
        Fake f; plat_timing *t = plat_timing_create(PLAT_VIDEO_NTSC_59_94);
        plat_timing_set_clock(t, fclock, fsleep, &f);
        plat_timing_set_max_catchup(t, 0);
        plat_timing_start(t);
        uint64_t total = 600ull * 1000000000ull;
        uint64_t step = 7; // ns
        while (f.now < total) { f.now += step * 1000003ull; step = step % 13 + 1; plat_timing_update(t); }
        CHECK(plat_timing_vblank_count(t) == plat_timing_vblanks_at(PLAT_VIDEO_NTSC_59_94, f.now));
        plat_timing_destroy(t);
    }

    // Manejadores, contador y campo.
    {
        Fake f; plat_timing *t = plat_timing_create(PLAT_VIDEO_PAL_50);
        plat_timing_set_clock(t, fclock, fsleep, &f);
        int id = plat_timing_add_vblank_handler(t, on_vb, nullptr);
        CHECK(id == 0);
        plat_timing_start(t);
        f.now += 19999999; CHECK(plat_timing_update(t) == 0);
        f.now += 1; CHECK(plat_timing_update(t) == 1);
        CHECK(g_seen == 1 && g_calls == 1 && plat_timing_field(t) == 1);
        plat_timing_advance(t, 3);
        CHECK(plat_timing_vblank_count(t) == 4 && g_seen == 4 && plat_timing_field(t) == 0);
        CHECK(plat_timing_remove_vblank_handler(t, id) == 0);
        plat_timing_advance(t, 1);
        CHECK(g_calls == 4);
        CHECK(plat_timing_vblank_count32(t) == 5);
        plat_timing_destroy(t);
    }

    // wait_next: duerme exactamente lo que falta; sin acumular deriva.
    {
        Fake f; plat_timing *t = plat_timing_create(PLAT_VIDEO_NTSC_60);
        plat_timing_set_clock(t, fclock, fsleep, &f);
        plat_timing_start(t);
        for (int i = 0; i < 600; i++) CHECK(plat_timing_wait_next(t) == 1);
        CHECK(plat_timing_vblank_count(t) == 600);
        CHECK(f.now == 10000000000ull); // 600 vblanks a 60 Hz = 10 s exactos
        CHECK(plat_timing_dropped(t) == 0);
        plat_timing_destroy(t);
    }

    // Catch-up y descarte.
    {
        Fake f; plat_timing *t = plat_timing_create(PLAT_VIDEO_PAL_50);
        plat_timing_set_clock(t, fclock, fsleep, &f);
        plat_timing_start(t);
        f.now += 20000000ull * 10; // 10 vblanks de retraso
        CHECK(plat_timing_update(t) == 4);
        CHECK(plat_timing_dropped(t) == 6);
        CHECK(plat_timing_update(t) == 0); // no vuelve a recuperar los descartados
        f.now += 20000000ull;
        CHECK(plat_timing_update(t) == 1);
        plat_timing_destroy(t);
    }

    // Cambio de modo conserva el contador.
    {
        Fake f; plat_timing *t = plat_timing_create(PLAT_VIDEO_PAL_50);
        plat_timing_set_clock(t, fclock, fsleep, &f);
        plat_timing_advance(t, 7);
        plat_timing_set_mode(t, PLAT_VIDEO_NTSC_60);
        CHECK(plat_timing_vblank_count(t) == 7 && plat_timing_mode(t) == PLAT_VIDEO_NTSC_60);
        f.now += 16666667ull; CHECK(plat_timing_update(t) == 1);
        CHECK(plat_timing_vblank_count(t) == 8);
        plat_timing_destroy(t);
    }
    // Reloj real: una espera de un vblank no debe tardar mas de ~1 s.
    {
        plat_timing *t = plat_timing_create(PLAT_VIDEO_PAL_50);
        plat_timing_start(t);
        uint32_t n = plat_timing_wait_next(t);
        CHECK(n == 1);
        plat_timing_destroy(t);
    }
    DONE("timing");
}
