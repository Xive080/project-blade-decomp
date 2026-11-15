extern int G;
extern char D[];
extern void f1214b8(void *, void *, int);
extern void f1217e0(int, void *);
int f(int a, int b, int c) {
    int sp[8];
    G = G + 1;
    if (b < G) G = 1;
    if (G == 1 && c != 0) return 0;
    f1214b8(sp, D, G);
    f1217e0(a, sp);
    return 1;
}
