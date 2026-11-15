extern volatile s32 D_002FA570;
extern volatile s32 D_002FA584;
extern s32 D_002FA5D8[];
s32 func_001b4ae0();
void func_001a8410(s32);
void func(s32 arg0) {
    s32 *s0 = (s32*)D_002FA5D8[arg0];
    if (s0[1] & 1) {
        D_002FA570 = 2;
        if (*(s32*)0x70003FFC == 0xAFBFCFDF) *(s32*)0x70003FC0 = D_002FA570;
        func_001b4ae0();
        func_001a8410(2);
    } else {
        D_002FA570 = 1;
        if (*(s32*)0x70003FFC == 0xAFBFCFDF) *(s32*)0x70003FC0 = D_002FA570;
        func_001a8410(1);
    }
    D_002FA584 = (s32)s0;
    if (*(s32*)0x70003FFC == 0xAFBFCFDF) *(s32*)0x70003FD4 = D_002FA584;
    (*(void(**)(s32*))(*(s32*)s0))(s0);
}
