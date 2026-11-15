struct V { float x, y, z; };
extern struct V *g147e20();
extern struct V *g147b70(int, struct V *);
struct V *func(int a, struct V *p, float r) {
    float best = r * r;
    struct V *q;
    struct V *res;
    if (a == 0 || p == 0) return 0; res = 0;
    q = g147e20();
    if (q != 0) {
        do {
            float f0;
            float dx = p->x - q->x; float dy = p->y - q->y; float dz = p->z - q->z; f0 = dx*dx + dy*dy + dz*dz;
            if (f0 < best) { best = f0; res = q; }
            q = g147b70(a, q);
        } while (q != 0);
    }
    return res;
}
