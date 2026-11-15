struct V { float x, y, z; };
struct W { int k; char p[0x38]; int s; };
struct G { char p0[16]; int fl; char p1[0x54]; int h; char p2[0x9c]; float x, y, z; };
struct P { char p[0x30]; float x, y, z; };
extern struct G *G_8384;
extern struct P *func_001c3b70(int);
extern void func_001ce160(float *, float *);
struct W *func(int a0, int a1, int a2, struct W *w, struct V *n) {
    float d[3];
    struct P *p;
    if (a2 == 0) return 0;
    if (a2 != 0) {
        if (w->k == 0x80000) {
            if (w->s != 2) return 0;
        } else if (w->k == 0x200000) {
            return 0;
        } else if (w->k == 0x800000) {
            return 0;
        }
        if (G_8384 != 0 && (G_8384->fl & 0x800)) {
            p = func_001c3b70(G_8384->h);
            d[0] = G_8384->x - p->x;
            d[1] = G_8384->y - p->y;
            d[2] = G_8384->z - p->z;
            func_001ce160(d, d);
            if (d[0] * n->x + d[1] * n->y + d[2] * n->z < -0.3f) return 0;
        }
    }
    return w;
}
