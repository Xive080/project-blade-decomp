struct S { int a, b, c, d; int k; int e; int m; };
int f(struct S *s) {
    if (s->k == 1) return s->m == 2;
    return 0;
}
