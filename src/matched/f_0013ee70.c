struct V3 { f32 x, y, z; };
struct O { char p[12]; struct V3 v; char q[0x48-0x18]; s32 h; };
struct P { char p[12]; struct O *o; };
struct M { char c[64]; };
extern s32 f_1c3b70(s32);
extern void f_1c7710(void *, s32);
extern void f_1ce410(struct V3 *, struct V3 *, s32, struct M *);
extern void f_1ce160(void *, void *);
s32 func(struct P *a) {
    struct O *o = a->o;
    struct M m;
    struct V3 v;
    s32 r = f_1c3b70(o->h);
    s32 res;
    if (o->v.x * o->v.x + o->v.y * o->v.y + o->v.z * o->v.z < 0.25f) return 1;
    v = o->v;
    f_1c7710(&m, r);
    f_1ce410(&v, &v, 1, &m);
    f_1ce160(&v, &v);
    if (v.z < -0.8660254f) return 2;
    return v.z > 0.8660254f;
}
