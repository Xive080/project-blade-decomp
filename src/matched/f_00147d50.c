struct E16 { int w[4]; };
struct E40 { int w[10]; };
struct A { unsigned int fl; short pad; short n; char pad2[20]; char *p; };
void *f(struct A *a) {
    void *r;
    if (a == 0) return 0;
    if (a->fl & 8) {
        int n = a->n;
        if (n > 0) {
            if (a->fl & 1) r = (struct E16 *)((char *)a + 24) + n - 1;
            else r = (struct E40 *)((char *)a + 24) + n - 1;
        } else r = 0;
    } else if (a->fl & 1) {
        r = (struct E16 *)a->p - 1;
        if (r == (struct E16 *)((char *)a + 24) - 1) r = 0;
    } else {
        r = (struct E40 *)a->p - 1;
        if (r == (struct E40 *)((char *)a + 24) - 1) r = 0;
    }
    return r;
}
