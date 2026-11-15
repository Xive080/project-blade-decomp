extern s32 *func_0016fdd0(s32, s32, s32);
extern void func_00143a10(void *);
extern s32 *volatile D_002FA58C;
extern s32 *volatile D_002FA588;
extern volatile s32 D_002FA420;
extern volatile s32 D_002FA570;

void func(void) {
    s32 *b;
    volatile s32 *p;
    D_002FA58C = func_0016fdd0(4, 8, 0);
    if (*(volatile s32 *)0x70003FFC == 0xAFBFCFDF) {
        *(s32 **)0x70003FDC = D_002FA58C;
    }
    b = func_0016fdd0(4, 9, 0);
    if (b == 0) b = func_0016fdd0(3, 9, 0);
    D_002FA588 = b;
    if (*(volatile s32 *)0x70003FFC == 0xAFBFCFDF) {
        *(s32 **)0x70003FD8 = D_002FA588;
    }
    func_00143a10(b + 20);
    D_002FA420 = b[30];
    p = (volatile s32 *)0x70003FC0;
    D_002FA570 = *p = *p | 4;
    if (*(volatile s32 *)0x70003FFC == 0xAFBFCFDF) {
        *(volatile s32 *)0x70003FC0 = D_002FA570;
    }
}
