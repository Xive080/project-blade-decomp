extern int f1(int);
extern void f2(int);
extern int f3(char *);
extern void f4(int, int, void *, int, int, int);
extern int G;
extern int D0[];
extern char A[];
extern char B[];
extern char C[];
extern int *D4[];
int func(void) {
    int s;
    if (f1(G) < 0) return 0;
    *D4[0] = D0[0];
    D4[0][1] = 1;
    s = (D0[0] + 1) << 5;
    do { } while (f3(C) != 0);
    f4(0, 0x8018, D4[0], s, 384, 0);
    if (D4[0] != (int *)A) D4[0] = (int *)A; else D4[0] = (int *)B;
    D0[0] = 0;
    f2(G);
    return 1;
}
