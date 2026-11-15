extern void func_0024b540(int, int, void *);
extern void func_00197e40(int, int, float, float);
extern void func_00197de0(int, int);
extern void func_0024b4b0(int, int);
extern void func_0024b470(int, void *);
extern void func_001785a0(int);
extern void func_00197540(int, int);
extern int func_00249e30();
extern int func_00249e40();
extern int func_001b5b50(int);
extern int func_001b5b90(int);
int f(int *a0, unsigned a1, int a2) {
    int ok = 0;
    float v;
    int t[2];
    switch (a1) {
    case 0:
        t[0] = 1; t[1] = 0; ok = 1;
        func_0024b540(12, 0, t);
        func_00197e40(0, 2, 0.5f, 0.075f);
        func_00197e40(0, 3, 0.5f, 0.075f);
        func_00197e40(ok, 2, 0.5f, 0.075f);
        func_00197e40(ok, 3, 0.5f, 0.075f);
        break;
    case 4:
        if (a0[3]) { if (func_001b5b90(func_00249e40() - 5)) ok = 1; }
        else { if (func_001b5b50(func_00249e30() - 1)) ok = 1; }
        break;
    case 5:
        if (a0[3]) { if (func_001b5b90(func_00249e40() + 5)) ok = 1; }
        else { if (func_001b5b50(func_00249e30() + 1)) ok = 1; }
        break;
    case 1:
        func_0024b4b0(12, 0);
        func_00197de0(0, 2);
        func_00197de0(0, 3);
        func_00197de0(1, 2);
        func_00197de0(1, 3);
        break;
    }
    if (ok) {
        if (a0[3]) v = (float)func_00249e40() / 100.0f;
        else v = (float)func_00249e30() / 20.0f;
        func_0024b470(12, &v);
        if (a1 - 4 < 2) func_001785a0(4);
    } else if (a1 == 4) {
        func_00197540(a2, 2);
        func_001785a0(8);
    } else if (a1 == 5) {
        func_00197540(a2, 3);
        func_001785a0(8);
    }
    return 1;
}
