void f(unsigned *a, unsigned n) {
    unsigned i;
    unsigned x;
    n = (n >> 2) - 1;
    x = 0;
    for (i = 0; i < n; i++) x ^= a[i];
    a[n] = x;
}
