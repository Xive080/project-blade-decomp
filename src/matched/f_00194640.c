extern int g_flag;
int f(char *a, int *b) {
    int r;
    if (g_flag == 0 || *(int *)(a + 484) == 0) r = 0; else r = (*(int *)((char *)b + 1400) >= *(int *)((char *)b + 1396));
    return r;
}
