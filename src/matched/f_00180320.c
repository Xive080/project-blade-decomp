struct T { char pad[0x30]; f32 a, b, c; };
struct S { char p[4]; f32 x, y, z; char q[0x28]; struct T *t; };
void func(struct S *s) {
    f32 t0, t1, t2;
    f32 k = *(f32*)0x70003FA8;
    t0 = s->y * k;
    t1 = s->x * k;
    t2 = s->z * k;
    s->t->a = t1 + s->t->a;
    s->t->b = t0 + s->t->b;
    s->t->c = t2 + s->t->c;
}
