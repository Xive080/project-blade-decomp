struct E { float x, y, z; char p[12]; float w; char q[4]; };
struct C { char pad[7860]; float x, y, z, lim; };
struct O { char pad[12]; struct E * volatile e; };
int f(struct C *c, struct O *o, int a, int b, int r, int k, float th)
{
    int i, off;
    float ref;
    if (r) i = a; else { i = b; b = a; }
    a = (i < b) ? 1 : -1;
    off = i << 5;
    ref = o->e[i].w;
    for (; i != b; i += a, off += a << 5) {
        struct E *e = (struct E *)((char *)o->e + off);
        float dx = e->x - c->x;
        float dy = e->y - c->y;
        float dz = e->z - c->z;
        float s = dx * dx + dy * dy + dz * dz;
        float d = ref - e->w;
        if (d < 0.0f) d = -d;
        if (d < th) continue;
        if (s < c->lim) {
            if (k == 0) continue;
        }
        return i;
    }
    return -1;
}
