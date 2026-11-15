struct V { float x, y, z; };
struct Q { char pad[28]; struct V v; };
struct T { char pad[48]; struct V v; };
struct O { char pad0[16]; int fl; struct V p; char pad1[16]; int w30; char pad2[140]; int wc0; char pad3[1276]; float f5c0; int pad4; int q5c8; struct Q *q5cc; int w5d0; };
extern void f1(int, float);
extern struct T *f2(int);
extern void f3(struct O *);
extern void f4(struct O *, int, int, int);
int f_0018cca0(struct O *o) {
    struct T *t;
    f1(o->q5c8, o->f5c0);
    if (o->w5d0) {
        t = f2(o->w5d0);
        o->p = t->v;
        o->q5cc->v = o->p;
    }
    if (o->fl & 4) {
        o->fl &= ~4;
        f3(o);
    }
    f4(o, o->w30, o->wc0, 0);
    return 1;
}
