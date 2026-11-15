extern f32 func_00119ff8(f32);
extern f32 func_0011a398(f32);
struct A { f32 x, y, r; };
struct B { char pad[8]; f32 a, b, c, d; };
s32 func(struct A *p, struct B *q, f32 t) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f21;
    f32 temp_f21_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;

    temp_f21 = 0.017453292f * (p->r * t);
    temp_f21_2 = func_0011a398(temp_f21);
    temp_f0 = func_00119ff8(temp_f21);
    temp_f2 = q->a;
    q->a = (q->b * temp_f21_2) + (temp_f2 * temp_f0);
    q->b = (q->b * temp_f0) - (temp_f2 * temp_f21_2);
    temp_f2_2 = q->c;
    q->c = (q->d * temp_f21_2) + (temp_f2_2 * temp_f0);
    q->d = (q->d * temp_f0) - (temp_f2_2 * temp_f21_2);
    temp_f2_3 = 1.0f + ((p->x - 1.0f) * t);
    temp_f1 = 1.0f + ((p->y - 1.0f) * t);
    q->a = q->a * temp_f2_3;
    q->b = q->b * temp_f2_3;
    q->c = q->c * temp_f1;
    q->d = q->d * temp_f1;
    return 1;
}
