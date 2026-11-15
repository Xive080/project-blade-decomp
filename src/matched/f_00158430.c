struct N { struct N *a; struct N *b; };
struct O {
    int kind;
    char p0[0xe0];
    char *base;
    char p1[0x58];
    int f140;
    int key;
    char p2[4];
    float w;
    struct N n;
};
void f(struct O *o, int unused) {
    struct N *x, *y;
    struct N *p;
    struct N *end;
    struct N *me;
    struct N *him;
        int z;
    struct O *q;
    if (o->kind != 1) return;
    end = (struct N *)(o->base + 28);
    z = (o->f140 != 0) ^ 1;
    if (z) p = o->n.b; else p = o->n.a;
    if (p == end) return;
    q = (struct O *)((char *)p - 336);
    if (o->f140 != 0) {
        if (q->key > o->key) return;
        if (q->key == o->key) {
            if (!(q->w < o->w)) return;
        }
    } else {
        if (q->key < o->key) return;
        if (q->key == o->key) {
            if (q->w <= o->w) return;
        }
    }
    me = &o->n;
    {
        struct N *x = q->n.a, *y = q->n.b;
        y->a = x;
        x = q->n.b; y = q->n.a;
        y->b = x;
    }
    q->n.a = o->n.a;
    q->n.b = me;
    o->n.a->b = &q->n;
    o->n.a = &q->n;
}
