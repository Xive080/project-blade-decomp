extern void func_0018bb30(void *, void *);
extern void *func_0018bb40(int, int);
extern char base[];
extern void *g_tbl;
void f(void) {
    int i;
    char *p;
    char *q;
    p = base + 3536;
    for (i = 0; i < 80; i++) {
        *(float *)(p + 32) = (float)(i & 1);
        p += 36;
    }
    g_tbl = func_0018bb40(20, 4);
    q = base + 6416;
    for (i = 0; i < 2; i++) {
        func_0018bb30(q, g_tbl);
        q += 8;
    }
}
