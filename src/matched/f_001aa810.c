extern void func_00109d00();
extern void func_00109d20();
extern void func_0010a530();
extern void func_0010a670();
extern int func_0010cdc8();
extern int func_0010cfb8();
extern int gp_h;
extern char buf[];
extern char g_327780[];
extern struct G { int v; char pad[0x2000]; } g_w;
extern void func_001aa960();

void f(int a0, int a1, int a2, int a3, int a4, int *a5) {
    char *s0 = 0;
    int s6 = 0;
    void *s1 = 0;
    char *s2 = 0;
    if (a0 == 0) {
        s1 = func_001aa960;
        s6 = 1;
        s2 = g_327780;
    }
    if (a4 != 0) {
        s0 = g_327780;
    }
    func_00109d20(gp_h);
    while (func_0010cfb8(buf) != 0) {
    }
    func_0010a530(a2, a2 + a3);
    while (func_0010cdc8(buf, a1, s6, a2, a3, s0, a4, s1, s2) != 0) {
    }
    if (a0 != 0) {
        func_0010a670(s0, s0 + a4);
        if (a4 == 4) {
            *a5 = g_w.v;
        }
        func_00109d00(gp_h);
    }
}
