struct C { char pad[0x14]; void (*fn)(void *, int, int); int mask; };
struct H { char pad[0x18]; struct C **arr; int pad4; unsigned short n; char p2[2]; int m; };
extern struct H *G_84B0;
int func(struct H *h, int a, int b) {
    unsigned i;
    int bit;
    int r;
    int off;
    G_84B0 = h;
    r = 0;
    bit = 1 << a;
    if (bit & h->m) {
        i = 0; off = 0;
        for (; i < h->n; i++) {
            struct C *c = *(struct C **)((char *)h->arr + off);
            if (c->mask & bit) {
                c->fn(c, a, b);
                r = 1;
            }
            off += 4;
        }
    }
    G_84B0 = 0;
    return r;
}
