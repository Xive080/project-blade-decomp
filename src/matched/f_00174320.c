typedef unsigned __int128 Q;
struct B { Q q[2]; };
extern char D1[];
extern char D2[];
void f(void) {
    int i;
    struct B *pd;
    struct B *ps;
    int j = 0;
    char *s = D1;
    char *d = D2;
    for (; j < 2; j++) {
        ps = (struct B *)(s + 640);
        pd = (struct B *)d;
        for (i = 14; i > 0; i--) {
            *pd = *ps;
            ps++;
            pd++;
        }
        s += 448;
        d += 448;
    }
}
