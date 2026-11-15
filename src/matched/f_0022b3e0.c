struct N { int a; struct N *next; int id; };
struct L { int a; struct N *head; };
extern struct L T[];
struct G { char pad[0x134]; void (*f)(int); };
extern char D[];
void sub(struct L *, struct N *, struct L *);
void func(int x) {
    unsigned i;
    struct L *q = T;
    for (i = 0; i < 2; i++, q++) {
        struct N *n = q->head;
        while (n) {
            if (n->id == x) {
                sub(&T[i], n, q);
                ((struct G *)D)->f(x);
                return;
            }
            n = n->next;
        }
    }
}
