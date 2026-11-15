struct S { int k; char pad[12]; int fl; };
struct M { char pad[344]; struct S *s[2]; };
extern struct M *g;
int f(int a, int b, int c, struct S *d) {
    struct M *m;
    struct S **p;
    if (c == 0) {
        return 0;
    }
    if (c != 0) {
        m = g;
        if (m != 0 && d->k != 0x200000) {
            p = &m->s[0];
            if (*p == 0) {
                *p = d;
                d->fl |= 8;
            } else {
                p = &m->s[1];
                if (*p == 0) {
                    *p = d;
                    d->fl |= 8;
                }
            }
        }
    }
    return 0;
}
