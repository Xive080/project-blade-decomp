extern void f192110(char *o, char *p, char *a, char *b, char *c);
extern int f114fb8(int a, int b, char *c, int d, int e, char *f);
extern int G84B8;
extern int G84C4;
extern int G8064[2];
extern char D312880[];
int *f(char *o, char *p) {
    int h = *(int *)(o + 160);
    char a[320];
    char b[256];
    char c[32];
    if (G84B8 == 0 || *(int *)(o + 484) == 0) return 0;
    f192110(o, p, a, b, c);
    if (f114fb8(h, 0, a, 0, 1, D312880) == 0) {
        G84C4 = 1;
        return G8064;
    }
    return 0;
}
