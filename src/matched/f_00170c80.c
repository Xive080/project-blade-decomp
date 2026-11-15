extern int g_n;
extern int g_tab[];
int f(int a) {
    int r;
    if (a != 0 && (unsigned)g_n < 407) {
        g_tab[g_n] = a;
        r = 1;
        g_n++;
    } else r = 0;
    return r;
}
