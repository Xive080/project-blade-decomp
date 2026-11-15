struct N { struct N *prev; int pad; struct N *next; };
struct L { char pad[36]; struct N *b; struct N *e; int r; };
void f(struct L *l) {
    struct N *n;
    for (n = l->b; n < l->e; n++) {
        if (n->prev) n->prev->next = n->next;
        if (n->next) n->next->prev = n->prev;
        n->prev = 0;
        n->next = 0;
    }
    l->r = -1;
}
