extern s32 G;
extern struct L { struct L *next; struct L *prev; } H;
struct O { char pad[12]; struct V *v; };
struct V { char pad[4]; void (*fn)(void *); };
static inline int eq(int a, int b) { return a == b ? 1 : 0; }
void func(void) {
    struct L *p;
    struct L *e;
    struct L *a;
    struct L *b;
    if (eq(G, 1)) {
        p = H.next;
        e = &H;
        if (p != e) {
            do {
                ((struct O *)p)->v->fn((char *)p - 4);
                p = p->next;
            } while (p != e);
        }
        a = H.next;
        b = &H;
        if (a != b) {
            do {
                a->prev->next = a->next;
                a->next->prev = a->prev;
                a = a->next;
            } while (a != b);
        }
    }
}
