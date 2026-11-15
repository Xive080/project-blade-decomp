extern int G;
extern char D[];
char *f1(char *, char *);
void f2(char *, char *);
void f3(char *, char *, char *, char *, char *);
int func(char *a, char *x) {
    char b0[256];
    char b1[256];
    char b2[32];
    char b3[256];
    char *t;
    if (G == 0 || *(int *)(a + 0x1e4) == 0) return 0;
    t = f1(x, D);
    if (t != 0) {
        f2(b3, t + 1);
    } else {
        f2(b3, x);
    }
    f3(a, b3, b0, b1, b2);
    if (b1[0] == 92) {
        f2(a + 228, b1);
        return 1;
    }
    return 0;
}
