struct V { float x, y; };
struct E { int id; char a[16]; float f20; float f24; float f28; };
struct F { char pad[7172]; int *tbl; };
struct O { float x, y, sx, sy; float pad[2]; float r, g, b; };
extern void func_001860d0(int, struct O *, char *);
void f(struct F *base, unsigned char *s, struct O *o) {
    struct V p, q;
    struct E *e;
    int c;
    float *s1;
    float w2, w1, w;
    p = *(struct V *)&o->x;
    q = *(struct V *)&o->sx;
    s1 = &o->sx;
    c = s[0];
    if (c >= 32 && c < 256) {
        float a = -*(float *)((char *)(c * 32) + (int)base - 1000);
        o->x += s1[0] * a;
        o->y += s1[1] * a;
    }
    while ((c = *s) != 0) {
        if (c >= 32 && c < 256) {
            int k;
            e = (struct E *)((char *)base + (c - 32) * 32);
            o->x += s1[0] * e->f24;
            o->y += s1[1] * e->f24;
            if (e->id != -1) {
                s1[0] = q.x * e->f20;
                s1[1] = q.y * e->f20;
                k = ((char *)e - (char *)base) / 32;
                if (k >= 109 && k < 113) {
                    w = o->r; w1 = o->g; w2 = o->b;
                    o->r = 255.0f; o->g = 255.0f; o->b = 255.0f;
                    func_001860d0(base->tbl[e->id], o, e->a);
                    o->r = w; o->g = w1; o->b = w2;
                } else {
                    func_001860d0(base->tbl[e->id], o, e->a);
                }
            }
            {
                float t = e->f20 + e->f28;
                o->x += q.x * t;
                o->y += q.y * t;
            }
        }
        s++;
    }
    *(struct V *)&o->x = p;
    *(struct V *)&o->sx = q;
}
