struct N { struct N *p; struct N *n; struct N *q; };
struct S { char pad[0xc]; struct N *head; };
struct S *f(struct S *a, int b, int c, struct N **pp) {
    struct N *h = a->head;
    struct N *n = *pp;
    n->q = h;
    n->p = (struct N *)((char *)a + 4);
    if (h) h->p = n;
    a->head = n;
    *pp = (struct N *)((char *)*pp + 12);
    return a;
}
