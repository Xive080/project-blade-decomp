extern s32 G_82A0;
extern s32 G_82A4;
extern s32 G_89FC;
void D_0025D510(void);
void D_0025D540(void);
s32 func_001099c0(s32, void (*)(void), s32);
void func_001099e0(s32, s32);
s32 func_0010a770(s32, s32);
s32 func(void) {
    G_82A0 = func_001099c0(2, D_0025D540, 0);
    if (G_82A0 == -1) return 0;
    G_82A4 = func_001099c0(2, D_0025D510, -1);
    if (G_82A0 == -1) {
        func_001099e0(2, G_82A0);
        G_82A0 = -1;
        return 0;
    }
    G_89FC = func_0010a770(2, G_82A0);
    if (G_89FC == -1) {
        func_001099e0(2, G_82A4);
        G_82A4 = -1;
        func_001099e0(2, G_82A0);
        G_82A0 = -1;
        return 0;
    }
    return 1;
}
