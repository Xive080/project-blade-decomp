struct N { struct N *next; struct N *prev; };
struct B { char pad[16]; struct N l1; char pad2[16]; struct N l2; };
struct A { s32 flags; s16 pad; s16 cnt; char pad2[24]; s32 h; };
struct G { char pad[308]; void (*fn)(void *); };
extern void sub(s32);
extern char base[];
s32 func(struct A *a, struct B *b) {
    if (a == 0 || b == 0) return 0;
    {
        if (!(a->flags & 8)) {
            if (a->flags & 1) {
                b->l1.prev->next = b->l1.next;
                b->l1.next->prev = b->l1.prev;
            } else {
                b->l2.prev->next = b->l2.next;
                b->l2.next->prev = b->l2.prev;
            }
            if (a->h != 0) sub(a->h);
            else ((struct G *)base)->fn(b);
        }
        a->cnt = a->cnt - 1;
        return 1;
    }
}
