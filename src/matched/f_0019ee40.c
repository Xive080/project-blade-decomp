typedef unsigned __int128 Q;
extern int func_0013b550(int, int);
extern void func_00195a30(void *, int, int);
extern int func_001a3ac0(char *, int, int);
extern int func_001b6240(void);
extern void func_0024b540(int, int, void *);
extern int G_8328;
extern long long G_84D8;
extern int G_851C;
extern Q D_002E25A0[];
extern char D_003070D0[];
extern char D_00315F20[];
int f(char *p, int k, int c) {
    switch (k) {
    case 0:
        *(int*)(p+8) = func_0013b550(G_8328, 0);
        *(int*)(p+12) = 0;
        *(char**)(p+20) = D_00315F20;
        *(int*)(p+16) = 1;
        *(int*)(p+24) = 0;
        *(int*)(p+4) = 0;
        func_00195a30(D_00315F20, 7, 45);
        *(int*)(p+4) = *(int*)(p+4) | 10;
        break;
    case 9:
        if (func_001b6240() == 0) return 1;
        break;
    case 3: {
        union T { Q q[7]; int w[28]; } t; struct S { int n; void *p; } sv, *ps;
        t = *(union T *)D_002E25A0;
        G_851C = 0;
        t.w[5] = func_0013b550(G_8328, 310);
        t.w[12] = func_0013b550(G_8328, 308);
        t.w[13] = (int)D_003070D0;
        ps = &sv;
        *(long long *)ps = G_84D8;
        ps->n = 4; ps->p = &t;
        func_0024b540(10, 0, ps);
        break;
    }
    default: break;
    }
    return func_001a3ac0(p, k, c);
}
