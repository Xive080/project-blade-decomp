typedef struct { f32 x, y, z; } V3;
struct O {
    char pad0[0x1c];
    V3 *a;
    char pad1[0x0c];
    V3 *n;
    char **m;
    char pad2[4];
    s32 cnt;
};
extern void func_001c7710(void *, void *);
extern f32 func_001ce160(V3 *, V3 *);
extern void func_001ce3f0(V3 *, V3 *, s32, void *);
struct M { s32 w[16]; };
extern void func_001ce410(V3 *, V3 *, s32, struct M *);

s32 func(struct O *o0, V3 *p, V3 *d, V3 *out1, V3 *out2) {
    struct O *o;
    s32 i;
    V3 s;
    V3 df;
    V3 u;
    V3 t;
    struct M mat;
    o = (struct O *)((s32)o0);
    out2->z = 0;
    out2->y = 0;
    out2->x = 0;
    out1->z = 0;
    out1->y = 0;
    out1->x = 0;
    for (i = 0; i < o->cnt; i++) {
        s = o->a[i];
        func_001ce3f0(&s, &s, 1, o->m[i]);
        df.x = p->x - s.x;
        df.y = p->y - s.y;
        df.z = p->z - s.z;
        func_001ce160(&t, &df);
        func_001c7710(&mat, o->m[i]);
        u = t;
        func_001ce410(&u, &u, 1, &mat);
        {
            V3 *n = &o->n[i];
            f32 a = u.x * n->x + u.y * n->y + u.z * n->z;
            f32 b = t.x * d->x + t.y * d->y + t.z * d->z;
            f32 c = a + b;
            if (df.x * df.x + df.y * df.y + df.z * df.z < c * c) return 1;
        }
    }
    return 0;
}
