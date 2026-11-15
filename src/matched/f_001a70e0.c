void f(int *a, int b) {
    int i;
    int idx = -1;
    int *p;
    for (i = 0, p = a; i < 16; i++, p++) {
        if (*p == b) return;
        if (*p == 0) idx = i;
    }
    a[idx] = b;
}
