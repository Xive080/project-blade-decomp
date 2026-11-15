struct V { char pad[4]; void (*fn)(struct O *); };
struct O { char pad[16]; struct V *vt; };
struct S { char pad[20]; int n; struct O **arr; };
void func(struct S *p) {
    int i, n = p->n;
    for (i = 0; i < n; i++) {
        struct O *o = p->arr[i];
        o->vt->fn(o);
    }
}
