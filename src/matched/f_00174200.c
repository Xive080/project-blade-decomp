extern volatile s32 D_002FA364[];
extern volatile s32 D_002FA584[];
extern s32 D_70003FD4[];
extern u32 D_70003FFC[];
extern s32 G_8454;
extern s32 G_8458;
extern void func_00131540(s32, s32);
extern void func_001320e0(void);
extern void func_00132950(f32);
extern void func_00132bf0(void);
extern s32 func_0016f240(s32, s32, s32);
extern void func_0016f380(s32);
extern void func_00174380(s32);
extern void func_001a7240(s32, f32);
extern f32 func_001b5c30(void);

s32 func(void) {
    D_002FA364[0] = 2;
    D_002FA364[0] &= ~0x10;
    func_00131540(0, 0);
    func_00174380(0);
    func_00174380(1);
    G_8458 = 1;
    G_8454 = 0;
    func_00132bf0();
    if (func_0016f240(0xC, -1, -1) == 0) {
        func_0016f380(0x51);
    }
    D_002FA584[0] = 0;
    if (D_70003FFC[0] == 0xAFBFCFDF) {
        D_70003FD4[0] = D_002FA584[0];
    }
    func_00132950(func_001b5c30());
    func_001a7240(0, 0.05f);
    func_001a7240(1, 0.05f);
    func_001320e0();
    return 1;
}
