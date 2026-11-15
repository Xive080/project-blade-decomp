// plat_timing.cpp - contador de vblank con aritmetica exacta. Diseno propio.
#include "plat_timing.h"

#include <chrono>
#include <thread>

namespace {

// Periodo del vblank = num/den ns.
struct Rate { uint64_t num, den; };

Rate rate_of(plat_video_mode m) {
    switch (m) {
    case PLAT_VIDEO_NTSC_60: return {50000000ull, 3ull};         // 1e9/60
    case PLAT_VIDEO_NTSC_59_94: return {50050000ull, 3ull};      // 1e9*1001/60000
    default: return {20000000ull, 1ull};                         // 1e9/50
    }
}

uint64_t default_clock(void *) {
    return (uint64_t)std::chrono::duration_cast<std::chrono::nanoseconds>(
               std::chrono::steady_clock::now().time_since_epoch()).count();
}
void default_sleep(void *, uint64_t ns) { std::this_thread::sleep_for(std::chrono::nanoseconds(ns)); }

} // namespace

struct plat_timing {
    plat_video_mode mode;
    plat_clock_fn clock = default_clock;
    plat_sleep_fn sleep = default_sleep;
    void *clock_user = nullptr;
    uint64_t t0 = 0;         // instante del vblank "base"
    uint64_t base_count = 0; // vblanks emitidos antes de t0 (al cambiar de modo)
    uint64_t count = 0;
    uint64_t emitted_since_t0 = 0; // vblanks (emitidos o descartados) desde t0
    uint64_t dropped = 0;
    uint32_t max_catchup = 4;
    struct H { plat_vblank_cb cb = nullptr; void *user = nullptr; } h[8];
};

extern "C" {

double plat_timing_hz(plat_video_mode m) { Rate r = rate_of(m); return 1e9 * (double)r.den / (double)r.num; }
double plat_timing_step_seconds(plat_video_mode m) { Rate r = rate_of(m); return (double)r.num / (double)r.den / 1e9; }

uint64_t plat_timing_vblank_time_ns(plat_video_mode m, uint64_t n) {
    Rate r = rate_of(m);
    // Menor ns con floor(ns*den/num) >= n, es decir ceil(n*num/den). Sin desbordar hasta n ~ 3.6e11.
    return (n * r.num + r.den - 1) / r.den;
}

uint64_t plat_timing_vblanks_at(plat_video_mode m, uint64_t ns) {
    Rate r = rate_of(m);
    return ns * r.den / r.num;
}

plat_timing *plat_timing_create(plat_video_mode m) {
    auto *t = new plat_timing;
    t->mode = m;
    t->t0 = t->clock(t->clock_user);
    return t;
}
void plat_timing_destroy(plat_timing *t) { delete t; }

void plat_timing_set_clock(plat_timing *t, plat_clock_fn c, plat_sleep_fn s, void *u) {
    if (!t) return;
    t->clock = c ? c : default_clock;
    t->sleep = s ? s : default_sleep;
    t->clock_user = u;
    t->t0 = t->clock(t->clock_user);
    t->emitted_since_t0 = 0;
}

void plat_timing_set_mode(plat_timing *t, plat_video_mode m) {
    if (!t) return;
    t->mode = m;
    t->t0 = t->clock(t->clock_user);
    t->emitted_since_t0 = 0;
}

int plat_timing_add_vblank_handler(plat_timing *t, plat_vblank_cb cb, void *u) {
    if (!t || !cb) return -1;
    for (int i = 0; i < 8; i++)
        if (!t->h[i].cb) { t->h[i].cb = cb; t->h[i].user = u; return i; }
    return -1;
}
int plat_timing_remove_vblank_handler(plat_timing *t, int id) {
    if (!t || id < 0 || id >= 8 || !t->h[id].cb) return -1;
    t->h[id] = plat_timing::H{};
    return 0;
}
void plat_timing_set_max_catchup(plat_timing *t, uint32_t n) { if (t) t->max_catchup = n; }

static void emit(plat_timing *t) {
    t->count++;
    for (auto &h : t->h)
        if (h.cb) h.cb(h.user, t->count);
}

void plat_timing_start(plat_timing *t) {
    if (!t) return;
    t->t0 = t->clock(t->clock_user);
    t->count = 0;
    t->emitted_since_t0 = 0;
    t->dropped = 0;
}

uint32_t plat_timing_update(plat_timing *t) {
    if (!t) return 0;
    uint64_t now = t->clock(t->clock_user);
    uint64_t elapsed = now >= t->t0 ? now - t->t0 : 0;
    uint64_t due = plat_timing_vblanks_at(t->mode, elapsed);
    if (due <= t->emitted_since_t0) return 0;
    uint64_t pending = due - t->emitted_since_t0;
    uint64_t run = pending;
    if (t->max_catchup && run > t->max_catchup) {
        t->dropped += run - t->max_catchup; // los vblanks perdidos no se emiten, pero el tiempo avanza
        run = t->max_catchup;
    }
    t->emitted_since_t0 = due;
    for (uint64_t i = 0; i < run; i++) emit(t);
    return (uint32_t)run;
}

uint64_t plat_timing_ns_until_next(plat_timing *t) {
    if (!t) return 0;
    uint64_t now = t->clock(t->clock_user);
    uint64_t elapsed = now >= t->t0 ? now - t->t0 : 0;
    uint64_t next = plat_timing_vblank_time_ns(t->mode, t->emitted_since_t0 + 1);
    return next > elapsed ? next - elapsed : 0;
}

uint32_t plat_timing_wait_next(plat_timing *t) {
    if (!t) return 0;
    uint64_t ns = plat_timing_ns_until_next(t);
    if (ns) t->sleep(t->clock_user, ns);
    return plat_timing_update(t);
}

void plat_timing_advance(plat_timing *t, uint32_t n) {
    if (!t) return;
    for (uint32_t i = 0; i < n; i++) emit(t);
}

uint64_t plat_timing_vblank_count(const plat_timing *t) { return t ? t->count : 0; }
uint32_t plat_timing_vblank_count32(const plat_timing *t) { return t ? (uint32_t)t->count : 0; }
uint64_t plat_timing_dropped(const plat_timing *t) { return t ? t->dropped : 0; }
int plat_timing_field(const plat_timing *t) { return t ? (int)(t->count & 1u) : 0; }
plat_video_mode plat_timing_mode(const plat_timing *t) { return t ? t->mode : PLAT_VIDEO_PAL_50; }

} // extern "C"
