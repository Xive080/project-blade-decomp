struct F { float v; char p[48]; };
struct I { int v; char p[48]; };
extern struct I D_00308268[];
extern struct I D_00308264[];
extern struct I D_00308270[];
extern struct F D_00308274[];
extern struct F D_00308278[];
extern struct I D_0030828C[];
extern struct I D_00308290[];
extern struct I D_00308260[];
extern int func_00175390(int, int);
extern int func_00256438(float);
extern void func_001765e0(int, int, void *);
static inline void upd(int i, float g) {
    if (D_00308268[i].v != 0) {
        D_0030828C[i].v = 2;
        D_00308290[i].v = func_00256438(255.0f * (g * D_00308274[i].v));
        func_001765e0(i, 3, &D_00308260[i].p[44 - 4]);
    }
}
int func(unsigned int a0, int a1) {
    *(int *)((char *)D_00308268 + a0 * 52) = a1;
    if (a1 != 0) {
        D_00308264[a0].v = func_00175390(a0, D_00308270[a0].v);
        if (D_00308264[a0].v != 0) {
            upd(a0, D_00308278[a0].v);
        }
    } else {
        func_00175390(a0, 0);
        upd(a0, 0.0f);
    }
    return 1;
}
