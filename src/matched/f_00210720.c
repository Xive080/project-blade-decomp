typedef struct A { char p[12]; int m; int n; int *r; } A;
A *f(A *a, int v) {
    A *res = 0;
    if (a && a->m) {
        if (a->r) *a->r = v;
        res = a;
    }
    return res;
}
