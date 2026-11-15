struct E { char pad0[48]; int fl; char pad1[44]; };
struct E2 { char pad0[112]; float x, y, z; };
struct G {
    char pad0[16]; int n; char pad1[4]; float f; char pad2[4]; int m;
    char pad3[28]; float a0, a1, a2; char pad4[20]; float b0, b1, b2; char pad5[20]; float c0, c1, c2;
};
struct O {
    char pad0[20]; int fl; char pad1[12]; float x, y, z; float u, v, w; float lo, hi; char pad2[44]; float *d;
};
extern struct G g;
extern char base[];
extern int h1(float);
extern int h2(int);
extern float h3(int);
extern float sqf(float);
extern void fn(struct O *, float, float, float, float);
int func(struct O *o) {
    float one = 1.0f;
    float mn = 3.4028235e38f;
    float dx, dy, dz, d, t, u, f13, f15;
    int i;
    struct E *e;
    int off;
    e = (struct E *)base;
    for (i = 0, off = 0; i < g.n; e++, off += 4, i++) {
        if (!(e->fl & 1)) {
            fn(o, 0.0f, 0.0f, 0.0f, 1.0f);
            return 1;
        }
        dx = o->x - ((struct E2 *)e)->x;
        dy = o->y - ((struct E2 *)e)->y;
        dz = o->z - ((struct E2 *)e)->z;
        if (o->d) {
            d = *(float *)((char *)o->d + off);
        } else {
            d = h3(h2(h1(dx * dx + dy * dy + dz * dz)));
        }
        if (d < mn) mn = d;
    }
    t = 1.0f / mn;
    dx = dx * t;
    dy = dy * t;
    dz = dz * t;
    if (!(o->fl & 0x20) || mn <= o->lo) {
        mn = 1.0f;
    } else if (!(mn <= o->hi)) {
        mn = 0.0f;
    } else {
        u = (o->hi - mn) / (o->hi - o->lo);
        mn = u * u;
        if (mn < 0.0f) mn = 0.0f;
        else if (!(mn <= 1.0f)) mn = 1.0f;
    }
    if (mn <= 0.0f) {
        fn(o, mn, 0.0f, 1.0f, 1.0f);
        return 1;
    }
    if (g.n == 1 && (o->fl & 0x10)) {
        float A = g.c0 * dx + g.c1 * dy + g.c2 * dz;
        float B = o->u * dx + o->v * dy + o->w * dz;
        float q, p;
        if (!(B <= 320.0f)) B = A;
        q = 0.003125f * A + 1.0f;
        p = 0.003125f * B + 1.0f;
        if (!(sqf(p) <= 1e-5f)) f15 = g.f * (q / p);
        else f15 = 1.0f;
    } else {
        f15 = 1.0f;
    }
    if (g.n == 1 && (o->fl & 8)) {
        float C = g.a0 * dx + g.a1 * dy + g.a2 * dz;
        f13 = -1.0f * C;
        if (g.m >= 3) {
            float D = g.b0 * dx + g.b1 * dy + g.b2 * dz;
            if (!(D < f13) && !(D < -f13)) one = 1.0f;
            else one = -1.0f;
        }
    } else {
        f13 = 0.0f;
    }
    fn(o, mn, f13, one, f15);
    return 1;
}
