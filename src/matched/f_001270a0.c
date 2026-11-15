struct N { char pad[4]; void *data; struct N *next; };
struct L { char pad[12]; struct N *head; };
s32 func(struct L *l, s32 (*cb)(void *, s32), s32 arg) {
    s32 n = 0;
    struct N *p;
    if (l == 0 || cb == 0) return 0;
    for (p = l->head; p != 0; p = p->next) {
        n++;
        if (cb(p->data, arg) == 0) return n;
    }
    return n;
}
