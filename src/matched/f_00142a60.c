unsigned char *f(unsigned char *a, unsigned char **b) {
    if (*a == 1) {
        *b = a;
        return 0;
    }
    return a;
}
