#include "plat_mixer.h"

#include <stdlib.h>
#include <string.h>

#define FRAC_BITS 16
#define FRAC_ONE (1u << FRAC_BITS)
#define EVENT_CAP 4096

typedef struct sample_slot {
    int16_t *pcm;
    size_t count;
    uint32_t rate;
    int has_loop;
    size_t loop_start, loop_end;
    uint32_t gen;
    int used;
} sample_slot;

typedef struct voice {
    int active;
    uint32_t gen;
    plat_sample_id sample;
    uint64_t pos; /* indice<<16 | fraccion */
    uint64_t step;
    float pitch;
    int32_t gl, gr; /* ganancia Q15 */
    float vol_l, vol_r;
    uint64_t start_seq; /* para robar la mas antigua */
} voice;

struct plat_mixer {
    uint32_t out_rate;
    int nvoices;
    voice *voices;
    sample_slot *samples;
    size_t nsamples, cap_samples;
    int32_t master_q15;
    float master;
    uint64_t frames, seq;
    plat_mix_event *events;
    size_t nevents; /* total desde el ultimo clear, acotado al guardado */
};

static int32_t to_q15(float v) {
    if (v < 0.f) v = 0.f;
    if (v > 4.f) v = 4.f;
    return (int32_t)(v * 32768.0f + 0.5f);
}

static void push_event(plat_mixer *m, int type, plat_voice_id v, plat_sample_id s, float pitch, float vl, float vr) {
    plat_mix_event *e;
    if (m->nevents >= EVENT_CAP) return; /* el registro se llena y se ignora el resto hasta clear */
    e = &m->events[m->nevents++];
    e->type = type; e->voice = v; e->sample = s; e->pitch = pitch;
    e->vol_l = vl; e->vol_r = vr; e->frame = m->frames;
}

/* id de voz = (gen<<8 | indice+1) con indice < 255 */
static plat_voice_id make_vid(const voice *v, int idx) { return (v->gen << 8) | (uint32_t)(idx + 1); }
static voice *find_voice(const plat_mixer *m, plat_voice_id id) {
    int idx;
    voice *v;
    if (!id) return NULL;
    idx = (int)(id & 0xFF) - 1;
    if (idx < 0 || idx >= m->nvoices) return NULL;
    v = &m->voices[idx];
    if (!v->active || (v->gen & 0xFFFFFFu) != (id >> 8)) return NULL;
    return v;
}

static plat_sample_id make_sid(size_t idx, uint32_t gen) { return (gen << 16) | (uint32_t)(idx + 1); }
static sample_slot *find_sample(const plat_mixer *m, plat_sample_id id) {
    size_t idx;
    sample_slot *s;
    if (!id) return NULL;
    idx = (size_t)(id & 0xFFFF) - 1;
    if (idx >= m->nsamples) return NULL;
    s = &m->samples[idx];
    if (!s->used || (s->gen & 0xFFFFu) != (id >> 16)) return NULL;
    return s;
}

plat_mixer *plat_mix_create(uint32_t out_rate, int max_voices) {
    plat_mixer *m;
    if (out_rate == 0 || max_voices < 1 || max_voices > 255) return NULL;
    m = (plat_mixer *)calloc(1, sizeof *m);
    if (!m) return NULL;
    m->out_rate = out_rate;
    m->nvoices = max_voices;
    m->voices = (voice *)calloc((size_t)max_voices, sizeof(voice));
    m->events = (plat_mix_event *)calloc(EVENT_CAP, sizeof(plat_mix_event));
    m->master = 1.0f;
    m->master_q15 = 32768;
    if (!m->voices || !m->events) { plat_mix_destroy(m); return NULL; }
    return m;
}

void plat_mix_destroy(plat_mixer *m) {
    size_t i;
    if (!m) return;
    for (i = 0; i < m->nsamples; i++) free(m->samples[i].pcm);
    free(m->samples);
    free(m->voices);
    free(m->events);
    free(m);
}

plat_sample_id plat_mix_add_sample(plat_mixer *m, const int16_t *pcm, size_t count, uint32_t rate,
                                   int has_loop, size_t loop_start, size_t loop_end) {
    size_t i;
    sample_slot *s = NULL;
    int16_t *copy;
    if (!m || !pcm || count == 0 || rate == 0) return 0;
    if (has_loop) {
        if (loop_end == 0 || loop_end > count) loop_end = count;
        if (loop_start >= loop_end) return 0;
    }
    copy = (int16_t *)malloc(count * sizeof(int16_t));
    if (!copy) return 0;
    memcpy(copy, pcm, count * sizeof(int16_t));
    for (i = 0; i < m->nsamples; i++)
        if (!m->samples[i].used) { s = &m->samples[i]; break; }
    if (!s) {
        if (m->nsamples == m->cap_samples) {
            size_t nc = m->cap_samples ? m->cap_samples * 2 : 16;
            sample_slot *ns;
            if (nc > 0xFFFF) { free(copy); return 0; }
            ns = (sample_slot *)realloc(m->samples, nc * sizeof(sample_slot));
            if (!ns) { free(copy); return 0; }
            m->samples = ns;
            memset(ns + m->cap_samples, 0, (nc - m->cap_samples) * sizeof(sample_slot));
            m->cap_samples = nc;
        }
        s = &m->samples[m->nsamples++];
    }
    s->pcm = copy; s->count = count; s->rate = rate;
    s->has_loop = has_loop; s->loop_start = loop_start; s->loop_end = has_loop ? loop_end : 0;
    s->gen++; if ((s->gen & 0xFFFF) == 0) s->gen++;
    s->used = 1;
    return make_sid((size_t)(s - m->samples), s->gen);
}

void plat_mix_remove_sample(plat_mixer *m, plat_sample_id id) {
    sample_slot *s = find_sample(m, id);
    int i;
    if (!s) return;
    for (i = 0; i < m->nvoices; i++)
        if (m->voices[i].active && m->voices[i].sample == id) m->voices[i].active = 0;
    free(s->pcm);
    s->pcm = NULL; s->used = 0;
}

static uint64_t calc_step(const plat_mixer *m, const sample_slot *s, float pitch) {
    double st;
    if (pitch < 0.f) pitch = 0.f;
    if (pitch > 16.f) pitch = 16.f;
    st = (double)s->rate / (double)m->out_rate * (double)pitch * (double)FRAC_ONE;
    return (uint64_t)(st + 0.5);
}

plat_voice_id plat_mix_play(plat_mixer *m, plat_sample_id sid, float pitch, float vol_l, float vol_r) {
    sample_slot *s;
    int i, pick = -1;
    voice *v;
    plat_voice_id id;
    if (!m) return 0;
    s = find_sample(m, sid);
    if (!s) return 0;
    for (i = 0; i < m->nvoices; i++)
        if (!m->voices[i].active) { pick = i; break; }
    if (pick < 0) {
        uint64_t oldest = ~(uint64_t)0;
        for (i = 0; i < m->nvoices; i++)
            if (m->voices[i].start_seq < oldest) { oldest = m->voices[i].start_seq; pick = i; }
        push_event(m, PLAT_MIX_EV_STOLEN, make_vid(&m->voices[pick], pick), m->voices[pick].sample,
                   m->voices[pick].pitch, m->voices[pick].vol_l, m->voices[pick].vol_r);
    }
    v = &m->voices[pick];
    v->gen = (v->gen + 1) & 0xFFFFFFu; if (!v->gen) v->gen = 1;
    v->active = 1; v->sample = sid; v->pos = 0; v->pitch = pitch;
    v->step = calc_step(m, s, pitch);
    v->vol_l = vol_l; v->vol_r = vol_r;
    v->gl = to_q15(vol_l); v->gr = to_q15(vol_r);
    v->start_seq = ++m->seq;
    id = make_vid(v, pick);
    push_event(m, PLAT_MIX_EV_PLAY, id, sid, pitch, vol_l, vol_r);
    return id;
}

void plat_mix_stop(plat_mixer *m, plat_voice_id id) {
    voice *v = m ? find_voice(m, id) : NULL;
    if (!v) return;
    v->active = 0;
    push_event(m, PLAT_MIX_EV_STOP, id, v->sample, v->pitch, v->vol_l, v->vol_r);
}

void plat_mix_stop_all(plat_mixer *m) {
    int i;
    if (!m) return;
    for (i = 0; i < m->nvoices; i++)
        if (m->voices[i].active) plat_mix_stop(m, make_vid(&m->voices[i], i));
}

int plat_mix_set_pitch(plat_mixer *m, plat_voice_id id, float pitch) {
    voice *v = m ? find_voice(m, id) : NULL;
    sample_slot *s;
    if (!v) return -1;
    s = find_sample(m, v->sample);
    if (!s) return -1;
    v->pitch = pitch;
    v->step = calc_step(m, s, pitch);
    return 0;
}

int plat_mix_set_volume(plat_mixer *m, plat_voice_id id, float vl, float vr) {
    voice *v = m ? find_voice(m, id) : NULL;
    if (!v) return -1;
    v->vol_l = vl; v->vol_r = vr;
    v->gl = to_q15(vl); v->gr = to_q15(vr);
    return 0;
}

int plat_mix_is_playing(const plat_mixer *m, plat_voice_id id) { return m && find_voice(m, id) != NULL; }

int plat_mix_active_voices(const plat_mixer *m) {
    int i, n = 0;
    if (!m) return 0;
    for (i = 0; i < m->nvoices; i++) n += m->voices[i].active;
    return n;
}

void plat_mix_set_master(plat_mixer *m, float vol) {
    if (!m) return;
    m->master = vol;
    m->master_q15 = to_q15(vol);
}

float plat_mix_pitch_from_spu(uint16_t reg) {
    if (reg > 0x3FFF) reg = 0x3FFF;
    return (float)reg / 4096.0f;
}

float plat_mix_volume_from_spu(int16_t reg) {
    float f = (float)reg / 32767.0f;
    return f < -1.f ? -1.f : f;
}

static int16_t clamp16(int32_t v) { return v < -32768 ? -32768 : (v > 32767 ? 32767 : (int16_t)v); }

#define CHUNK 256

static void render_chunk(plat_mixer *m, int16_t *out, size_t frames) {
    size_t f;
    int vi;
    int32_t acc[CHUNK * 2];
    memset(acc, 0, frames * 2 * sizeof(int32_t));
    for (vi = 0; vi < m->nvoices; vi++) {
        voice *v = &m->voices[vi];
        sample_slot *s;
        if (!v->active) continue;
        s = find_sample(m, v->sample);
        if (!s) { v->active = 0; continue; }
        for (f = 0; f < frames; f++) {
            size_t idx = (size_t)(v->pos >> FRAC_BITS);
            uint32_t fr = (uint32_t)(v->pos & (FRAC_ONE - 1));
            int32_t a, b, smp;
            size_t nx;
            if (s->has_loop) {
                while (idx >= s->loop_end) {
                    size_t len = s->loop_end - s->loop_start;
                    idx = s->loop_start + (idx - s->loop_end) % len;
                    v->pos = ((uint64_t)idx << FRAC_BITS) | fr;
                }
            } else if (idx >= s->count) {
                m->frames += f;
                push_event(m, PLAT_MIX_EV_FINISHED, make_vid(v, vi), v->sample, v->pitch, v->vol_l, v->vol_r);
                m->frames -= f;
                v->active = 0;
                break;
            }
            a = s->pcm[idx];
            nx = idx + 1;
            if (s->has_loop && nx >= s->loop_end) nx = s->loop_start;
            b = nx < s->count ? s->pcm[nx] : a;
            smp = a + (int32_t)(((int64_t)(b - a) * (int64_t)fr) >> FRAC_BITS);
            acc[2 * f] += (smp * v->gl) >> 15;
            acc[2 * f + 1] += (smp * v->gr) >> 15;
            v->pos += v->step;
        }
    }
    for (f = 0; f < frames * 2; f++)
        out[f] = clamp16((int32_t)(((int64_t)acc[f] * m->master_q15) >> 15));
    m->frames += frames;
}

void plat_mix_render(plat_mixer *m, int16_t *out, size_t frames) {
    if (!m || !out) return;
    while (frames) {
        size_t n = frames > CHUNK ? CHUNK : frames;
        render_chunk(m, out, n);
        out += n * 2;
        frames -= n;
    }
}

size_t plat_mix_event_count(const plat_mixer *m) { return m ? m->nevents : 0; }
int plat_mix_event_get(const plat_mixer *m, size_t i, plat_mix_event *ev) {
    if (!m || !ev || i >= m->nevents) return -1;
    *ev = m->events[i];
    return 0;
}
void plat_mix_events_clear(plat_mixer *m) { if (m) m->nevents = 0; }
uint64_t plat_mix_frames_rendered(const plat_mixer *m) { return m ? m->frames : 0; }
