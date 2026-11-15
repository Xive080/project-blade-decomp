struct G { unsigned flags; char pad[1452]; };
extern struct G g_tab[];
int f(int *a, int *b, int c) {
    if (c == 1) {
        if (a[3] == 4) {
            g_tab[*b].flags |= 4;
        }
    }
    return 0;
}
