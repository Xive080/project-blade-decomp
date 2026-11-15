extern float func_00182e50(int a, int b);
struct V { float x, y, z, w; };
struct O { int t; float f4, f8, fc, f10, f14, f18; struct V v; int i2c, i30; float f34; };
void f(struct O *o, int a, int b, struct V *q, float s, float c, float d, float e, float g) {
    o->t = 2;
    o->f4 = e;
    o->f8 = g;
    o->fc = c;
    o->f10 = d;
    o->i2c = a;
    o->i30 = b;
    o->f34 = func_00182e50(a, b);
    o->f14 = s * o->f34;
    o->f18 = s;
    o->v = *q;
}
