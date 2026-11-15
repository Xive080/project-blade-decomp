struct N { struct N *a; struct N *b; };
struct L { struct N *h; struct N *t; };
void func(struct L *l, struct N *n) {
    struct N *p;
    if (n->b) n->b->a = n->a;
    if (n->a) n->a->b = n->b;
    else l->t = n->b;
    n->b = l->h->a;
    if (n->b) n->b->a = n;
    n->a = 0;
    l->h->a = n;
}
