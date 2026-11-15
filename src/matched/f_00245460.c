struct V { float x, y, z; };
struct O { int a; int flags; int w8; char pad[44]; float f56; };
struct C { char pad[16]; void (*fn)(struct C *, int, int); };
extern struct C *g_c;
extern int g_h;
extern void func_00133120(int);
extern int func_0013b550(int, int);
extern void func_002429e0(struct O *, struct V *);
extern void func_00242a10(struct O *);
void f(struct O *o) {
    struct V v;
    int r;
    if (o->flags & 2) {
        v.x = v.y = v.z = 0.0f;
    } else {
        v.x = v.y = v.z = 255.0f;
    }
    func_002429e0(o, &v);
    func_00242a10(o);
    o->w8 = 0;
    r = func_0013b550(g_h, 518);
    if (g_c != 0) {
        g_c->fn(g_c, 8, r);
    }
    o->f56 = 5.0f;
    func_00133120(2);
}
