struct N { int x; void *d; struct N *next; };
struct A { char pad[36]; struct N *head; };
int f(struct A *a, int (*cb)(void *, void *), void *arg) {
    int n = 0;
    struct N *p;
    if (a == 0 || cb == 0) return 0;
    p = a->head;
    if (p) {
        do {
            n++;
            if (!cb(p->d, arg)) return n;
            p = p->next;
        } while (p);
    }
    return n;
}
