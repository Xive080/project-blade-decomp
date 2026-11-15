extern float D1[];
extern int D3[];
extern int g1;
extern int g2;
extern char cb[];
extern void func_00131540();
extern void func_00132bf0(void);
extern int func_0016f240(int, int, int);
extern void func_0016f380(int);
int f(void) {
    volatile int *p = D3;
    D1[0] = 20.0f;
    D1[2] = 0;
    p[0] = 2;
    p[0] = p[0] & ~16;
    func_00131540(0, cb);
    g1 = 0;
    g2 = 0;
    func_00132bf0();
    if (func_0016f240(12, -1, -1) == 0) func_0016f380(81);
    return 1;
}
