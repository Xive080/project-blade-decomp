extern int off;
int f(int a) {
    int v = *(int *)(a + off);
    if (v) return v;
    return 0;
}
