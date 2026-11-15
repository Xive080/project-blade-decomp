struct V4 { float x, y, z, w; };
struct Ob { char p0[28]; unsigned short n; int a; int h; int hh; };
struct G { char p[20]; int c; };
struct E { int k; struct V4 v; int u0, u1, u2; float f; int z[4]; };
struct D { int k; int z[4]; float w, h; struct V4 v; int s; int z0, z1; float f0, f1; int pad[4]; };
extern struct V4 D75a0, D06a0, D06b0;
extern struct G *gg;
extern int func_00188f00(int, struct E *, void *, struct Ob *);
extern void func_00188ff0(int);
extern void func_00188f80(int, int);
extern int func_00189050(struct D *, int, int, int);
extern void func_00236970(void);
void func(struct Ob *o, int b, int s) {
    struct D d;
    struct E e;
    if (o->a) {
        int n;
        if (o->h) {
            func_00188ff0(o->h);
            o->h = 0;
            o->hh = 0;
        }
        n = o->n;
        o->h = o->a;
        func_00188f80(o->h, n + 1);
        e.f = 0.75f;
        e.z[0] = 0; e.z[1] = 0; e.z[2] = 0; e.z[3] = 0;
        e.k = 19;
        e.v = D75a0;
        e.u2 = 0;
        o->hh = func_00188f00(o->h, &e, (void *)func_00236970, o);
    }
    if (s) {
        d.k = 0; d.z[0] = 0; d.z[1] = 0; d.z[2] = 0; d.z[3] = 0;
        d.w = 640.0f; d.h = 448.0f;
        d.v = D06a0;
        d.s = s; d.z0 = 0; d.z1 = 0;
        d.f0 = 1.0f; d.f1 = 1.0f;
    } else {
        d.k = 7;
        d.z[0] = 0; d.z[1] = 0; d.z[2] = 0; d.z[3] = 0;
        d.w = 640.0f; d.h = 448.0f;
        d.v = D06b0;
    }
    o->a = func_00189050(&d, gg->c, gg->c, o->n);
}
