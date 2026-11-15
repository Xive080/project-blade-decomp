struct Node { struct Node *next; struct Node *prev; };
struct Seg { float a[3]; float b[3]; float lo, hi; };
struct Src { char pad0[8]; int n; struct Seg *k; int cnt; char pad1[8]; struct Node head; char pad2[32]; };
struct Dst {
    int st; char pad0[20]; float v[3]; char pad1[24];
    float f60, f64, f68, f72, f76, f80; char pad2[144];
    struct Src *src; char pad3[88];
    struct Src *c320; int n324; float f328; char pad4[4]; struct Node node;
};
extern struct Src *gbase;
extern int gcnt[];

void f(struct Src *a, struct Dst *o, float x, int n, struct Node *q, int e, struct Src *c, int g) {
    struct Node *t;
    float f0;
    int nc;
    int *cp;
    struct Src *s0;
    o->src = a;
    o->f60 = x;
    o->f68 = x;
    o->f76 = x;
    o->st = 1;
    o->c320 = c;
    if (c) o->n324 = n + 1; else o->n324 = n;
    nc = !o->c320;
    s0 = o->src;
    if ((nc && e) || !(nc || e))
        f0 = o->f68;
    else
        f0 = (float)(s0->cnt + 1) - o->f68;
    o->f72 = f0;
    o->f64 = f0;
    o->f80 = o->f72;
    if (o->c320) o->f328 = 0;
    else {
        struct Seg *s = &a->k[a->n - 1];
        float d = s->hi - s->lo;
        float x = o->f72;
        float r;
        if (d == 0) r = s->lo;
        else { float m = (2.0f * x - 1.0f) / (float)(a->cnt * 2); m = m * d; r = s->lo + m; }
        o->f328 = r;
    }
    if (q) t = (struct Node *)((char *)q + 336);
    else if (o->c320) t = &a->head;
    else {
        t = a->head.prev;
        if (t == &a->head) t = &a->head;
    }
    o->node.next = t->next;
    o->node.prev = t;
    t->next->prev = &o->node;
    t->next = &o->node;
    cp = gcnt + (a - gbase);
    *cp = *cp + 1;
    if (g) {
        struct Seg *s = &a->k[n];
        float m = (2.0f * o->f72 - 1.0f) / (float)(o->src->cnt * 2);
        o->v[0] = s->b[0] - s->a[0];
        o->v[1] = s->b[1] - s->a[1];
        o->v[2] = s->b[2] - s->a[2];
        o->v[0] *= m; o->v[1] *= m; o->v[2] *= m;
        o->v[0] = o->v[0] + s->a[0];
        o->v[1] = o->v[1] + s->a[1];
        { float z = s->a[2]; o->v[2] = o->v[2] + z; }
    }
}
