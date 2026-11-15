extern void func_00109d00(s32);
extern void func_00109d20(s32);
extern void func_0011eac8(void *, void *, s32, s32, s32);
extern void func_0011fe10(void *, void *);
extern void func_001214b8(void *, char *, s32, s32, s32, s32, s32, s32);
extern void func_001aa740(s32);
extern s32 G_806C;
extern s32 G_852C;
extern s32 D_003175E0[];
extern s32 D_003176B0[];
extern s32 *D_003176B4[];
struct Q { s32 a, b; };
extern s32 D_00327740[];
extern char D_002F00B0[];
extern char D_002F0110[];
void func(s32 a) {
    char buf[128];
    s32 t;
    D_003175E0[0] = a;
    func_00109d20(G_806C);
    D_00327740[0] = a;
    t = (D_003176B0[0] + 1) * 8;
    if (G_852C != 0) {
        func_001214b8(buf, D_002F00B0, 0x8035, ((struct Q *)D_00327740)->a, ((struct Q *)D_00327740)->b, D_003176B0[0], t, 4);
        func_0011fe10(D_002F0110, buf);
    }
    D_003176B4[0][t] = 0x8035;
    func_0011eac8(&D_003176B4[0][t + 1], D_00327740, 4, t * 4, 0x8035);
    D_003176B0[0] += 1;
    if (D_003176B0[0] >= 0x3FF) {
        func_001aa740(0);
    }
    func_00109d00(G_806C);
}
