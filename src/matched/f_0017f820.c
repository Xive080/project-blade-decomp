struct G { char pad[316]; void *(*alloc)(int, int); };
extern char gbase[];
extern void cbA(void), cbB(void), cbC(void), cbD(void), cbE(void);
struct S { char pad[36]; int n; void **cb; int *one; int *fl; int *d; };
struct S *f(struct S *o, unsigned int mask) {
    unsigned int m; int i, n, k;
    struct G *g;
    void *(**pf)(int, int);
    i = 0;
    n = 0;
    m = mask;
    for (; i < 32; i++) {
        if (m & 1) n++;
        m >>= 1;
    }
    g = (struct G *)gbase;
    pf = &g->alloc;
    o->n = n;
    o->cb = (void **)g->alloc(n, 4);
    o->one = (int *)(*pf)(n, 4);
    o->fl = (int *)(*pf)(n, 4);
    o->d = (int *)(*pf)(n, 4);
    k = 0;
    if (mask & 1) { o->fl[k] = 1; o->cb[k] = (void *)cbA; o->one[k] = 1; k++; }
    if (mask & 4) { o->fl[k] = 4; o->cb[k] = (void *)cbB; o->one[k] = 1; k++; }
    if (mask & 2) { o->fl[k] = 2; o->cb[k] = (void *)cbC; o->one[k] = 1; k++; }
    if (mask & 8) { o->fl[k] = 8; o->cb[k] = (void *)cbD; o->one[k] = 1; k++; }
    if (mask & 16) { o->fl[k] = 16; o->cb[k] = (void *)cbE; o->one[k] = 1; k++; }
    return o;
}
