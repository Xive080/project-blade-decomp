struct E { char p[16]; int v; };
struct O { unsigned n; struct E *e; void (*fn)(int); };
struct G { char pad[0x134]; void (*f)(struct O *); char pad2[4]; struct O *(*a)(int, int); };
extern char D_0032A620[];
extern int func_001bf2b0(int, void *);
extern int func_001ca2d0(int, void *, unsigned);

static inline void fr(struct O *o) {
    int off;
    unsigned i;
    if (o != 0) {
        i = 0;
        off = 0;
        for (; i < o->n; off += 20, i++) {
            int a = *(int *)((char *)o->e + off + 16);
            if (a != 0) o->fn(a);
        }
        ((struct G *)D_0032A620)->f(o);
    }
}

struct O *func(struct O **out, int fd, int (*rd)(int), void (*fn)(int)) {
    struct { int pad; unsigned sz; int c, d; } s;
    unsigned *p;
    struct O *o;
    unsigned i;
    int off;
    if (out == 0 || *out != 0) return 0;
    if (rd == 0 || fn == 0) return 0;
    if (func_001bf2b0(fd, &s) == 0) return 0;
    p = &s.sz;
    if (*p % 20 != 0) return 0;
    if ((o = ((struct G *)D_0032A620)->a(1, *p + 12)) == 0) return 0;
    o->n = *p / 20;
    o->e = (struct E *)((char *)o + 12);
    o->fn = fn;
    if (*p != func_001ca2d0(fd, o->e, *p)) {
        fr(o);
        return 0;
    }
    *out = o;
    i = 0;
    off = 0;
    for (; i < o->n; i++, off += 20) {
        int r = rd(fd);
        if (r == 0) {
            fr(o);
            return 0;
        }
        *(int *)((char *)o->e + off + 16) = r;
    }
    return o;
}
