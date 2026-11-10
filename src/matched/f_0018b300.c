struct S { f32 f[6]; };
int func(struct S *a, struct S *b, int *c, f32 s) {
    f32 t, u, v;
    t = s * a->f[0]; b->f[0] = b->f[0] + t;
    t = s * a->f[1]; b->f[1] = b->f[1] + t;
    u = 1.0f + (a->f[2] - 1.0f) * s;
    v = 1.0f + (a->f[3] - 1.0f) * s;
    b->f[2] = b->f[2] * u;
    b->f[3] = b->f[3] * u;
    b->f[4] = b->f[4] * v;
    b->f[5] = b->f[5] * v;
    *c |= 3;
    return 1;
}
