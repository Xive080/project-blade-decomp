struct G { char pad[0x14]; int h; };
struct O { char pad[0xc]; unsigned fl; float x, y; float a, b, c, d; };
extern struct G *g;
struct O *f189710(int);
void f(float *p, float s) {
    struct O *o = f189710(g->h);
    float x = p[0];
    float y = p[1];
    o->x = x;
    o->y = y;
    o->fl |= 1;
    o->a = o->a * s;
    o->b = o->b * s;
    o->c = o->c * s;
    o->d = o->d * s;
    o->fl |= 2;
}
