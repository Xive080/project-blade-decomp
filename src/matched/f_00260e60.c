struct V { float x, y, z, w; };
struct E { int i; struct V v; float m; float p0, p1; };
struct T { struct E e[1]; };
struct O { int z; float f1, f2, f3, f4, f5, f6; struct V v; int h; struct V w; };
void f(struct O *o, struct T *t, unsigned char c, struct V *p, float s, float x1, float x2, float x3, float x4) {
    struct E *e = (struct E *)((char *)t + ((c - 32) << 5));
    o->z = 0;
    o->f1 = x3;
    o->f2 = x4;
    o->f3 = x1;
    o->f4 = x2;
    o->f5 = s * e->m;
    o->f6 = s;
    o->v = *p;
    o->h = (*(int **)((char *)t + 7172))[e->i];
    o->w = e->v;
}
