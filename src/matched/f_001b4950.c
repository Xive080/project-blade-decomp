int f(unsigned *p, unsigned n) {
    unsigned i;
    unsigned x;
    n = (n >> 2) - 1;
    x = 0;
    for (i = 0; i < n; i++) x ^= p[i];
    {
        unsigned c = p[n];
        return c == x;
    }
}
