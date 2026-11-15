struct V { f32 x, y, z; };
struct E { char pad0[0x30]; struct V p; };
struct F { char pad[0xc]; f32 a; f32 b; char pad1[0x38]; struct V q; };
struct Z { char pad[0x38]; struct F *f; };
struct O { char p0[12]; struct V v0; struct V v1; char p1[4]; s32 flags; s32 n; struct V v2; struct V v3; s32 h; struct Z *z; s32 pad; s32 w; };
extern void D_0017F0D0(void **, f32);
extern struct E *func_001c3b70(s32);
extern f32 func_001ce240(void *);
extern void func_001ce410(void *, void *, s32, void *);
extern void func_001c7610(void *, void *, s32, f32);
void *func(struct O *o) {
    void (*f)(void **, f32);
    void *args[3];
    struct V t;
    struct V w, u;
    struct E *e;
    f32 k;
    if (o->flags & 1) f = D_0017F0D0;
    args[0] = o;
    args[1] = &o->v0;
    args[2] = &o->v1;
    if (o->n > 1) {
        if (o->w == 0) return o;
        f(args, o->z->f->a);
        args[0] = &o->v2;
        args[1] = &o->v3;
        args[2] = &t;
        if (o->h != 0) {
            e = func_001c3b70(o->h);
            f(args, o->z->f->b);
            { f32 r = func_001ce240(&o->v3); k = 57.29578f * (r * *(f32 *)0x70003FA8); }
            w = e->p;
            u = o->z->f->q;
            func_001ce410(&u, &u, 1, e);
            e->p = u;
            func_001c7610(e, &o->v3, 2, k);
            e->p = w;
        }
    } else {
        f(args, 1.0f);
    }
    return o;
}
