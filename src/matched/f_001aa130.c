extern struct { int v; char p[12]; } A_;
extern struct { int *v; char p[12]; } B_;
#define D_3176B0 (A_.v)
#define D_3176B4 (B_.v)
extern char D_3176C0[];
extern char D_31F6C0[];
extern struct { int v; char p[12]; } C_;
#define D_327700 (C_.v)
extern char D_327708[];
extern int G_806C;
extern void f_109cf0(int);
extern void f_109d20(int);
extern int f_10cfb8(char *);
extern void f_1aa810(int, int, int *, int, int, int);

int func(void) {
    int s;
    if (D_327700 == 0) return 0;
    f_109d20(G_806C);
    D_3176B4[0] = D_3176B0;
    D_3176B4[1] = 0;
    s = (D_3176B0 + 1) << 5;
    do {
    } while (f_10cfb8(D_327708) != 0);
    f_1aa810(0, 0x8018, D_3176B4, s, 384, 0);
    if (D_3176B4 != (int *)D_3176C0) {
        D_3176B4 = (int *)D_3176C0;
    } else {
        D_3176B4 = (int *)D_31F6C0;
    }
    D_3176B0 = 0;
    f_1aa810(1, 0x8001, 0, 0, 0, 0);
    D_327700 = 0;
    f_109cf0(G_806C);
    return 1;
}
