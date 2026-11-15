struct O;
extern void func_0015dcd0(struct O *);
struct VT { char pad[0x10]; int (*f10)(struct O *, int); void (*f14)(struct O *, int, int); };
struct O { int k; int id; int pad8; struct VT *vt; int fl; char pad14[0x28]; int x3c; };
struct P { int pad0; int pad4; int pad8; int id; char pad10[0x10]; unsigned n; };
int f(struct O *o, struct P *p, unsigned n) {
    int found;
    unsigned i;
    struct VT **q;
    if (p != 0) {
        found = 0;
        if (p->pad4 == 0) {
            n = p->n;
            i = 0;
            goto test;
body:
            if (o->id == p->id) {
                found = 1;
                goto done;
            }
            p = (struct P *)((int *)p + 1);
            i++;
test:
            if (i < n) goto body;
        }
    }
    found = 0;
done:
    if (found != 0) {
        if (o->k == 0x40000) {
            func_0015dcd0(o);
        } else {
        if (o->x3c != 0 && !(o->fl & 2)) {
            if ((*(q = &o->vt))->f10(o, 0)) {
                (*q)->f14(o, 0, 0);
            }
        }
        o->fl |= 1;
        }
    }
    return 1;
}
