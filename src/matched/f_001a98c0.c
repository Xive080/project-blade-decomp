extern int func_00109d00(int);
extern int func_00109d20(int);
extern int func_001214b8(void*, void*, void*);
extern int func_00121a58(void*, void*);
extern int func_00121ca8(void*);
extern int func_00121f90(void*, int, int);
extern int func_001aa810(int,int,void*,int,int,int);
extern int G_806C;
extern struct G { int v[4]; int p; } D_00327740;
extern char D_002F0120[];

int func(int *p, int u, int a2, int a3) {
    char buf[128];
    func_00121f90(p, u, 16);
    ((char*)p)[15] = 0;
    func_00121ca8(p);
    func_00109d20(G_806C);
    func_00121a58(&D_00327740, p);
    D_00327740.p = (int)p;
    func_001aa810(1, 0x8003, &D_00327740, 20, 4, (int)&p[7]);
    if (p[7] == 0) {
        func_001214b8(buf, D_002F0120, p);
        p[4] = 0;
        func_00109d00(G_806C);
        return 0;
    }
    p[4] = 1;
    p[8] = 0x3f800000;
    p[5] = a3;
    p[6] = 1;
    if (a2 != 0) p[5] |= 4;
    p[15] = 0x40c00000;
    p[16] = 0x42200000;
    p[17] = 0x3f800000;
    p[18] = 0;
    p[20] = 0x3fff;
    p[21] = 0;
    p[22] = 0;
    D_00327740.v[0] = p[7];
    func_001aa810(1, 0x800a, &D_00327740, 4, 4, (int)&p[23]);
    p[24] = p[23];
    p[25] = 0x3f800000;
    p[28] = 0;
    p[9] = 0;
    p[10] = 0;
    p[11] = 0;
    p[12] = 0;
    p[13] = 0;
    p[14] = 0;
    func_00109d00(G_806C);
    return 1;
}
