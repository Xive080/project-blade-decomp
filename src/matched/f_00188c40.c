struct P { float x, y, u, v, w, h, c[4]; };
struct O {
    char pad0[84];
    float e0, e1, e2, e3;
    float c[4];
    char pad1[28];
    void (*fn)(struct O *, float *);
};

void f_00188c40(struct O *o, struct P *p, int a2) {
    struct { float f[6]; volatile float c[4]; } L;
    float *e;
    int i;
    L.c[0] = p->c[0] * o->c[0];
    L.c[1] = p->c[1] * o->c[1];
    L.c[2] = p->c[2] * o->c[2];
    L.c[3] = p->c[3] * o->c[3];
    if (!(L.c[3] < 0.1f)) {
        if (!(L.c[0] <= 255.0f)) L.c[0] = 255.0f;
        if (!(L.c[1] <= 255.0f)) L.c[1] = 255.0f;
        if (!(L.c[2] <= 255.0f)) L.c[2] = 255.0f;
        if (!(L.c[3] <= 255.0f)) L.c[3] = 255.0f;
        e = &o->e0;
        if (a2) {
            L.f[0] = p->u * (e[0] + e[2]);
            L.f[1] = p->v * (e[0] + e[2]);
            L.f[2] = p->u * -e[2];
            L.f[3] = p->v * -e[2];
        } else {
            L.f[0] = p->u * e[0];
            L.f[1] = p->v * e[0];
            L.f[2] = p->u * e[2];
            L.f[3] = p->v * e[2];
        }
        L.f[4] = p->w * e[3];
        L.f[5] = p->h * e[3];
        L.f[0] = L.f[0] + p->w * e[1];
        L.f[1] = L.f[1] + p->h * e[1];
        L.f[0] = L.f[0] + p->x;
        L.f[1] = L.f[1] + p->y;
        o->fn(o, L.f);
    }
}
