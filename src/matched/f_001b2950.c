struct A { char p[16]; float x, y, z; char q[4]; float a, b, c; };
struct W { char p[0x30]; int w[6]; };
struct G { char p[0xEAA4]; float x, y, z; };
struct S { char p[8]; struct G *g; struct W *w; };
extern struct A *func_001c3b70(int);
extern void func_001c73c0(struct A *, struct A *);
int func(struct S *s) {
    struct W *w = s->w;
    struct A *v = func_001c3b70(*(int*)((char*)w + 72));
    struct G *g = s->g;
    float d = *(float *)0x70003FA8;
    float k = 5.0f * d;
    float *r = (float*)v;
    float ty = g->y * k;
    float tz = g->z * k;
    float tx = g->x * k;
    v->x = tx + v->x;
    v->y = ty + v->y;
    v->z = tz + v->z;
    r[0] = v->y * v->c - v->z * v->b;
    r[1] = v->z * v->a - v->x * v->c;
    r[2] = v->x * v->b - v->y * v->a;
    v->a = r[1] * v->z - r[2] * v->y;
    v->b = r[2] * v->x - r[0] * v->z;
    v->c = r[0] * v->y - r[1] * v->x;
    func_001c73c0(v, v);
    w->w[5] = 0; w->w[4] = 0; w->w[3] = 0; w->w[2] = 0; w->w[1] = 0; w->w[0] = 0;
    return 1;
}
