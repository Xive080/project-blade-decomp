struct N { struct N *prev; struct N *next; };
struct P { struct N *head; struct N n; };
struct P *f(struct P *p, unsigned n, int size) {
    struct N *e;
    unsigned i;
    if (n == 0) return 0;
    e = &p->n;
    p->head = e;
    p->n.prev = 0;
    for (i = 1; i < n; i++) {
        e->next = (struct N *)((char *)(e + 1) + size);
        e->next->prev = e;
        e = e->next;
    }
    e->next = 0;
    return p;
}
