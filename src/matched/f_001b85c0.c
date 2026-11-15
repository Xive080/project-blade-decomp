extern int g[];
int f(void) {
    if (g[0] == 5) return 1;
    g[0] = 4;
    return 0;
}
