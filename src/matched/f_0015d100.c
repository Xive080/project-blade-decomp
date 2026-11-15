struct P { char pad[0x30]; f32 x; f32 y; f32 z; };
extern void func_001ce160(f32 *, f32 *);
extern s32 func_0015d1c0(struct P *, f32 *, s32, s32, f32, s32);
s32 func(struct P *p, f32 *v, s32 a2, f32 f, s32 a3, s32 t) {
    f32 d[3];
    if (p == 0 || v == 0) return 0;
    d[0] = v[0] - p->x;
    d[1] = v[1] - p->y;
    d[2] = v[2] - p->z;
    func_001ce160(d, d);
    return func_0015d1c0(p, d, a2, a3, f, t);
}
