struct O { char pad[160]; int a; char p2[320]; int b; };
extern int G;
extern void f0(struct O *, int, char *, char *, char *);
extern int f1(int, int, char *);
extern int f2(int, int *, int *);
int f_001935c0(struct O *o, int x) {
    int v0, v1;
    char b0[320]; char b1[256]; char b2[40];
    int s;
    v0 = -1;
    v1 = -1;
    if (G) {
        if (o->b) goto go;
    }
    return 0;
go:
    s = o->a;
    f0(o, x, b0, b1, b2);
    if (f1(s, 0, b1) == 0) {
        if (f2(0, &v0, &v1) > 0 && v0 == 15 && v1 == 0) return 1;
    }
    return 0;
}
