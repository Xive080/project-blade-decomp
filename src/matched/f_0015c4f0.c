extern void func_0013b240(int, void *);
extern void func_00141bf0(int *, void *);
struct V { int p0[4]; int (*f10)(void *, int); void (*f14)(void *, int, int); };
struct P { int p0[3]; struct V *vt; int f10; int p14[10]; int f3c; };
struct C { int p0[11]; int f2c; };
struct O {
    int st; struct P *par; int p8[21]; int f5c; int p60[33]; int *a4; struct C *a8; int fec; int pf0[12]; int f120; float f124; int f128; int p12c[5]; int f140;
};
void func(int unused, struct O *o, int arg) {
    struct P *p;
    if (arg != 0 || o->st != 3) {
        if (o->st == 1) {
            if (o->f5c != 0) {
                func_0013b240(o->a4[o->f140], o);
                o->f5c = 0;
            }
            func_00141bf0(o->a4, o);
        } else if (o->st == 2) {
            o->a8->f2c = o->a8->f2c - 1;
        }
        if (o->st != 0) {
            o->st = 0;
            p = o->par;
            if (p->f3c != 0 && !(p->f10 & 2) && p->vt->f10(p, 0) != 0) {
                p->vt->f14(p, 0, 0);
            }
        }
        o->fec = 0;
        o->f120 = 0;
        o->f124 = 1.0f;
        o->f128 = 0;
    }
}
