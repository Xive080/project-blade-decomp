struct O;
struct V { char pad[12]; void (*fn)(struct O *, struct O *, float *); };
struct O { char pad[16]; struct V *vt; };
extern int func_00239570(struct O *, struct O *);
void func(struct O *a, struct O *b, float t) {
    if (func_00239570(a, b)) {
        a->vt->fn(a, b, &t);
    }
}
