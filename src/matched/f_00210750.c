struct S { int p0; int p4; int p8; int p12; int p16; int *d; };
struct S *f(struct S *a, int b) {
    struct S *r = 0;
    if (a != 0 && b != 0 && a->p12 != 0) {
        if (a->d != 0) a->d[1] = b;
        r = a;
    }
    return r;
}
