struct V { f32 x, y, z; };
struct O { char p0[60]; s32 t; char p1[96]; struct V a; char p2[224]; struct V c0; struct V c1; };
struct M { struct V r0; f32 w0; struct V r1; f32 w1; struct V r2; f32 w2; struct V r3; };
extern struct V D_002DE570;
extern void func_00164c20(struct O *, struct M *, f32);
extern f32 func_001ce240(struct V *);

void func(struct O *o, struct M *m, f32 u, f32 w, struct V *p2, struct V *p3, f32 *out) {
    struct V t;
    struct V s;
    switch (o->t) {
    case 0x400000:
    case 0x200000:
    case 0x10000:
    case 0x20000:
    case 0x40000: {
        f32 a, b, c;
        s = D_002DE570;
        func_00164c20(o, m, 0.0f);
        t.x = m->r0.x * s.x; t.y = m->r0.y * s.x; t.z = m->r0.z * s.x;
        p3->x = m->r3.x + t.x; p3->y = m->r3.y + t.y; p3->z = m->r3.z + t.z;
        t.x = m->r1.x * s.y; t.y = m->r1.y * s.y; t.z = m->r1.z * s.y;
        p3->x = p3->x + t.x; p3->y = p3->y + t.y; p3->z = p3->z + t.z;
        t.x = m->r2.x * s.z; t.y = m->r2.y * s.z; t.z = m->r2.z * s.z;
        p3->x = p3->x + t.x; p3->y = p3->y + t.y; p3->z = p3->z + t.z;
        a = o->c1.x + u * (o->c0.x - o->c1.x);
        b = o->c1.y + u * (o->c0.y - o->c1.y);
        c = o->c1.z + u * (o->c0.z - o->c1.z);
        t.x = m->r0.x * a; t.y = m->r0.y * a; t.z = m->r0.z * a;
        p2->x = p3->x + t.x; p2->y = p3->y + t.y; p2->z = p3->z + t.z;
        t.x = m->r1.x * b; t.y = m->r1.y * b; t.z = m->r1.z * b;
        p2->x = p2->x + t.x; p2->y = p2->y + t.y; p2->z = p2->z + t.z;
        t.x = m->r2.x * c; t.y = m->r2.y * c; t.z = m->r2.z * c;
        p2->x = p2->x + t.x; p2->y = p2->y + t.y; p2->z = p2->z + t.z;
        break; }
    case 0x100000: {
        func_00164c20(o, m, 0.0f);
        *p3 = o->a;
        w = (3.0f - 2.0f * w) * (w * w);
        p2->x = o->c0.x + w * (o->c1.x - o->c0.x);
        p2->y = o->c0.y + w * (o->c1.y - o->c0.y);
        p2->z = o->c0.z + w * (o->c1.z - o->c0.z);
        break; }
    }
    t.x = p2->x - p3->x; t.y = p2->y - p3->y; t.z = p2->z - p3->z;
    *out = func_001ce240(&t);
}
