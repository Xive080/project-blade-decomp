extern int off;
int f_1b8f40(int a) {
    *(int *)(a + off) = 0;
    return a;
}
