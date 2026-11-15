struct V { float v[10]; };
struct T { int a; int pad; struct V v; float g; };
extern struct V D_002E0700;
extern int *G_89F0;
extern void func_00189320(struct T *, int, int, int, int, int);
void func(int a, int b) {
    struct T t;
    float s;
    float x, y, z, o;
    int g;
    if (b != 0) s = 3.0f; else s = 4.5f;
    z = 0.0f;
    o = 1.0f;
    x = z * s;
    t.v = D_002E0700;
    t.g = 1.0f;
    y = o * s;
    t.a = 0;
    t.v.v[2] = y;
    t.v.v[3] = x;
    t.v.v[4] = x;
    t.v.v[5] = y;
    t.g = 0.6f;
    g = *G_89F0;
    func_00189320(&t, g, a, a, 0, g);
}
