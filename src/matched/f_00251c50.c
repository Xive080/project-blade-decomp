struct V4 { float x, y, z, w; };
struct P { int a, b; float c; int d, e; float f, g; struct V4 v; int h, i; float j; int pad[4]; };
struct O { char p0[44]; int n; char p1[84]; int s; int t; int u; };
struct G { int *a; int *b; int *c; };
extern struct V4 D6A0, D6B0, D89B0;
extern struct G * G89F0;
extern float F182e50();
extern void F188ff0();
extern int F189050();
void f(struct O *o, unsigned char *a) {
    struct V4 *v;
    struct V4 *q;
    float k;
    int h, i;
    unsigned char t;
    struct P p;
    if (o->t) {
        F188ff0(o->t);
        F188ff0(o->u);
    }
    if (a[4]) v = &D89B0; else v = &D6A0;
    i = *(int *)a;
    if (a[5]) k = 25.0f; else k = 36.0f;
    if (a[5]) h = (int)G89F0->c; else h = (int)G89F0->b;
    p.a = 2; p.b = 0; p.c = 0.5f; p.d = 0; p.e = 0;
    p.h = h;
    p.i = i;
    p.j = F182e50(h, i);
    p.f = k * p.j;
    p.g = k;
    q = &p.v;
    *q = *v;
    o->t = F189050(&p, G89F0->a, o->s, o->n + 1);
    *q = D6B0;
    o->u = F189050(&p, G89F0->a, o->s, o->n);
}
