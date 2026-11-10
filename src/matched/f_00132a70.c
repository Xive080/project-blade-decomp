extern s32 a[], b[], c[], d[], e[], f[], h[];
extern void f1a7940(s32);
void func(s32 i) {
    if (a[i] != -1) {
        f1a7940(a[i]);
        h[i] = 1;
        b[i] = -1;
        c[i] = -1;
        d[i] = 0;
        e[i] = 0;
        f[i] = 0;
    }
}
