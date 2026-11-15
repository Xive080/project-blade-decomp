struct N { struct N *prev; struct N *next; };
struct L { struct N *head; };
struct N *f(struct L *l, struct N *n)
{
    struct N *h = l->head->prev;
    if (h == 0) {
        return 0;
    }
    l->head->prev = h->next;
    if (l->head->prev != 0) {
        l->head->prev->prev = 0;
    }
    h->prev = n;
    h->next = n->next;
    n->next = h;
    if (h->next != 0) {
        h->next->prev = h;
    }
    return h;
}
