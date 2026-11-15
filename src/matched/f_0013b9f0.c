struct V { int (*f0)(); int (*f1)(); int (*f2)(); int (*f3)(); int (*f4)(); int (*f5)(); };
struct I { struct V *vt; };
struct O { int pad[3]; struct I i; int fl; int pad2[10]; int st; };
void func(struct O *o) {
    int *p = &o->st;
    if (*p != 0) {
        if (!(o->fl & 2)) {
            struct I *q;
            if ((q = &o->i)->vt->f4(o, 0) != 0) {
                q->vt->f5(o, 0, 0);
            }
        }
    }
    if (*p != 1) {
        if (!(o->fl & 2)) {
            struct I *r;
            if ((r = &o->i)->vt->f4(o, 1) != 0) {
                r->vt->f5(o, 1, 0);
            }
        }
    }
}
