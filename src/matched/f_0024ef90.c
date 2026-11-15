typedef struct { float x, y, z, w; } V4;
typedef struct { int a; float s0, s1, f[4]; V4 v; int n; float g[4]; } S;
void f(S *d, int a1, V4 *a2, float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float s0, float s2) {
    d->a = 1;
    d->s0 = s0;
    d->s1 = s2;
    d->f[0] = p6;
    d->f[1] = p7;
    d->f[2] = p4;
    d->f[3] = p5;
    d->v = *a2;
    d->n = a1;
    d->g[0] = p0;
    d->g[1] = p1;
    d->g[2] = p2;
    d->g[3] = p3;
}
