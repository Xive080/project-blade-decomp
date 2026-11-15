void func(int *p) {
    int i;
    p[33] = 0;
    p[34] = 0;
    p[35] = 0;
    p[36] = 0;
    for (i = 0; i < 18; i += 2) {
        p[37] = 0;
        p[38] = 0;
        p += 2;
    }
}
