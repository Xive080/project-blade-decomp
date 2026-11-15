int f(char *a, int b, int *c) {
    switch (b) {
    case 0:
        *(float *)c = *(float *)(a + 8);
        return 1;
    case 2:
        *c = 2;
        return 1;
    case 5:
        *c = 1;
        return 1;
    default:
        return 0;
    }
}
