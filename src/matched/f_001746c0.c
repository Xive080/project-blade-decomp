struct E { f32 lim; s32 pad[2]; f32 a; f32 b; char pad2[32]; };
extern struct E tbl[];
s32 f(s32 i, f32 a, f32 b) {
    f32 c;
    if (a == 0.0f) return 0;
    c = b < 0.0f ? 0.0f : (b > 1.0f ? 1.0f : b);
    if (tbl[i].lim > c && !(a <= 0.0f)) return 0;
    if (tbl[i].lim < c && a < 0.0f) return 0;
    tbl[i].a = a;
    tbl[i].b = c;
    return 1;
}
