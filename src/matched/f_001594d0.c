struct R { char pad[36]; int v[4]; };
struct S { char pad[16]; volatile int n; char pad2[16]; struct R r[1]; };
struct O { char pad[68]; float t; char pad2[156]; struct S *s; char pad3[80]; int cur; int kind; int a; int b; };
int func(struct O *o, int k)
{
    struct S *s;
    int v;
    struct R *r;
    int ret;
    k = 1;
    s = o->s;
    if (o->t == 0.5f + (float)s->n && o->kind == 2) {
        k = 0;
    } else if (o->t == 0.5f && o->kind == 0) {
        k = 2;
    }
    r = (struct R *)((char *)(o->a * 16) + (int)s);
    v = r->v[k];
    if (v >= 0) {
        o->cur = v;
        o->kind = k;
        return 1;
    }
    if (k != 1) {
        v = r->v[1];
        if (v >= 0) {
            o->cur = v;
            o->kind = 1;
            return 1;
        }
    }
    return 0;
}
