struct R { char pad[0x568]; struct V *v; };
struct V { int (*fn)(struct V *, char *, char); };
extern int e1;
extern int e2;
extern char S0[], S1[], S2[], S3[], S4[], S5[], S6[], T0[], T1[];
extern int f1(char *, char *);
extern void f2(char *, char *);
extern void f3(char *, char *);
extern struct R *f4(char *);
struct R *func(char *a, char *b) {
    char buf[256];
    char s0 = 0;
    struct R *p;
    struct V *s1;
    if (f1(b, S1)) s0 |= 1;
    if (f1(b, S2)) s0 |= 6;
    if (f1(b, S3)) s0 |= 16;
    if (f1(b, S4)) s0 |= 10;
    if (f1(b, S5)) s0 |= 3;
    s1 = (struct V *)f4(a);
    if (s1 == 0) {
        s1 = (struct V *)f4(T0);
        if (s1 == 0) {
            e1 = 3;
            e2 = (int)S6;
            return 0;
        }
        f2(buf, T1);
        if (f1(a, S0)) f3(buf, a + 1);
        else f3(buf, a);
    } else {
        f2(buf, a);
    }
    p = (struct R *)s1->fn(s1, buf, s0);
    if (p) p->v = s1;
    return p;
}
