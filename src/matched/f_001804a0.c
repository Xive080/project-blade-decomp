struct S {
    int a;
    int z1, z2, z3, z4, z5, z6;
    float m;
    float inv;
    float k;
    float ik;
    float c;
    float d;
    float b;
    int e;
    int z7;
    int z8;
};
void f(struct S *s, int e, float m, float b, float c, float d) {
    s->z1 = 0;
    s->z2 = 0;
    s->z3 = 0;
    s->z4 = 0;
    s->z5 = 0;
    s->z6 = 0;
    s->m = m;
    s->inv = 1.0f / m;
    s->k = 0.4f * (m * b);
    s->ik = 1.0f / s->k;
    s->c = c;
    s->d = d;
    s->b = b;
    s->z8 = 0;
    s->e = e;
    s->z7 = 0;
    s->a = 1;
}
