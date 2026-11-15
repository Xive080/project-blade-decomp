extern int g_a;
extern int g_b;
extern char str_174300[];
extern int func_0016b090(void);
extern void func_00131540(int, char *);
extern int func_0016f4c0(int, int);
extern void func_00178b90(void *);
extern void func_00178800(void);
extern void func_001740d0(void);
struct S { int a, b, c, d, e; float f; void (*cb)(void); };
int f(void) {
    struct S s;
    if (g_a != 0) {
        if (func_0016b090() == 0) {
            func_00131540(0, str_174300);
            s.a = 0;
            s.b = 0;
            s.c = 1;
            s.d = 1;
            g_a = 0;
            s.e = func_0016f4c0(0, 0);
            s.f = 30.0f;
            s.cb = func_001740d0;
            func_00178b90(&s);
            func_00178800();
        }
    } else if (g_b == 0) {
        func_00178800();
    }
    return 1;
}
