extern int off;
int f_16b550(int a) {
    *(int *)(a + off) = 0;
    return a;
}
