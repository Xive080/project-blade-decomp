struct V3 { f32 x, y, z; };
struct O { struct V3 pos; char pad[12]; struct V3 p; };
struct S3 { char pad[44]; f32 k; f32 g; s32 q; s32 m; };
struct S2 { char pad[16]; struct V3 d; };
extern void func_001ce3f0(struct V3 *, struct V3 *, s32, struct S2 *);
extern s32 func_0017e660(s32, struct V3 *, struct V3 *, struct V3 *, s32, s32, s32);
extern s32 func_00256538(f32);
extern s32 func_0011a510(s32);
extern f32 func_00255940(s32);
void f(struct O *o, struct S3 *a, struct S2 *b) {
    struct V3 v, w, h;
    v = o->p;
    func_001ce3f0(&v, &v, 1, b);
    w.x = b->d.x * -a->g;
    w.y = b->d.y * -a->g;
    w.z = b->d.z * -a->g;
    w.x = w.x + v.x;
    w.y = w.y + v.y;
    w.z = w.z + v.z;
    if (func_0017e660(*(s32 *)0x70003fd8, &v, &w, &h, 0, 0, a->m)) {
        f32 dx = h.x - w.x;
        f32 dy = h.y - w.y;
        f32 dz = h.z - w.z;
        f32 t = func_00255940(func_0011a510(func_00256538(dx * dx + dy * dy + dz * dz)));
        f32 ex, ey, ez;
        t = t * a->k;
        ey = b->d.y * t;
        ez = b->d.z * t;
        ex = b->d.x * t;
        o->pos.x = o->pos.x + ex;
        o->pos.y = o->pos.y + ey;
        o->pos.z = o->pos.z + ez;
    }
}
