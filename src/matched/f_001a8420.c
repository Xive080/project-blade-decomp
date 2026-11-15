extern s32 G_806C, G_852C;
extern s32 D_003176B0[];
extern s32 D_003176B4[];
extern s32 D_00327740[];
extern char D_002F00B0[], D_002F0110[];
extern void func_00109d00(s32);
extern void func_00109d20(s32);
extern void func_0011eac8(s32*, void*, s32, s32);
extern void func_0011fe10(void*, void*);
extern void func_001214b8(void*, void*, s32, s32, s32, s32, s32, s32);
extern void func_001aa740(s32);
s32 func(char *p, f32 f) {
    if (*(s32*)(p + 16) != 1) return 0;
    if (f < 0.0f) f = 0.0f;
    else if (!(f <= 2.0f)) f = 2.0f;
    if (*(f32*)(p + 76) != f) {
        s32 n, t, r;
        f32 c;
        s32 sp[32];
        *(f32*)(p + 76) = f;
        func_00109d20(G_806C);
        n = D_003176B0[0];
        c = 16383.0f * f;
        D_00327740[0] = *(s32*)(p + 28);
        t = (n + 1) * 8;
        asm { cvt.w.s c,c }
        asm { mfc1 r,c }
        D_00327740[1] = r;
        if (G_852C != 0) {
            s32 x = *(s32*)((char*)D_00327740+0); s32 y = *(s32*)((char*)D_00327740+4);
            func_001214b8(sp, D_002F00B0, 0x8017, x, y, n, t, 8);
            func_0011fe10(D_002F0110, sp);
        }
        *(s32*)(D_003176B4[0] + t * 4) = 0x8017;
        func_0011eac8((s32*)(D_003176B4[0] + (t + 1) * 4), D_00327740, 8, t * 4);
        D_003176B0[0] += 1;
        if (D_003176B0[0] >= 1023) func_001aa740(0);
        func_00109d00(G_806C);
    }
    return 1;
}
