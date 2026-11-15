/*
 * memspike.c - spike de memoria del M0 (PORT_PLAN 3.1).
 *
 * Mide, en el host donde se ejecuta, que estrategia de punteros del plan es
 * viable. Salida: lineas "clave=valor" faciles de pegar en docs/port/m0.md.
 *
 *  E1  proceso con espacio de direcciones de 32 bits (-m32): no se prueba en
 *      ejecucion aqui (lo decide el compilador/SO); se informa sizeof(void*)
 *      y el script de la doc lo intenta compilar.
 *  E1b "rango bajo": reservar la arena en una direccion fija por debajo de
 *      4 GB, de modo que un puntero guest de 32 bits sea un puntero host
 *      valido (identidad o base fija pequena). Se prueba varias bases.
 *  E2  arena en cualquier direccion + punteros guest de 32 bits (offset):
 *      se comprueba la reserva y se mide el coste de recorrer una lista
 *      enlazada con offsets frente a punteros nativos.
 *  E3  structs de ancho fijo sin punteros: se comprueba solo el tamano de un
 *      struct de ejemplo con punteros host frente a handles de 32 bits.
 *
 * Una unica pieza dependiente del SO: reservar/liberar memoria virtual
 * (mmap en POSIX, VirtualAlloc en Windows). Codigo propio, sin dependencias.
 * La rama de Windows NO esta probada en esta maquina (hipotesis).
 */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#if defined(_WIN32)
#  include <windows.h>
static void *sp_reserve(uintptr_t want, size_t size, int fixed) {
    void *p = VirtualAlloc((LPVOID)want, size, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
    (void)fixed;
    return p;
}
static void sp_release(void *p, size_t size) { (void)size; VirtualFree(p, 0, MEM_RELEASE); }
#else
#  include <sys/mman.h>
#  ifndef MAP_ANONYMOUS
#    define MAP_ANONYMOUS MAP_ANON
#  endif
/* fixed=1: exige exactamente `want`. Sin MAP_FIXED (que pisaria mapas
 * existentes) se usa la pista y se comprueba que el SO la respete. */
static void *sp_reserve(uintptr_t want, size_t size, int fixed) {
    void *p = mmap((void *)want, size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    if (p == MAP_FAILED) return NULL;
    if (fixed && (uintptr_t)p != want) { munmap(p, size); return NULL; }
    return p;
}
static void sp_release(void *p, size_t size) { munmap(p, size); }
#endif

#define ARENA_SIZE (32u * 1024u * 1024u) /* RDRAM de PS2 */

static double now_ns(void) {
    struct timespec ts;
    timespec_get(&ts, TIME_UTC);
    return (double)ts.tv_sec * 1e9 + (double)ts.tv_nsec;
}

/* ---- E1b: rango bajo ---- */
static int try_low(uintptr_t base) {
    void *p = sp_reserve(base, ARENA_SIZE, 1);
    int ok = p != NULL;
    if (ok) {
        ((volatile uint32_t *)p)[0] = 0xA5A5A5A5u;
        ((volatile uint32_t *)p)[ARENA_SIZE / 4 - 1] = 1;
        ok = ((volatile uint32_t *)p)[0] == 0xA5A5A5A5u;
        sp_release(p, ARENA_SIZE);
    }
    printf("E1b_low_base_0x%08lx=%s\n", (unsigned long)base, ok ? "OK" : "FALLA");
    return ok;
}

/* Cuantas reservas de 32 MB consecutivas cabe pedir con pista bajo 4 GB sin
 * FIXED: dice si el SO deja usar el rango bajo "por pista". */
static void try_low_hint(void) {
    void *p = sp_reserve(0x20000000u, ARENA_SIZE, 0);
    printf("E1b_hint_0x20000000_devuelve=%s\n",
           !p ? "NULL" : ((uintptr_t)p < 0x100000000ull ? "bajo4GB" : "alto"));
    if (p) sp_release(p, ARENA_SIZE);
}

/* ---- E2: offsets de 32 bits ---- */
typedef struct NodeN { struct NodeN *next; uint32_t val; uint32_t pad; } NodeN;   /* 16 B en host 64 */
typedef struct NodeO { uint32_t next; uint32_t val; } NodeO;                       /* 8 B, como PS2 */

static double bench_native(NodeN *nodes, uint32_t n, int reps, uint64_t *sum) {
    double t0 = now_ns();
    uint64_t s = 0;
    for (int r = 0; r < reps; r++)
        for (NodeN *p = nodes; p; p = p->next) s += p->val;
    *sum = s;
    return (now_ns() - t0) / ((double)n * reps);
}
static double bench_offset(uint8_t *base, uint32_t first, uint32_t n, int reps, uint64_t *sum) {
    double t0 = now_ns();
    uint64_t s = 0;
    for (int r = 0; r < reps; r++)
        for (uint32_t o = first; o;) { const NodeO *p = (const NodeO *)(base + o); s += p->val; o = p->next; }
    *sum = s;
    return (now_ns() - t0) / ((double)n * reps);
}

/* Mezcla determinista (LCG propia) para que el recorrido no sea secuencial. */
static uint32_t lcg(uint32_t *s) { *s = *s * 1664525u + 1013904223u; return *s; }

static void run_e2(void) {
    uint8_t *arena = sp_reserve(0, ARENA_SIZE, 0);
    printf("E2_arena_cualquier_direccion=%s\n", arena ? "OK" : "FALLA");
    if (!arena) return;
    const uint32_t n = 100000; /* 800 KB de nodos de 8 B: cabe en L2/L3 */
    /* Orden aleatorio de nodos */
    uint32_t *perm = malloc(n * sizeof *perm);
    for (uint32_t i = 0; i < n; i++) perm[i] = i;
    uint32_t seed = 12345;
    for (uint32_t i = n - 1; i > 0; i--) { uint32_t j = lcg(&seed) % (i + 1); uint32_t t = perm[i]; perm[i] = perm[j]; perm[j] = t; }
    NodeO *no = (NodeO *)(arena + 4096);
    NodeN *nn = malloc(n * sizeof *nn);
    for (uint32_t i = 0; i < n; i++) {
        uint32_t a = perm[i], b = perm[(i + 1) % n];
        nn[a].val = no[a].val = i;
        nn[a].next = (i + 1 < n) ? &nn[b] : NULL;
        no[a].next = (i + 1 < n) ? (uint32_t)(4096 + b * sizeof(NodeO)) : 0;
    }
    uint64_t s1, s2;
    int reps = 50;
    double tn = bench_native(&nn[perm[0]], n, reps, &s1);
    double to = bench_offset(arena, (uint32_t)(4096 + perm[0] * sizeof(NodeO)), n, reps, &s2);
    printf("E2_lista_%u_nodos_native_ns_por_nodo=%.3f\n", n, tn);
    printf("E2_lista_%u_nodos_offset32_ns_por_nodo=%.3f\n", n, to);
    printf("E2_resultados_iguales=%s\n", s1 == s2 ? "si" : "NO");
    /* Camino caliente: solo ancho de banda (secuencial) para ver el coste de base+offset */
    uint32_t *a32 = (uint32_t *)arena;
    double t0 = now_ns(); uint64_t acc = 0;
    for (int r = 0; r < 20; r++) for (uint32_t i = 0; i < ARENA_SIZE / 4; i++) acc += a32[i];
    printf("E2_lectura_secuencial_GBs=%.2f (acc=%llu)\n",
           (20.0 * ARENA_SIZE) / (now_ns() - t0), (unsigned long long)acc);
    free(perm); free(nn); sp_release(arena, ARENA_SIZE);
}

/* ---- E3: tamano de structs con y sin punteros ---- */
struct DemoHostPtrs { void *a; void *b; uint32_t c; void *d; };          /* host */
struct DemoFixed    { uint32_t a; uint32_t b; uint32_t c; uint32_t d; }; /* PS2 */

int main(void) {
    printf("sizeof_void_ptr=%u\n", (unsigned)sizeof(void *));
    printf("sizeof_long=%u\n", (unsigned)sizeof(long));
#if defined(__APPLE__)
    printf("so=macos\n");
#elif defined(_WIN32)
    printf("so=windows\n");
#elif defined(__linux__)
    printf("so=linux\n");
#else
    printf("so=otro\n");
#endif
#if defined(__aarch64__) || defined(_M_ARM64)
    printf("cpu=arm64\n");
#elif defined(__x86_64__) || defined(_M_X64)
    printf("cpu=x86_64\n");
#elif defined(__i386__) || defined(_M_IX86)
    printf("cpu=x86\n");
#else
    printf("cpu=otro\n");
#endif
    if (sizeof(void *) == 4) printf("E1_proceso_32bit=si (punteros de 4 bytes, todo el heap bajo 4 GB)\n");
    else printf("E1_proceso_32bit=no (esta build es de 64 bits)\n");

    int low = 0;
    low |= try_low(0x00010000u);
    low |= try_low(0x00100000u);
    low |= try_low(0x10000000u);
    low |= try_low(0x40000000u);
    try_low_hint();
    printf("E1b_rango_bajo_algun_exito=%s\n", low ? "si" : "no");
    run_e2();
    printf("E3_sizeof_struct_con_punteros_host=%u\n", (unsigned)sizeof(struct DemoHostPtrs));
    printf("E3_sizeof_struct_ancho_fijo=%u\n", (unsigned)sizeof(struct DemoFixed));
    return 0;
}
