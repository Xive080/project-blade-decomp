struct V { int pad[2]; int (*fn)(struct V *, struct O *, int, int, int, int); };
struct O { char pad[0x568]; struct V *v; };
extern int e1;
extern int e2;
extern char D[];
int func(int a, int b, int c, struct O *o) {
    if (o != 0) {
        struct V *v = o->v;
        if (v != 0) return v->fn(v, o, a, b, c, 1);
    }
    e1 = 3;
    e2 = (int)D;
    return 0;
}
