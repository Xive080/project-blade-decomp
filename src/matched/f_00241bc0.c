struct V { float x, y, z; };
struct E { char pad[28]; float m; char pad2[8]; struct V v; };
struct R { float x; float lim; struct E *a; struct E *b; };
struct S { char pad0[44]; unsigned fl; float f; };
extern float G[3];
void f(float dt, int i, struct S *s, struct R *r)
{
    float f3, f4, f5, lim, x;
    struct V *pa, *pb;
    x = r->x;
    lim = r->lim;
    if (x < lim) {
        r->x = x + dt;
        if (r->x > r->lim) r->x = r->lim;
    } else if (!(x <= lim)) {
        r->x = x - dt;
        if (r->x < r->lim) r->x = r->lim;
    }
    if (s->fl & 4) {
        f3 = s->f - 2.0f;
        if (s->fl & 8) f4 = -r->x; else f4 = r->x;
        if (s->fl & 0x10) {
            f5 = (0.5f * f4 - 0.5f) * f3;
            r->a->m = 2.0f + (f3 + f5);
            r->b->m = 2.0f + (1.5f * f3 + f5);
            if (s->fl & 8) {
                pa = (struct V *)((char *)s + i * 16 + 104);
                pb = (struct V *)((char *)s + i * 16 + 56);
            } else {
                pa = (struct V *)((char *)s + i * 16 + 56);
                pb = (struct V *)((char *)s + i * 16 + 104);
            }
            if (!(f4 <= -0.01f)) {
                r->a->v.x = G[0]; r->a->v.y = G[1]; r->a->v.z = G[2];
            } else {
                r->a->v.x = pa->x; r->a->v.y = pa->y; r->a->v.z = pa->z;
            }
            if (f4 < 0.01f) {
                r->b->v.x = G[0]; r->b->v.y = G[1]; r->b->v.z = G[2];
            } else {
                r->b->v.x = pb->x; r->b->v.y = pb->y; r->b->v.z = pb->z;
            }
        }
    }
}
