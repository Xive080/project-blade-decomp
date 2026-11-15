extern int G806C;
extern struct S { int n; int *p; int pad[16]; } g;
extern char A[];
extern char B[];
extern char L[];
extern int Z[];
extern void f109d00(int);
extern void f109d20(int);
extern int f10cfb8(void *);
extern void f1aa810(int, int, void *, int, int, int);
void f(void) {
    int n;
    f109d20(G806C);
    g.p[0] = g.n;
    g.p[1] = 0;
    n = (g.n + 1) << 5;
    do { } while (f10cfb8(L) != 0);
    f1aa810(0, 0x8018, g.p, n, 384, 0);
    if (g.p != (int *)A) {
        g.p = (int *)A;
    } else {
        g.p = (int *)B;
    }
    g.n = 0;
    f1aa810(1, 0x8029, 0, 0, 0, 0);
    Z[0] = 0;
    f109d00(G806C);
}
