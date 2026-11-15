extern s32 G_8328;
extern s32 D_002F0AA0[];
extern s32 func_0013b550(s32, s32);
extern void func_001214b8(s32, s32, s32);
s32 func(s32 a, s32 b) {
    u32 t;
    if (b >= 15 && b < 22) {
        t = b - 15;
        func_001214b8(a + 344, func_0013b550(G_8328, 365), (s32)(t + 1) * 180);
        return a + 344;
    }
    if (b >= 22 && b < 27) {
        t = b - 22;
        func_001214b8(a + 344, func_0013b550(G_8328, 366), t + 1);
        return a + 344;
    }
    if (b >= 27 && b < 32) {
        t = b - 27;
        func_001214b8(a + 344, func_0013b550(G_8328, 367), t + 1);
        return a + 344;
    }
    return func_0013b550(G_8328, D_002F0AA0[b]);
}
