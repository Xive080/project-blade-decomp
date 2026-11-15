struct V { int (*f)(void *, int); };
struct O { char p0[12]; int a; char p1[88]; int b; int c; int d; int e; };
extern char D_00305F20[];
int (**func_0013c300(void))(void *, int);
int func_001c35a0(void);
int func_001feb10(int, int *, int *, int, int);
int func_001fee10(int, int);
int func_001fee80(int, int);
int func(struct O *o, int x) {
    int q0 = 1;
    int q1 = 1;
    if ((*func_0013c300())(o, x) == 0) return 0;
    o->a = (int)D_00305F20;
    o->b = func_001c35a0();
    o->c = func_001c35a0();
    o->e = 0;
    o->d = func_001feb10(1, &q0, &q1, 4096, 36);
    if (func_001fee80(o->c, 1) == 0) return 0;
    return func_001fee10(o->c, o->d) != 0;
}
