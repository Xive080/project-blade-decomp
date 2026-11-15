/* SPDX-License-Identifier: AGPL-3.0-or-later */
#include "m1_stub_log.h"

#include <stdlib.h>
#include <string.h>

#define MAX_SEEN 8192u

static m1_stub_entry *g_table;
static unsigned g_count;
static m1_stub_entry *g_seen[MAX_SEEN];
static unsigned g_seen_n;
static unsigned long long g_total_calls;
static int g_env_read;
static int g_trace;
static int g_abort;

#if defined(__GNUC__)
#define ATOMIC_ADD(p, v) __atomic_fetch_add((p), (v), __ATOMIC_RELAXED)
#else
#define ATOMIC_ADD(p, v) ((*(p) += (v)) - (v))
#endif

static void read_env(void)
{
    const char *t, *a;
    if (g_env_read) return;
    g_env_read = 1;
    t = getenv("M1_STUB_TRACE");
    a = getenv("M1_STUB_ABORT");
    g_trace = t && t[0] && t[0] != '0';
    g_abort = a && a[0] && a[0] != '0';
}

void m1_stub_set_table(m1_stub_entry *table, unsigned count)
{
    g_table = table;
    g_count = count;
}

void m1_stub_hit(m1_stub_entry *e)
{
    unsigned before;
    read_env();
    ATOMIC_ADD(&g_total_calls, 1u);
    before = ATOMIC_ADD(&e->calls, 1u);
    if (before == 0) {
        unsigned seq = ATOMIC_ADD(&g_seen_n, 1u);
        if (seq < MAX_SEEN) g_seen[seq] = e;
        e->first_seq = seq + 1u;
        if (g_trace)
            fprintf(stderr, "[m1-stub] primera llamada #%u: %s (0x%08x)\n", seq + 1u, e->name, e->guest_addr);
        if (g_abort) {
            fprintf(stderr, "[m1-stub] M1_STUB_ABORT: llamada a stub %s\n", e->name);
            abort();
        }
    }
}

unsigned m1_stub_total_count(void)
{
    unsigned i, n = 0;
    for (i = 0; i < g_count; i++) if (g_table[i].kind == M1_STUB_FUNC) n++;
    return n;
}

unsigned m1_stub_data_count(void)
{
    unsigned i, n = 0;
    for (i = 0; i < g_count; i++) if (g_table[i].kind == M1_STUB_DATA) n++;
    return n;
}

unsigned m1_stub_called_count(void)
{
    return g_seen_n < MAX_SEEN ? g_seen_n : MAX_SEEN;
}

unsigned long long m1_stub_total_calls(void)
{
    return g_total_calls;
}

const m1_stub_entry *m1_stub_nth_called(unsigned n)
{
    return n < m1_stub_called_count() ? g_seen[n] : NULL;
}

void m1_stub_reset(void)
{
    unsigned i;
    for (i = 0; i < g_count; i++) {
        g_table[i].calls = 0;
        g_table[i].first_seq = 0;
    }
    for (i = 0; i < MAX_SEEN; i++) g_seen[i] = NULL;
    g_seen_n = 0;
    g_total_calls = 0;
}

void m1_stub_stats(FILE *out, int all)
{
    unsigned i, n = m1_stub_called_count();
    if (!out) out = stderr;
    fprintf(out, "[m1-stub] %u stubs de funcion, %u de datos; %u distintos llamados, %llu llamadas\n",
            m1_stub_total_count(), m1_stub_data_count(), n, g_total_calls);
    for (i = 0; i < n; i++) {
        const m1_stub_entry *e = g_seen[i];
        fprintf(out, "[m1-stub]  #%-4u %-28s addr=0x%08x calls=%u\n", e->first_seq, e->name, e->guest_addr, e->calls);
    }
    if (all) {
        for (i = 0; i < g_count; i++) {
            const m1_stub_entry *e = &g_table[i];
            if (e->kind == M1_STUB_DATA)
                fprintf(out, "[m1-stub]  dato  %-28s addr=0x%08x size=%u\n", e->name, e->guest_addr, e->size);
            else if (e->calls == 0)
                fprintf(out, "[m1-stub]  libre %-28s addr=0x%08x\n", e->name, e->guest_addr);
        }
    }
}
