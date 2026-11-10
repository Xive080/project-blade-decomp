extern char *base;
int func(int a) {
    int r;
    r = 4;
    if (*(int *)(a + (int)base) != 0) {
        r += 32;
    }
    return r;
}
