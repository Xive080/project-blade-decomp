struct O;
struct VT { char p[16]; int (*f10)(struct O *, int); void (*f14)(struct O *, int, int); };
struct I { struct VT *vt; };
struct O { char p0[12]; struct I i; int f10; char p14[40]; int f3c; char pad[920]; int f3d8; int *f3dc; };
extern void func_0015c4f0(int, int*, int);
void func(struct O *o) {
    struct I *i;
    if (o->f3dc == 0) {
        if (o->f3c != 0 && !(o->f10 & 2) && (i = &o->i)->vt->f10(o, 0) != 0) {
            i->vt->f14(o, 0, 0);
        }
        o->f10 |= 1;
        return;
    }
    func_0015c4f0(o->f3d8, o->f3dc, 0);
    *o->f3dc = 3;
}
