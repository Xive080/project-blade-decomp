int f(int *p, int a, float *q) {
    switch (a) {
    case 0:
        *(float *)(p + 2) = *q;
        return 1;
    default:
        return 0;
    }
}
