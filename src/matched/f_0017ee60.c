struct V { float x, y, z; };
struct O { char pad[0x30]; struct V v; };
struct S { char pad0[24]; struct V v; char pad3[8]; int n; char pad1[24]; int h; char pad2[8]; int w; };
struct O *g1(int);
void g2(struct O *, struct O *);
void g3(int);
void g4(int);
void *func(struct S *p) {
    if (p->n > 1) {
        if (p->w != 0) {
            struct O *o = g1(p->h);
            struct O *q;
            o->v = p->v;
            q = g1(p->h);
            g2(q, g1(p->h));
            g3(p->h);
            g4(p->h);
        }
        return p;
    }
    return 0;
}
