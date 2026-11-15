struct T3 { f32 a, b, c; };
struct V { char pad[0x30]; f32 x, y, z; };
struct S { s32 a0, a1, a2, b0, b1, b2; f32 x, y, z; char pad[8]; s32 n; s32 c0, c1, c2, d0, d1, d2; s32 e; char pad2[8]; s32 f; s32 g; };
extern struct V *sub(s32);
struct S *func(struct S *p, s32 k) {
    if (p->n > 0) {
        struct V *v = sub(k);
        *(struct T3*)&p->x = *(struct T3*)&v->x;
        p->a2 = 0; p->a1 = 0; p->a0 = 0;
        p->b2 = 0; p->b1 = 0; p->b0 = 0;
    }
    if (p->n >= 2) {
        p->c2 = 0; p->c1 = 0; p->c0 = 0;
        p->d2 = 0; p->d1 = 0; p->d0 = 0;
        p->e = k;
        p->f = 1;
    }
    if (p->n >= 4) {
        p->g = 1;
    }
    return p;
}
