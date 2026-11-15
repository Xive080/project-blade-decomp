#include "plat_vag.h"

#include <stdlib.h>
#include <string.h>

/* Coeficientes (f0, f1) de los 5 filtros; prediccion = (f0*s1 + f1*s2 + 32) / 64. */
static const int32_t k_f0[5] = {0, 60, 115, 98, 122};
static const int32_t k_f1[5] = {0, 0, -52, -55, -60};

static int16_t clamp16(int32_t v) {
    if (v < -32768) return -32768;
    if (v > 32767) return 32767;
    return (int16_t)v;
}

uint8_t plat_adpcm_decode_block(const uint8_t block[16], plat_adpcm_state *st, int16_t out[28], unsigned opts) {
    unsigned shift = block[0] & 0x0F;
    unsigned filter = (block[0] >> 4) & 0x07;
    int32_t s1 = st->s1, s2 = st->s2;
    int i;
    if (shift > 12) shift = 9;   /* comportamiento del hardware segun la documentacion habitual (hipotesis) */
    if (filter > 4) filter = 0;  /* filtros 5..7 no definidos */
    for (i = 0; i < PLAT_ADPCM_BLOCK_SAMPLES; i++) {
        unsigned byte = block[2 + i / 2];
        int32_t nib = (i & 1) ? (int32_t)(byte >> 4) : (int32_t)(byte & 0x0F);
        int32_t v, pred;
        if (nib & 8) nib -= 16;
        v = (nib * 4096) >> shift; /* equivale a (nib<<12)>>shift con signo */
        pred = k_f0[filter] * s1 + k_f1[filter] * s2 + 32;
        if (opts & PLAT_VAG_OPT_RECOMP_COMPAT)
            pred /= 64;  /* division entera hacia cero */
        else
            pred >>= 6;  /* desplazamiento aritmetico (hacia -inf) */
        v = clamp16(v + pred);
        s2 = s1;
        s1 = v;
        out[i] = (int16_t)v;
    }
    st->s1 = s1;
    st->s2 = s2;
    return block[1];
}

static uint32_t be32(const uint8_t *p) {
    return ((uint32_t)p[0] << 24) | ((uint32_t)p[1] << 16) | ((uint32_t)p[2] << 8) | p[3];
}

int plat_vag_parse_header(const uint8_t *data, size_t size, plat_vag_info *info) {
    uint32_t magic;
    if (!data || !info || size < PLAT_VAG_HEADER_BYTES) return -1;
    magic = be32(data);
    if (magic != 0x56414770u /* "VAGp" */) {
        uint32_t rev = ((uint32_t)data[3] << 24) | ((uint32_t)data[2] << 16) | ((uint32_t)data[1] << 8) | data[0];
        if (rev != 0x56414770u) return -1;
    }
    info->version = be32(data + 4);
    info->data_size = be32(data + 0x0C);
    info->sample_rate = be32(data + 0x10);
    if (info->sample_rate == 0) info->sample_rate = 44100;
    memcpy(info->name, data + 0x20, 16);
    info->name[16] = 0;
    return 0;
}

int plat_adpcm_decode_raw(const uint8_t *data, size_t size, unsigned opts, plat_pcm *out) {
    size_t blocks, b;
    int in_loop = 0;
    plat_adpcm_state st = {0, 0};
    if (!out) return -1;
    memset(out, 0, sizeof *out);
    if (!data) return -1;
    blocks = size / PLAT_ADPCM_BLOCK_BYTES;
    out->samples = (int16_t *)malloc((blocks ? blocks : 1) * PLAT_ADPCM_BLOCK_SAMPLES * sizeof(int16_t));
    if (!out->samples) return -1;
    for (b = 0; b < blocks; b++) {
        uint8_t fl = plat_adpcm_decode_block(data + b * PLAT_ADPCM_BLOCK_BYTES, &st,
                                             out->samples + b * PLAT_ADPCM_BLOCK_SAMPLES, opts);
        if (fl & PLAT_ADPCM_FLAG_LOOP_START) {
            out->loop_start = b * PLAT_ADPCM_BLOCK_SAMPLES;
            in_loop = 1;
        }
        /* fin con repeticion: salta al ultimo inicio de bucle (0 si no hubo marca) */
        if ((fl & (PLAT_ADPCM_FLAG_END | PLAT_ADPCM_FLAG_REPEAT)) ==
            (PLAT_ADPCM_FLAG_END | PLAT_ADPCM_FLAG_REPEAT)) {
            if (!in_loop) out->loop_start = 0;
            out->loop_end = (b + 1) * PLAT_ADPCM_BLOCK_SAMPLES;
            out->has_loop = 1;
        }
    }
    out->count = blocks * PLAT_ADPCM_BLOCK_SAMPLES;
    return 0;
}

int plat_vag_decode(const uint8_t *data, size_t size, unsigned opts, plat_pcm *out) {
    plat_vag_info info;
    size_t avail, n;
    int r;
    if (out) memset(out, 0, sizeof *out);
    if (plat_vag_parse_header(data, size, &info) != 0 || !out) return -1;
    avail = size - PLAT_VAG_HEADER_BYTES;
    n = info.data_size;
    /* Los bloques se cuentan como (data_size+15)/16, igual que la recomp, acotados a lo disponible.
     * Diferencia deliberada: data_size==0 se interpreta como "todo lo que hay" (la recomp decodifica 0 bloques). */
    n = (n == 0) ? avail : (size_t)((n + 15) / 16) * 16;
    if (n > avail) n = avail;
    r = plat_adpcm_decode_raw(data + PLAT_VAG_HEADER_BYTES, n, opts, out);
    if (r == 0) out->sample_rate = info.sample_rate;
    return r;
}

void plat_pcm_free(plat_pcm *p) {
    if (!p) return;
    free(p->samples);
    memset(p, 0, sizeof *p);
}
