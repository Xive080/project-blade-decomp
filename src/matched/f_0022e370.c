struct S { char pad[0x154]; f32 t; };
struct T { char pad[0x40]; f32 a; f32 b; u8 n; };
void func_00230d10(void *, s32);
void func(struct S *p, f32 dt) {
    struct T *q = (struct T *)((char *)p + 0x114);
    p->t = p->t - dt;
    if (p->t <= 0.0f) {
        func_00230d10(p, 3);
        q->a += 0.05f;
    }
    if (q->n > 0) {
        q->b = q->b - dt;
        if (q->b <= 0.0f) {
            func_00230d10(p, 4);
            q->b += 0.1875f;
            q->n--;
        }
    }
}
