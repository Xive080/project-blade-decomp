struct N { struct N *next; int z; int key; };
struct L { char pad[288]; struct N *head; struct N *tail; int count; };
int f(struct L *l, int key) {
    struct N *n;
    struct N *prev = 0;
    for (n = l->head; n != 0; n = n->next) {
        if (n->key == key) {
            if (l->tail == n) l->tail = prev;
            if (prev != 0) prev->next = n->next;
            else l->head = n->next;
            n->z = 0;
            l->count--;
            return 1;
        }
        prev = n;
    }
    return 0;
}
