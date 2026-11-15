typedef struct { float x, y; } Pt;
typedef struct { float scale; int n; Pt p[1]; } Curve;
float f(Curve *c, float x) {
    int lo;
    int hi;
    int d;
    Pt *p;
    hi = c->n - 1;
    lo = 0;
    if (hi < 0) {
        return x * c->scale;
    }
    p = c->p;
    if (lo == hi || x <= p[0].x) {
        return c->scale * p[0].y;
    }
    if (!(x <= p[hi].x)) {
        return c->scale * p[hi].y;
    }
    while ((d = hi - lo) >= 2) {
        int mid = lo + d / 2;
        if (x < p[mid].x) hi = mid; else lo = mid;
    }
    {
        Pt *a = &p[lo];
        Pt *b = &p[lo + 1];
        return c->scale * (a->y + (b->y - a->y) * ((x - a->x) / (b->x - a->x)));
    }
}
