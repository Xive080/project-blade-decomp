extern u32 f247890(void *, u8 *);
struct E { f32 a; s32 b; s32 c; f32 d; u8 n; u8 m; char pad[6]; };
extern struct E T[];
s32 func(f32 *p, s32 i) {
    u8 t;
    u32 r = f247890(p, &t);
    if (T[i].n < r) return 0;
    T[i].n = r;
    T[i].a = p[0];
    T[i].b = ((s32*)p)[1];
    T[i].c = ((s32*)p)[2];
    T[i].d = p[3];
    T[i].m = t;
    return 1;
}
