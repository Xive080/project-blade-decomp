extern int func_00109d00(int);
extern int func_00109d20(int);
extern int func_0010cfb8(void*);
extern int func_001aa810(int,int,void*,int,int,int);
extern int G_806C;
extern struct S { int n; int *p; int pad[16]; } D_003176B0;
extern int D_0031F6C0[];
extern char D_00327708[];
extern int D_00327740[];

int func(int *p) {
    int n;
    if (p[4] != 1) return 0;
    func_00109d20(G_806C);
    D_003176B0.p[0] = D_003176B0.n;
    D_003176B0.p[1] = 0;
    n = (D_003176B0.n + 1) << 5;
    while (func_0010cfb8(D_00327708) != 0) {}
    func_001aa810(0, 0x8018, D_003176B0.p, n, 384, 0);
    if (D_003176B0.p != D_003176B0.pad) D_003176B0.p = D_003176B0.pad;
    else D_003176B0.p = D_0031F6C0;
    D_003176B0.n = 0;
    D_00327740[0] = p[7];
    func_001aa810(1, 0x8004, D_00327740, 4, 0, 0);
    p[7] = 0;
    p[4] = 0;
    func_00109d00(G_806C);
    return 1;
}
