struct V { int pad[3]; int (*fn)(struct V *, struct O *, int, int, int, int); };
struct O { char pad[0x568]; struct V *v; };
extern int e1;
extern int e2;
extern char D[];
int func(int a, int b, int c, struct O *o) {
    int r = 0;
    if (o != 0) {
        struct V *v = o->v;
        if (v != 0) r = v->fn(v, o, a, b, c, 1);
        else goto x;
    } else {
x:
    e1 = 3;
    e2 = (int)D;
    }
    return r;
}
