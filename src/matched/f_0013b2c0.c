struct E { struct E *next; int used; int v; };
struct O { char pad[48]; struct E e[20]; struct E *head; struct E *tail; int cnt; };
int f(struct O *o, int a1) {
    int i;
    struct E *e;
    e = o->e;
    for (i = 0; i < (*(int *)0x303e60); i++) {
        if (e->used == 0) {
            if (o->head == 0) {
                o->head = e;
                o->tail = e;
            } else {
                o->tail->next = e;
                o->tail = e;
            }
            e->used = 1;
            e->next = 0;
            e->v = a1;
            o->cnt++;
            return 1;
        }
        e++;
    }
    return 0;
}
