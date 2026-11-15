extern char D1[];
extern char D2[];
extern int f1(char *, char *, int);
extern int f2(int, int, int *, int, int);
extern int f3(int, int *, int *);
static inline int parse(char *a, int *p0, int *p1) {
    char t, u;
    if (f1(a, D1, 2) != 0) return 0;
    t = a[2];
    if (t == 48 || t == 49) {
        *p0 = t - 48;
    } else return 0;
    u = a[3];
    if (u >= 48 && u < 52) {
        *p1 = u - 48;
        return 1;
    }
    return 0;
}
char *f(char *a) {
    int z, b, c;
    int s0, s1;
    s1 = -1;
    z = 0;
    b = -1;
    c = -1;
    s0 = -1;
    if (parse(a, &s0, &s1)) {
        if (f2(s0, s1, &z, 0, 0) == 0 && f3(0, &b, &c) > 0 && b == 1)
            return D2 + (s0 + s1) * 1520;
    }
    return 0;
}
