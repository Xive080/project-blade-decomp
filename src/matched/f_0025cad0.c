typedef int s32;
struct E { s32 k; s32 a; struct R *b; s32 pad[2]; };
struct R { char pad[12]; struct Q *q; };
struct Q { char pad[36]; s32 v; };
struct H { s32 n; s32 pad[2]; struct E e[1]; };
extern s32 G1;
extern struct R *G2;
extern struct R *f(s32, s32, s32);
void func(struct H *h) {
    struct E *e;
    s32 i;
    struct R *r;
    s32 v;
    s32 d;
    s32 c;
    e = h->e;
    for (i = 0; i < h->n; e++, i++) {
        v = e->k;
        d = v >> 16;
        c = v & 0xffff;
        if (d == 0) {
            e->a = G1;
            e->b = G2;
        } else {
            if (d == 17) {
                r = f(d, -1, 101); e->b = r;
            } else {
                r = f(d, -1, c); e->b = r;
            }
            e->a = r->q->v;
        }
    }
}
