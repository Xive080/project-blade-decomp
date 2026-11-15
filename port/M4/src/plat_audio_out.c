#include "plat_audio_out.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct plat_audio_out {
    plat_audio_out_ops ops;
    void *ctx;
    uint32_t rate;
    uint64_t frames;
};

plat_audio_out *plat_audio_out_custom(const plat_audio_out_ops *ops, void *ctx, uint32_t rate) {
    plat_audio_out *o;
    if (!ops || !ops->write || rate == 0) return NULL;
    o = (plat_audio_out *)calloc(1, sizeof *o);
    if (!o) return NULL;
    o->ops = *ops; o->ctx = ctx; o->rate = rate;
    return o;
}

int plat_audio_out_write(plat_audio_out *o, const int16_t *stereo, size_t frames) {
    int r;
    if (!o || (!stereo && frames)) return -1;
    r = o->ops.write(o->ctx, stereo, frames);
    if (r == 0) o->frames += frames;
    return r;
}
uint64_t plat_audio_out_frames_written(const plat_audio_out *o) { return o ? o->frames : 0; }
uint32_t plat_audio_out_rate(const plat_audio_out *o) { return o ? o->rate : 0; }

int plat_audio_out_close(plat_audio_out *o) {
    int r = 0;
    if (!o) return -1;
    if (o->ops.close) r = o->ops.close(o->ctx);
    free(o);
    return r;
}

int plat_audio_pump(plat_mixer *m, plat_audio_out *o, size_t frames) {
    int16_t buf[512 * 2];
    if (!m || !o) return -1;
    while (frames) {
        size_t n = frames > 512 ? 512 : frames;
        plat_mix_render(m, buf, n);
        if (plat_audio_out_write(o, buf, n) != 0) return -1;
        frames -= n;
    }
    return 0;
}

/* ---- nulo ---- */
static int null_write(void *ctx, const int16_t *s, size_t n) { (void)ctx; (void)s; (void)n; return 0; }
plat_audio_out *plat_audio_out_null_open(uint32_t rate) {
    plat_audio_out_ops ops = {null_write, NULL};
    return plat_audio_out_custom(&ops, NULL, rate);
}

/* ---- WAV (PCM 16 bit estereo, little endian explicito) ---- */
typedef struct wav_ctx { FILE *f; uint32_t rate; uint64_t data_bytes; } wav_ctx;

static void put32(uint8_t *p, uint32_t v) { p[0] = (uint8_t)v; p[1] = (uint8_t)(v >> 8); p[2] = (uint8_t)(v >> 16); p[3] = (uint8_t)(v >> 24); }
static void put16(uint8_t *p, uint32_t v) { p[0] = (uint8_t)v; p[1] = (uint8_t)(v >> 8); }

static void wav_header(uint8_t h[44], uint32_t rate, uint32_t data_bytes) {
    memcpy(h, "RIFF", 4); put32(h + 4, 36 + data_bytes);
    memcpy(h + 8, "WAVEfmt ", 8); put32(h + 16, 16);
    put16(h + 20, 1); put16(h + 22, 2); put32(h + 24, rate); put32(h + 28, rate * 4);
    put16(h + 32, 4); put16(h + 34, 16);
    memcpy(h + 36, "data", 4); put32(h + 40, data_bytes);
}

static int wav_write(void *vctx, const int16_t *s, size_t n) {
    wav_ctx *c = (wav_ctx *)vctx;
    size_t i;
    uint8_t b[4096];
    size_t total = n * 2, pos = 0;
    while (pos < total) {
        size_t k = total - pos;
        if (k > sizeof b / 2) k = sizeof b / 2;
        for (i = 0; i < k; i++) put16(b + 2 * i, (uint16_t)s[pos + i]);
        if (fwrite(b, 2, k, c->f) != k) return -1;
        pos += k;
    }
    c->data_bytes += (uint64_t)n * 4;
    return 0;
}

static int wav_close(void *vctx) {
    wav_ctx *c = (wav_ctx *)vctx;
    uint8_t h[44];
    int r = 0;
    wav_header(h, c->rate, c->data_bytes > 0xFFFFFFD0u ? 0xFFFFFFD0u : (uint32_t)c->data_bytes);
    if (fseek(c->f, 0, SEEK_SET) != 0 || fwrite(h, 1, 44, c->f) != 44) r = -1;
    if (fclose(c->f) != 0) r = -1;
    free(c);
    return r;
}

plat_audio_out *plat_audio_out_wav_open(const char *path, uint32_t rate) {
    wav_ctx *c;
    uint8_t h[44];
    plat_audio_out_ops ops;
    plat_audio_out *o;
    if (!path || rate == 0) return NULL;
    c = (wav_ctx *)calloc(1, sizeof *c);
    if (!c) return NULL;
    c->f = fopen(path, "wb");
    if (!c->f) { free(c); return NULL; }
    c->rate = rate;
    wav_header(h, rate, 0);
    if (fwrite(h, 1, 44, c->f) != 44) { fclose(c->f); free(c); return NULL; }
    ops.write = wav_write; ops.close = wav_close;
    o = plat_audio_out_custom(&ops, c, rate);
    if (!o) { fclose(c->f); free(c); }
    return o;
}
