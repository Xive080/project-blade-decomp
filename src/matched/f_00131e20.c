extern s32 D_002FA678[];
extern s32 D_002FA66C[];
extern f32 D_002FA69C[];
extern s32 D_002FA63C[];
extern f32 D_002FA6D4[];
extern s32 func_001a74e0(s32);
extern u32 func_001a7490(s32);
s32 func(void) {
    f32 t;
    f32 v;
    if (D_002FA678[0] != 0 || D_002FA66C[0] != 0) return 1;
    if ((*(f32*)0x70003FB0) < D_002FA69C[0]) return 1;
    if (D_002FA63C[0] == -1) return 0;
    if (D_002FA678[0] != 0) v = -1.0f;
    else if (D_002FA63C[0] == -1) v = -1.0f;
    else if (func_001a74e0(D_002FA63C[0]) != 4) v = -1.0f;
    else v = (f32)func_001a7490(D_002FA63C[0]) / 1000.0f;
    if (v < 0.0f) {
        D_002FA6D4[0] = v;
        return 0;
    }
    t = D_002FA6D4[0];
    if (!(v <= t)) {
        D_002FA6D4[0] = v;
        return 1;
    }
    if (v - t < -0.5f) {
        D_002FA6D4[0] = v;
        return 0;
    }
    D_002FA6D4[0] = v;
    return 1;
}
