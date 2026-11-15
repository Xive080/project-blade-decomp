struct V { float x, y, z; };
struct S { unsigned short fl; unsigned short n; struct V *p; float *w; };
void f(struct S *s, struct V *v, int on) {
    unsigned i;
    if (on) s->fl |= 0x8000; else s->fl &= 0x7fff;
    for (i = s->n - 1; i != 0; i--) {
        s->p[i] = s->p[i - 1];
        s->w[i] = s->w[i - 1];
        if (0.0f == s->w[i]) {} else s->fl |= 0x8000;
    }
    s->p[0] = *v;
    if (on) {
        s->w[0] = 0.025f + s->w[1];
        if (!(s->w[0] <= 1.0f)) s->w[0] = 1.0f;
    } else {
        s->w[0] = s->w[1] - 0.025f;
        if (s->w[0] < 0.0f) s->w[0] = 0.0f;
    }
}
