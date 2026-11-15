void f(int *p) {
    int i;
    for (i = 0; i < 16; i += 2) {
        p[0] = 0;
        p[1] = 0;
        p += 2;
    }
}
