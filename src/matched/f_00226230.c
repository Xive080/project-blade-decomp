struct O;
struct V { int x; void (*fn)(struct O *, int, int); };
struct O { struct V *vt; char pad[8]; int k; };
extern int g(void);
extern int h(void);
int f(struct O *o) {
    switch (o->k) {
    case 8:
        if (g() == 0) o->vt->fn(o, 3, 0);
        break;
    default:
        return h();
    }
    return 1;
}
