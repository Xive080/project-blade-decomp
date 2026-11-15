typedef struct { float x, y, z; } V3;
typedef struct { float d; V3 a, b, c, d2; } E;
typedef struct Ctx {
    char pad[16];
    int flags;
    int (*cb)(void *, V3 *, V3 *, V3 *, V3 *);
    int n;
    E e[20];
} Ctx;
int f(int r, void **p, V3 *a, float f0, V3 *b, V3 *c, V3 *d, Ctx *s) {
    int t;
    if (s->cb) {
        t = s->cb(*p, a, b, c, d);
        if (!t) return r;
        s->flags |= t;
    }
    if (f0 > 0.0f) {
        if (s->n < 20) {
            s->e[s->n].d = f0;
            s->e[s->n].a = *a;
            s->e[s->n].b = *b;
            s->e[s->n].c = *c;
            s->e[s->n].d2 = *d;
            s->n++;
        }
    }
    return r;
}
