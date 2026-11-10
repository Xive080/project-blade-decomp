struct N { struct N *prev; struct N *next; struct N *par; int size; u32 flags; };
void func(struct N *p, int off) {
    struct N *n = p->next;
    struct N *a = (struct N*)((char*)p + off + 32);
    if (n != 0 && (~n->flags & 1) != 0) {
        a->next = n->next;
        a->size = p->next->size + (p->size - off);
    } else {
        a->next = n;
        a->size = p->size - off - 32;
    }
    p->next = a;
    a->flags = 0;
    a->par = p;
    if (a->next != 0) a->next->par = a;
    p->size = off;
    a->prev = p->prev;
}
