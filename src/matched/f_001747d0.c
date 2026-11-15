struct F { float v; char p[48]; };
struct I { int v; char p[48]; };
extern struct I D_00308268[];
extern struct F D_00308274[];
extern struct F D_00308278[];
extern struct F D_00308280[];
extern struct I D_00308284[];
extern struct F D_00308288[];
extern struct I D_0030828C[];
extern struct I D_00308290[];
extern struct I D_00308260[];
extern int func_00256438(float);
extern void func_001765e0(int, int, void *);
int func(int a0, float v, float t) {
    float *cp;
    float nv;
    nv = v < 0.0f ? 0.0f : (v > 1.0f ? 1.0f : v);
    if (!(t <= 0.0f)) {
        D_00308280[a0].v = t + *(float *)0x70003FB0;
    } else {
        D_00308280[a0].v = 0;
    }
    if (nv != D_00308278[a0].v) {
        if (D_00308268[a0].v != 0) {
            D_0030828C[a0].v = 2;
            D_00308290[a0].v = func_00256438(255.0f * (nv * D_00308274[a0].v));
            func_001765e0(a0, 3, &D_00308260[a0].p[44 - 4]);
        }
        D_00308278[a0].v = nv;
    }
    D_00308284[a0].v = 0;
    D_00308288[a0].v = nv;
    return 1;
}
