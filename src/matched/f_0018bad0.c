struct N { struct N *prev; struct N *next; };
struct L { struct N **head; struct N *tail; };
struct N *f(struct L *l) {
    struct N *n = *l->head;
    if (n == 0) return 0;
    *l->head = n->next;
    if (*l->head) (*l->head)->prev = 0;
    n->next = l->tail;
    if (l->tail) l->tail->prev = n;
    l->tail = n;
    return n;
}
