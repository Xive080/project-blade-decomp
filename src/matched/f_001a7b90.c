extern int func_00109d00(int);
extern int func_00109d20(int);
extern int func_0010cfb8(void*);
extern int func_00121a58(void*, int);
extern int func_001aa810(int,int,void*,int,int,int);
extern int G_806C;
extern int D_00317580[];
extern int D_003176B0_[];
extern int *D_003176B4_[];
extern char D_003176C0[];
extern char D_0031F6C0[];
extern char D_00327708[];
extern int D_003175DC_[];
#define D_003176B0 (D_003176B0_[0])
#define D_003176B4 (D_003176B4_[0])
#define D_003175DC (D_003175DC_[0])

int func(int a, int b, int c, int d) {
    int s = -1;
    int i;
    int *p = D_00317580;
    int s5;
    for (i = 0; i < D_003175DC; i++) {
        if (*p == 1) { s = i; break; }
        p++;
    }
    if (s != -1) {
        func_00109d20(G_806C);
        *D_003176B4 = D_003176B0;
        D_003176B4[1] = 0;
        s5 = (D_003176B0 + 1) << 5;
        do { } while (func_0010cfb8(D_00327708) != 0);
        func_001aa810(0, 0x8018, D_003176B4, s5, 384, 0);
        if ((char*)D_003176B4 != D_003176C0) D_003176B4 = (int*)D_003176C0;
        else D_003176B4 = (int*)D_0031F6C0;
        D_003176B0 = 0;
        D_003176B4[0] = s;
        D_003176B4[1] = b;
        D_003176B4[2] = c;
        D_003176B4[3] = d;
        func_00121a58(D_003176B4 + 4, a);
        func_001aa810(1, 0x802b, D_003176B4, 128, 0, 0);
        D_00317580[s] = 3;
        func_00109d00(G_806C);
    }
    return s;
}
