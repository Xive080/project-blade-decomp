struct L { struct L *next; struct L *prev; };
struct N { int pad; struct L l; };
extern struct L H;
void f(struct N *n) {
    n->l.next = H.next;
    n->l.prev = &H;
    H.next->prev = &n->l;
    H.next = &n->l;
}
