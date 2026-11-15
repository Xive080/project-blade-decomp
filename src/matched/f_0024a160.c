extern int g;
int func(int a, int *c) {
    if (*(int *)(a + g) != 0) {
        (*c)++;
    }
    return a;
}
