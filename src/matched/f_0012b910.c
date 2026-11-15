struct N { struct N *prev; s32 x; struct N *next; };
struct S { char pad[0x24]; struct N *b; struct N *e; s32 r; };
void func(struct S *s) {
    struct N *n;
    for (n = s->b; n < s->e; n++) {
        if (n->prev) n->prev->next = n->next;
        if (n->next) n->next->prev = n->prev;
        n->prev = 0;
        n->next = 0;
    }
    s->r = -1;
}
