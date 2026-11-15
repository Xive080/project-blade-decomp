extern char D_32A620[];
struct V { char pad[304]; char *(*alloc)(int); };
struct N { struct N *next; struct N *prev; };
char *f(unsigned n, int sz) {
    char *r;
    unsigned i;
    struct N *p;
    int sz0;
    if (n == 0) return 0;
    sz0 = n == 0 ? 0 : n * (sz + 8) + 4;
    r = ((struct V *)D_32A620)->alloc(sz0);
    if (n == 0) return 0;
    p = (struct N *)(r + 4);
    *(struct N **)r = p;
    *(int *)(r + 4) = 0;
    for (i = 1; i < n; i++) {
        p->prev = (struct N *)((char *)(p + 1) + sz);
        p->prev->next = p;
        p = p->prev;
    }
    p->prev = 0;
    return r;
}
