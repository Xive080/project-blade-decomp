extern int G806C;
extern int G852C;
extern int D7740[];
extern char Dc[];
extern int D76B0[];
extern int *D76B4[];
extern int D7580[];
extern char A0B0[];
extern char A110[];
extern void f109d00(int);
extern void f109d20(int);
extern void f1214b8(void *, char *, int, int, int, int, int, int);
extern void f11fe10(void *, void *);
extern void f11eac8(void *, void *, int);
extern void f1aa740(int);
void func(int a) {
    char buf[128];
    int n;
    int s;
    int c;
    f109d20(G806C);
    D7740[0] = a;
    n = D76B0[0];
    s = (n + 1) << 3;
    if (G852C != 0) {
        f1214b8(buf, A0B0, 0x802e, *(int *)Dc, ((int *)Dc)[1], n, s, 4);
        f11fe10(A110, buf);
    }
    D76B4[0][s] = 0x802e;
    f11eac8(&D76B4[0][s + 1], Dc, 4);
    D76B0[0] = D76B0[0] + 1;
    c = D76B0[0] < 1023;
    if (c == 0) f1aa740(0);
    D7580[a] = 3;
    f109d00(G806C);
}
