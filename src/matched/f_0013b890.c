extern void f0(void), f1(void), f2(void), f3(void), f4(void), f5(void), f6(void), f7(void);
extern void (*t[9])(void);
extern void reg(int, void *, int, int);
s32 func(void) {
    t[0] = f0; t[1] = f1; t[2] = f2; t[4] = f3; t[5] = f4; t[3] = f5; t[6] = f6; t[7] = f7;
    reg(0x100000, t, 136, 84);
    return 1;
}
