extern int func_00109d00(int);
extern int func_00109d20(int);
extern int func_0010cfb8(void*);
extern int func_001aa810(int,int,void*,int,int,int);
extern int G_806C;
extern int D_00317580[];
extern int D_003176B0_[];
extern int *D_003176B4_[];
extern char D_003176C0[];
extern char D_0031F6C0[];
extern char D_00327708[];
extern int D_00327740_[];
extern char D_00317540[];
extern int D_003175DC_[];
#define D_003176B0 (D_003176B0_[0])
#define D_003176B4 (D_003176B4_[0])
#define D_003175DC (D_003175DC_[0])

int func(int a, float f) {
    int sp;
    int i = 8;
    int s1;
    do {
        i--;
        D_00317580[i] = 1;
    } while (i != 0);
    func_00109d20(G_806C);
    *D_003176B4 = D_003176B0;
    D_003176B4[1] = 0;
    s1 = (D_003176B0 + 1) << 5;
    do { } while (func_0010cfb8(D_00327708) != 0);
    func_001aa810(0, 0x8018, D_003176B4, s1, 384, 0);
    if ((char*)D_003176B4 != D_003176C0) D_003176B4 = (int*)D_003176C0;
    else D_003176B4 = (int*)D_0031F6C0;
    D_003176B0 = 0;
    D_00327740_[0] = a;
    {float t = 1023.0f * f; int r; asm { cvt.w.s t,t } asm { mfc1 r,t } D_00327740_[1] = r;}
    D_00327740_[2] = (int)D_00317540;
    func_001aa810(1, 0x8028, D_00327740_, 12, 4, (int)&sp);
    if (sp != 0) D_003175DC = a;
    func_00109d00(G_806C);
    return sp;
}
