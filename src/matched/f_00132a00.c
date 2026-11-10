extern int g[];
extern void sub(int);
void func(void) {
    int v;
    if (g[-3] != -1) {
        sub(g[-3]);
        v = 1;
        g[15] = v;
        v = -1;
        g[0] = v; g[3] = v;
        g[18] = 0; g[12] = 0; g[9] = 0;
    }
}
