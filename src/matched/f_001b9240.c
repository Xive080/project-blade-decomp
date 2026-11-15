struct E { char pad[12]; int id; };
struct L { char pad0[4]; int busy; char pad1[24]; unsigned int n; };
int f(struct L *l, int *k) {
    unsigned int i;
    struct E *e = (struct E *)l;
    if (l != 0 && l->busy == 0) {
        for (i = 0; i < l->n; e = (struct E *)((char *)e + 4), i++) {
            if (k[1] == e->id) return 1;
        }
    }
    return 0;
}
