extern unsigned char *volatile G;
void f11eac8(unsigned char *, int *, int);
void f(int *a) {
    if (*a == 251) {
        G = G - 1;
        *G = 251;
        G = G + 1;
        f11eac8(G, a + 1, 12);
        G = G + 12;
        *G = 255;
        G = G + 1;
    }
}
