extern int D_003174E0[];
extern int D_003176B0[];
extern int *D_003176B4[];
extern char D_003176C0[];
extern char D_0031F6C0[];
extern char D_00327708[];
extern int G_806C;
extern int G_8528;
void func_00109d00(int);
void func_00109d20(int);
int func_0010cfb8(char *);
void func_00121a58(int *, int);
int func_001a9ed0(int, int);
void func_001aa810(int, int, int *, int, int, void *);

static inline int chk(int a) {
    if (D_003174E0[a] == 1) return 1;
    if (a == 0) {
        if (G_8528 == 0) {
            if (func_001a9ed0(0, -1) != 0) return 1;
        }
    }
    return 0;
}

int func(int arg0, int arg1) {
    int sp4C;
    int ok;
    int sz;
    sp4C = 0;
    ok = chk(arg0);
    if (ok == 0) {
        return 0;
    }
    func_00109d20(G_806C);
    D_003176B4[0][0] = D_003176B0[0];
    D_003176B4[0][1] = 0;
    sz = (D_003176B0[0] + 1) << 5;
    while (func_0010cfb8(D_00327708) != 0) {
    }
    func_001aa810(0, 0x8018, D_003176B4[0], sz, 384, 0);
    if ((char *)D_003176B4[0] != D_003176C0) {
        D_003176B4[0] = (int *)D_003176C0;
    } else {
        D_003176B4[0] = (int *)D_0031F6C0;
    }
    D_003176B0[0] = 0;
    func_00121a58(D_003176B4[0], arg1);
    D_003176B4[0][31] = arg0;
    func_001aa810(1, 0x8008, D_003176B4[0], 128, 4, &sp4C);
    func_00109d00(G_806C);
    return sp4C;
}
