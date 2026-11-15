struct V { float x, y, z, w; };
struct E { int idx; struct V q; float s; char pad[8]; };
struct O { int t; float f4, f8, f12, f16, f20, f24; struct V v; int h; struct V w; };
void func(struct O *o, char *g, unsigned char c, struct V *v, float x, float a, float b, float d, float e) {
    struct E *p = (struct E *)(g + ((c - 32) << 5));
    o->t = 0;
    o->f4 = d;
    o->f8 = e;
    o->f12 = a;
    o->f16 = b;
    o->f20 = x * p->s;
    o->f24 = x;
    o->v = *v;
    o->h = (*(int **)(g + 7172))[p->idx];
    o->w = p->q;
}
