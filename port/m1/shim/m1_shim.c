/* SPDX-License-Identifier: AGPL-3.0-or-later */
/* Registro de llamadas del shim (M1). Vease m1_shim.h. */
#include "m1_shim.h"
#include "sce_shim.h"

#include <string.h>

static m1sh_call  s_log[M1SH_LOG_CAP];
static uint32_t   s_total;
static const char *s_milestone;
static int64_t    s_milestone_seq = -1;
static m1sh_trace_fn s_trace;
static void      *s_trace_user;

/* contadores por nombre (los nombres son literales estaticos) */
#define NAMES_MAX 128
static struct { const char *name; uint32_t count; int64_t first; } s_names[NAMES_MAX];
static uint32_t s_nnames;

void m1sh_shim_state_reset(void);   /* en sce_shim.c */

void m1sh_reset(void) {
    s_total = 0;
    s_nnames = 0;
    s_milestone_seq = -1;
    s_milestone = NULL;
    s_trace = NULL;
    s_trace_user = NULL;
    memset(s_names, 0, sizeof s_names);
    m1sh_shim_state_reset();
}

uint32_t m1sh_total(void) { return s_total; }
const m1sh_call *m1sh_get(uint32_t i) { return (i < s_total && i < M1SH_LOG_CAP) ? &s_log[i] : NULL; }

static int find_name(const char *name) {
    uint32_t i;
    for (i = 0; i < s_nnames; i++)
        if (s_names[i].name == name || strcmp(s_names[i].name, name) == 0) return (int)i;
    return -1;
}
uint32_t m1sh_count(const char *name) { int k = find_name(name); return k < 0 ? 0 : s_names[k].count; }
int64_t  m1sh_first_seq(const char *name) { int k = find_name(name); return k < 0 ? -1 : s_names[k].first; }

void m1sh_set_milestone(const char *name) {
    s_milestone = name;
    s_milestone_seq = name ? m1sh_first_seq(name) : -1;
}
int     m1sh_milestone_reached(void) { return s_milestone_seq >= 0; }
int64_t m1sh_milestone_seq(void) { return s_milestone_seq; }
void    m1sh_set_trace(m1sh_trace_fn fn, void *user) { s_trace = fn; s_trace_user = user; }

void m1sh_record(const char *name, uint64_t a0, uint64_t a1, uint64_t a2, uint64_t a3, int64_t ret) {
    m1sh_call c;
    int k = find_name(name);
    c.seq = s_total; c.name = name;
    c.arg[0] = a0; c.arg[1] = a1; c.arg[2] = a2; c.arg[3] = a3;
    c.ret = ret;
    if (k < 0 && s_nnames < NAMES_MAX) {
        k = (int)s_nnames++;
        s_names[k].name = name; s_names[k].count = 0; s_names[k].first = (int64_t)s_total;
    }
    if (k >= 0) s_names[k].count++;
    if (s_milestone && s_milestone_seq < 0 && strcmp(s_milestone, name) == 0) s_milestone_seq = (int64_t)s_total;
    if (s_total < M1SH_LOG_CAP) s_log[s_total] = c;
    s_total++;
    if (s_trace) s_trace(&c, s_trace_user);
}

void m1sh_dump(FILE *f) {
    uint32_t i, n = s_total < M1SH_LOG_CAP ? s_total : M1SH_LOG_CAP;
    for (i = 0; i < n; i++) {
        const m1sh_call *c = &s_log[i];
        fprintf(f, "%u %s(0x%llx,0x%llx,0x%llx,0x%llx) = %lld\n", c->seq, c->name,
                (unsigned long long)c->arg[0], (unsigned long long)c->arg[1],
                (unsigned long long)c->arg[2], (unsigned long long)c->arg[3], (long long)c->ret);
    }
    if (s_total > n) fprintf(f, "... %u llamadas mas (registro lleno)\n", s_total - n);
}
