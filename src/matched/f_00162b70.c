extern void f0(void), f1(void), f2(void), f3(void), f4(void), f5(void), f6(void), f9(void), f10(void);
extern void (*t[11])(void);
extern s32 *getp(void);
extern void reg(int, void *, int, int);
s32 func(void) {
    t[0] = f0; t[1] = f1; t[2] = f2; t[4] = f3; t[5] = f4; t[3] = f5; t[6] = f6;
    t[7] = (void (*)(void))getp()[7];
    t[9] = f9; t[10] = f10;
    reg(0x20000, t, 448, 12);
    return 1;
}
