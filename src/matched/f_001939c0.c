extern int G;
void f1(char *, int, int *, int *, int *);
int f2(int, int, int *);
int f3(int, int *, int *);
int f(char *a, int x) {
    int d[80];
    int b[64];
    int c[10];
    int s288;
    int s28C;
    int t;
    s288 = -1;
    s28C = -1;
    if (G == 0 || *(int *)(a + 0x1e4) == 0) return 0;
    t = *(int *)(a + 0xa0);
    f1(a, x, d, b, c);
    if (f2(t, 0, d) == 0) {
        if (f3(0, &s288, &s28C) > 0 && s288 == 15 && s28C == 0) return 1;
    }
    return 0;
}
