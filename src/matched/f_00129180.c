struct K { int a[5]; unsigned end; };
struct N { struct N *prev; struct K *key; struct N *next; };
struct P { struct N *cur; };
struct S { char pad[28]; struct N *head0; char pad2[4]; struct N *head; };
struct S *f(struct S *s, int a1, int a2, struct P *p) {
    struct N *i;
    struct N *n;
    struct N *h;
    h = s->head;
    n = p->cur;
    for (i = h; i != 0; i = i->next) {
        if (n->key == i->key) return s;
    }
    n->next = h;
    n->prev = (struct N *)((char *)s + 28);
    if (h != 0) h->prev = n;
    s->head = n;
    if (n->key->end <= (unsigned)(n + 1)) return 0;
    p->cur = p->cur + 1;
    return s;
}
