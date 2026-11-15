extern char D_0024AD00[];
extern char D_0024AD20[];
extern char D_0024ADB0[];
extern char D_0024AE80[];
extern char D_0024AED0[];
extern char D_0024AF20[];
extern char D_0024AF40[];
extern char D_0024AF50[];
extern s32 G_8298;
s32 func_001c2a00(s32, s32, char *, char *);
s32 func_00202590(s32, s32, char *, char *, char *);
s32 func_002025f0(s32, char *, char *, char *);

s32 func(void) {
    if (func_001c2a00(0, 0x157, D_0024AF50, D_0024AF40) < 0) {
        return 0;
    }
    G_8298 = func_00202590(4, 0x157, D_0024AF20, D_0024AED0, D_0024AE80);
    if (G_8298 < 0) {
        return 0;
    }
    return func_002025f0(0x157, D_0024ADB0, D_0024AD20, D_0024AD00) >= 0;
}
