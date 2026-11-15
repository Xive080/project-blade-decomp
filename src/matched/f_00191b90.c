struct N { struct N *n; struct N *p; };
struct G { char pad[304]; void *(*alloc)(int); };
extern char D[];
struct N *func(int sz, unsigned cnt) {
    struct N *h;
    struct N *c;
    unsigned i;
    h = (struct N *)((struct G *)D)->alloc((sz + 8) * cnt + 8);
    if (h == 0) return 0;
    h->n = h;
    c = h + 1;
    h->p = h;
    for (i = 0; i < cnt; i++) {
        c->p = h->p;
        c->n = h;
        h->p->n = c;
        h->p = c;
        c = (struct N *)((char *)(c + 1) + sz);
    }
    return h;
}
