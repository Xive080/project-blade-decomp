struct V2 { f32 x, y; };
struct V4 { f32 a, b, c, d; };
struct R { char pad[0x74]; f32 a; f32 b; };
struct Q { char pad[8]; struct V2 q; struct V2 r; struct V4 s; };
struct W { struct V2 p, q, r; struct V4 s; };
void func_00185f50(struct W *);

void func(struct R *a, struct Q *r) {
    struct W L;
    struct V2 h0;
    struct V2 h1;
    f32 f20;
    f32 t = 1.0f - a->a;
    f32 t2;
    h0.x = 0.5f * (r->q.x * t);
    h0.y = 0.5f * (r->q.y * t);
    t2 = 1.0f - a->b;
    h1.x = 0.5f * (r->r.x * t2);
    h1.y = 0.5f * (r->r.y * t2);
    L.p = *(struct V2 *)r;
    L.q = r->q;
    L.r = h1;
    L.s = r->s;
    func_00185f50(&L);
    L.p.x += r->r.x - h1.x;
    f20 = h1.y;
    L.p.y += r->r.y - f20;
    func_00185f50(&L);
    L.p.x = ((struct V2 *)r)->x + h1.x;
    L.p.y = ((struct V2 *)r)->y + f20;
    L.q = h0;
    L.r.x = r->r.x - 2.0f * h1.x;
    L.r.y = r->r.y - 2.0f * f20;
    func_00185f50(&L);
    L.p.x += r->q.x - h0.x;
    L.p.y += r->q.y - h0.y;
    func_00185f50(&L);
}
