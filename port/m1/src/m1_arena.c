/* SPDX-License-Identifier: AGPL-3.0-or-later */
/* Arena nativa del port (M1). Implementa plat_mem.h; vease include/m1/m1_arena.h. */
#include "m1/m1_arena.h"

#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
#  define WIN32_LEAN_AND_MEAN
#  include <windows.h>
#else
#  include <sys/mman.h>
#  ifndef MAP_ANONYMOUS
#    define MAP_ANONYMOUS MAP_ANON
#  endif
#  ifndef MAP_NORESERVE
#    define MAP_NORESERVE 0
#  endif
#endif

#define SPAN ((uint64_t)PLAT_SCRATCHPAD_GADDR + PLAT_SCRATCHPAD_SIZE)

/* ---- reserva del SO ---- */
static uint8_t *os_reserve(uintptr_t hint) {
#ifdef _WIN32
    return (uint8_t *)VirtualAlloc((LPVOID)hint, (SIZE_T)SPAN, MEM_RESERVE, PAGE_NOACCESS);
#else
    void *p = mmap((void *)hint, (size_t)SPAN, PROT_NONE,
                   MAP_PRIVATE | MAP_ANONYMOUS | MAP_NORESERVE, -1, 0);
    return p == MAP_FAILED ? NULL : (uint8_t *)p;
#endif
}
static int os_commit(uint8_t *p, size_t len) {
#ifdef _WIN32
    return VirtualAlloc(p, len, MEM_COMMIT, PAGE_READWRITE) != NULL;
#else
    return mprotect(p, len, PROT_READ | PROT_WRITE) == 0;
#endif
}
static void os_release(uint8_t *p) {
#ifdef _WIN32
    VirtualFree(p, 0, MEM_RELEASE);
#else
    munmap(p, (size_t)SPAN);
#endif
}

/* ---- asignador de rangos (metadatos fuera de la arena) ---- */
typedef struct blk { uint32_t addr, size; uint8_t used; } blk;
typedef struct region {
    blk *b; uint32_t n, cap;
    uint32_t lo, hi;
} region;

static void region_init(region *r, uint32_t lo, uint32_t hi) {
    r->lo = lo; r->hi = hi; r->n = 0; r->cap = 16;
    r->b = (blk *)malloc(r->cap * sizeof(blk));
    if (r->b && hi > lo) { r->b[0].addr = lo; r->b[0].size = hi - lo; r->b[0].used = 0; r->n = 1; }
}
static void region_free_all(region *r) { free(r->b); memset(r, 0, sizeof *r); }

static int region_insert(region *r, uint32_t at, blk v) {
    if (r->n == r->cap) {
        blk *nb = (blk *)realloc(r->b, (size_t)r->cap * 2 * sizeof(blk));
        if (!nb) return 0;
        r->b = nb; r->cap *= 2;
    }
    memmove(&r->b[at + 1], &r->b[at], (size_t)(r->n - at) * sizeof(blk));
    r->b[at] = v; r->n++;
    return 1;
}

static int region_reserve(region *r, uint32_t need) {
    while (r->cap < need) {
        blk *nb = (blk *)realloc(r->b, (size_t)r->cap * 2 * sizeof(blk));
        if (!nb) return 0;
        r->b = nb; r->cap *= 2;
    }
    return 1;
}

static uint32_t region_alloc(region *r, uint32_t size, uint32_t align) {
    uint32_t i;
    if (!r->b || size == 0) return 0;
    if (!region_reserve(r, r->n + 2)) return 0;   /* sitio para los 2 bloques extra de un corte */
    if (align < 16) align = 16;
    if (align & (align - 1)) return 0;
    if (size > 0xFFFFFFF0u) return 0;
    size = (size + 15u) & ~15u;
    for (i = 0; i < r->n; i++) {
        blk *b = &r->b[i];
        uint64_t start, end;
        if (b->used) continue;
        start = ((uint64_t)b->addr + align - 1) & ~(uint64_t)(align - 1);
        end = start + size;
        if (end > (uint64_t)b->addr + b->size) continue;
        {
            uint32_t lead = (uint32_t)(start - b->addr);
            uint32_t tail = (uint32_t)((uint64_t)b->addr + b->size - end);
            /* hay que poder insertar hasta 2 bloques mas */
            if (tail && !region_insert(r, i + 1, (blk){(uint32_t)end, tail, 0})) return 0;
            b = &r->b[i];
            if (lead) {
                if (!region_insert(r, i + 1, (blk){(uint32_t)start, size, 1})) return 0;
                b = &r->b[i]; b->size = lead;
            } else {
                b->size = size; b->used = 1;
            }
        }
        return (uint32_t)start;
    }
    return 0;
}

static int region_find(const region *r, uint32_t addr) {
    uint32_t lo = 0, hi = r->n;
    while (lo < hi) {
        uint32_t m = (lo + hi) / 2;
        if (r->b[m].addr == addr) return r->b[m].used ? (int)m : -1;
        if (r->b[m].addr < addr) lo = m + 1; else hi = m;
    }
    return -1;
}

static int region_release(region *r, uint32_t addr) {
    int k = region_find(r, addr);
    uint32_t i;
    if (k < 0) return 0;
    i = (uint32_t)k;
    r->b[i].used = 0;
    if (i + 1 < r->n && !r->b[i + 1].used) {
        r->b[i].size += r->b[i + 1].size;
        memmove(&r->b[i + 1], &r->b[i + 2], (size_t)(r->n - i - 2) * sizeof(blk));
        r->n--;
    }
    if (i > 0 && !r->b[i - 1].used) {
        r->b[i - 1].size += r->b[i].size;
        memmove(&r->b[i], &r->b[i + 1], (size_t)(r->n - i - 1) * sizeof(blk));
        r->n--;
    }
    return 1;
}

static uint32_t region_sum(const region *r, int used, int largest, uint32_t *count) {
    uint32_t i, s = 0, m = 0, c = 0;
    for (i = 0; i < r->n; i++) {
        if ((r->b[i].used != 0) == (used != 0)) {
            s += r->b[i].size; c++;
            if (r->b[i].size > m) m = r->b[i].size;
        }
    }
    if (count) *count = c;
    return largest ? m : s;
}

/* ---- estado global ---- */
static struct {
    uint8_t *base;
    uint32_t rdram;
    plat_mem_strategy strat;
    region pool, heap;
} g;

plat_status m1_arena_init(const m1_arena_config *cfg) {
    plat_mem_config mc;
    uint32_t pb, pe, hb, he, rdram;
    uintptr_t hint = 0;
    plat_mem_strategy st = PLAT_MEM_AUTO;
    uint8_t *base;

    if (g.base) return PLAT_OK;
    memset(&mc, 0, sizeof mc);
    pb = pe = hb = he = 0;
    if (cfg) { mc = cfg->mem; pb = cfg->pool_base; pe = cfg->pool_end; hb = cfg->heap_base; he = cfg->heap_end; }
    st = mc.strategy;
    hint = mc.preferred_base;
    rdram = mc.rdram_size ? mc.rdram_size : PLAT_RDRAM_SIZE;
    if (rdram > PLAT_RDRAM_SIZE || (rdram & 0xFFFFu)) return PLAT_E_INVALID;
    if (st != PLAT_MEM_AUTO && st != PLAT_MEM_LOW_FIXED && st != PLAT_MEM_OFFSET32) return PLAT_E_INVALID;

    if (!pb && !pe) { pb = M1_MAP_POOL_BASE; pe = M1_MAP_POOL_END; }
    if (!hb && !he) { hb = M1_MAP_HEAP_BASE; he = M1_MAP_HEAP_END; }
    /* con una RDRAM menor que la de referencia, recortar los valores por defecto */
    if (he > rdram && !(cfg && cfg->heap_end)) he = rdram > 0x200000u ? rdram - 0x200000u : 0;
    if (pe > rdram && !(cfg && cfg->pool_end)) pe = rdram < pe ? rdram : pe;
    if (pb > pe || hb > he || pe > rdram || he > rdram || (pb & 15u) || (hb & 15u) || (pe & 15u) || (he & 15u))
        return PLAT_E_INVALID;

    if (st == PLAT_MEM_LOW_FIXED) {
        /* E1b: solo vale si el SO entrega exactamente la base pedida y es < 4 GB */
        if (!hint || hint >= 0x100000000ull) return PLAT_E_INVALID;
        base = os_reserve(hint);
        if (base && (uintptr_t)base != hint) { os_release(base); base = NULL; }
        if (!base) return PLAT_E_UNSUPPORTED;
    } else {
        base = os_reserve(0);          /* E2: la base la decide el SO */
        if (!base) return PLAT_E_NOMEM;
        st = PLAT_MEM_OFFSET32;
    }
    if (!os_commit(base, rdram) ||
        !os_commit(base + PLAT_SCRATCHPAD_GADDR, PLAT_SCRATCHPAD_SIZE)) {
        os_release(base);
        return PLAT_E_NOMEM;
    }
    g.base = base; g.rdram = rdram; g.strat = st;
    region_init(&g.pool, pb, pe);
    region_init(&g.heap, hb, he);
    if (!g.pool.b || !g.heap.b) { m1_arena_shutdown(); return PLAT_E_NOMEM; }
    return PLAT_OK;
}

void m1_arena_shutdown(void) {
    region_free_all(&g.pool);
    region_free_all(&g.heap);
    if (g.base) os_release(g.base);
    memset(&g, 0, sizeof g);
}

int m1_arena_is_init(void) { return g.base != NULL; }
uint8_t *m1_arena_scratch(void) { return g.base ? g.base + PLAT_SCRATCHPAD_GADDR : NULL; }

/* ---- plat_mem.h ---- */
plat_status plat_mem_init(const plat_mem_config *cfg) {
    m1_arena_config c;
    if (g.base) return PLAT_OK;
    memset(&c, 0, sizeof c);
    c.struct_size = sizeof c;
    if (cfg) c.mem = *cfg;
    return m1_arena_init(&c);
}
void plat_mem_shutdown(void) { m1_arena_shutdown(); }
plat_mem_strategy plat_mem_active_strategy(void) { return g.strat; }
uint8_t *plat_mem_base(void) { return g.base; }
uint32_t plat_mem_size(void) { return g.rdram; }

plat_gaddr plat_mem_canonical(plat_gaddr a) { return m1_canon(a); }

void *plat_mem_g2h(plat_gaddr a, size_t len) {
    uint64_t lo, end;
    if (!g.base) return NULL;
    a = m1_canon(a);
    end = (uint64_t)a + len;
    lo = a;
    if (lo < g.rdram) { if (end > g.rdram) return NULL; }
    else if (lo >= PLAT_SCRATCHPAD_GADDR && lo < (uint64_t)PLAT_SCRATCHPAD_GADDR + PLAT_SCRATCHPAD_SIZE) {
        if (end > (uint64_t)PLAT_SCRATCHPAD_GADDR + PLAT_SCRATCHPAD_SIZE) return NULL;
    } else if (!(len == 0 && lo == g.rdram)) return NULL;
    return g.base + a;
}

plat_status plat_mem_h2g(const void *p, plat_gaddr *out) {
    uintptr_t off;
    if (!g.base || !p) return PLAT_E_RANGE;
    if ((const uint8_t *)p < g.base) return PLAT_E_RANGE;
    off = (uintptr_t)((const uint8_t *)p - g.base);
    if (off >= g.rdram &&
        !(off >= PLAT_SCRATCHPAD_GADDR && off < (uintptr_t)PLAT_SCRATCHPAD_GADDR + PLAT_SCRATCHPAD_SIZE))
        return PLAT_E_RANGE;
    if (out) *out = (plat_gaddr)off;
    return PLAT_OK;
}

plat_status plat_mem_read(plat_gaddr src, void *dst, size_t len) {
    void *h = plat_mem_g2h(src, len);
    if (!h) return PLAT_E_RANGE;
    if (len) memcpy(dst, h, len);
    return PLAT_OK;
}
plat_status plat_mem_write(plat_gaddr dst, const void *src, size_t len) {
    void *h = plat_mem_g2h(dst, len);
    if (!h) return PLAT_E_RANGE;
    if (len) memcpy(h, src, len);
    return PLAT_OK;
}
plat_status plat_mem_fill(plat_gaddr dst, uint8_t value, size_t len) {
    void *h = plat_mem_g2h(dst, len);
    if (!h) return PLAT_E_RANGE;
    if (len) memset(h, value, len);
    return PLAT_OK;
}

plat_gaddr plat_mem_pool_alloc(uint32_t size, uint32_t align) { return g.base ? region_alloc(&g.pool, size, align) : 0; }
void plat_mem_pool_free(plat_gaddr a) { if (g.base) (void)region_release(&g.pool, a); }

/* ---- heap del juego ---- */
plat_gaddr m1_heap_alloc(uint32_t size, uint32_t align) { return g.base ? region_alloc(&g.heap, size, align) : 0; }
plat_status m1_heap_free(plat_gaddr a) {
    if (!g.base) return PLAT_E_INVALID;
    return region_release(&g.heap, a) ? PLAT_OK : PLAT_E_INVALID;
}
uint32_t m1_heap_block_size(plat_gaddr a) {
    int k = g.base ? region_find(&g.heap, a) : -1;
    return k < 0 ? 0 : g.heap.b[k].size;
}
uint32_t m1_heap_bytes_used(void)    { return g.base ? region_sum(&g.heap, 1, 0, NULL) : 0; }
uint32_t m1_heap_bytes_free(void)    { return g.base ? region_sum(&g.heap, 0, 0, NULL) : 0; }
uint32_t m1_heap_largest_free(void)  { return g.base ? region_sum(&g.heap, 0, 1, NULL) : 0; }
uint32_t m1_heap_blocks_used(void)   { uint32_t c = 0; if (g.base) region_sum(&g.heap, 1, 0, &c); return c; }
uint32_t m1_pool_bytes_used(void)    { return g.base ? region_sum(&g.pool, 1, 0, NULL) : 0; }
uint32_t m1_pool_blocks_used(void)   { uint32_t c = 0; if (g.base) region_sum(&g.pool, 1, 0, &c); return c; }

/* ---- plat_status_str (declarada en plat_types.h; la implementacion vive aqui) ---- */
const char *plat_status_str(plat_status s) {
    switch (s) {
    case PLAT_OK: return "ok";
    case PLAT_E_FAIL: return "fallo";
    case PLAT_E_INVALID: return "invalido";
    case PLAT_E_NOTFOUND: return "no encontrado";
    case PLAT_E_NOMEM: return "sin memoria";
    case PLAT_E_RANGE: return "fuera de rango";
    case PLAT_E_UNSUPPORTED: return "no soportado";
    case PLAT_E_BUSY: return "ocupado";
    case PLAT_E_IO: return "error de E/S";
    default: return "desconocido";
    }
}
