struct E { float a; unsigned b; unsigned c; float d; };
extern struct E D_00332f60[];
int f(struct E *q, char *out, unsigned s) {
    struct E *p, *r;
    unsigned t, i, j, k, best = 0, n;
    unsigned char idx = 0;
    s = 0;
    for (i = 0; i < 5; i++) {
        if (!(D_00332f60[i].a < q->a)) { s += 5 - i; break; }
    }
    if (i != 0) { best = i; idx = 0; }
    p = D_00332f60;
    for (j = 0; j < 5; j++, p++) {
        t = p->b; if (!(t < q->b)) { s += 5 - j; break; }
    }
    if (best < j) { idx = 1; best = j; }
    p = D_00332f60;
    for (j = 0; j < 5; j++, p++) {
        t = p->c; if (!(t > q->c)) { s += 5 - j; break; }
    }
    if (best < j) { idx = 2; best = j; }
    r = D_00332f60;
    for (k = 0; k < 5; k++, r++) {
        if (!(r->d > q->d)) { s += 5 - k; break; }
    }
    if (best < k) { idx = 3; }
    if (out != 0) *out = idx;
    n = 5 - (s >> 2);
    if (n >= 5) n = 4;
    return n;
}
