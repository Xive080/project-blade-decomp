struct B { char pad[16]; int flags; char pad2[112]; int id; };
struct N { struct N *prev; struct B *b; struct N *next; };
struct A { char pad[24]; struct N *head; };
struct T { char pad[32]; int s[8]; };
struct A *f(struct A *a, int x, int y, struct T *t) {
    struct N *n;
    struct B *b;
    int i;
    int *p;
    for (n = a->head; n != 0; n = n->next) {
        b = n->b;
        if ((b->flags & 1) == 0) {
            for (i = 0, p = (int *)t; i < 8; i++, p++) {
                if (p[8] == b->id) break;
                if (p[8] == 0) { t->s[i] = b->id; break; }
            }
        }
    }
    return a;
}
