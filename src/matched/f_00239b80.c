void f(int *p) {
    unsigned i;
    p[0] = 0;
    for (i = 0; i < 16; ) {
        p[1] = 0;
        i++;
        p[17] = 0;
        p++;
    }
}
