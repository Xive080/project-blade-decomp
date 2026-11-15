struct E { char pad[56]; int v; char pad2[4]; };
struct S { char pad[44]; int count; char pad2[28]; struct E *base; int max; };
struct S *f(struct S *a, int i, int v) {
    if (a->count > 2) {
        if (i < a->max) {
            a->base[i].v = v;
            return a;
        }
    }
    return 0;
}
