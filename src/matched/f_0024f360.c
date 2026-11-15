extern float func_00182cf0(int a, int b, int c);
struct V { float x, y, z, w; };
struct O { int t; float f4, f8, fc, f10, f14, f18; struct V v; int i2c; float f30; int i34, i38; float f3c; };
void f(struct O *o, int a, int b, int c, struct V *q, float s, float k, float d, float e, float g, float h) {
    o->t = 3;
    o->f4 = g;
    o->f8 = h;
    o->fc = d;
    o->f10 = e;
    o->i2c = a;
    o->f30 = k;
    o->i34 = b;
    o->i38 = c;
    o->f3c = func_00182cf0(a, b, c);
    o->f14 = s * o->f3c;
    o->f18 = s;
    o->v = *q;
}
