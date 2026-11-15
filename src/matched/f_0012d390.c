struct V3 { f32 x, y, z; };
struct VT { void *(*m0)(void *); int pad[3]; int (*m10)(void *, int); void (*m14)(void *, int, int); void *(*m18)(void *); };
struct O { char p0[0xc]; struct VT *vt; int f10; char p14[0x1c]; int f30; char p34[8]; int f3c; char p40[0x74]; int fb4; int fb8; char pbc[0x328]; int f3e4; char p3e8[0x48]; int a430; int a434; char p438[0x20]; int f458; char p45c[4]; struct V3 x460; };
struct R { int p[2]; void (*m8)(void *, int); };
struct FV { char p[0x40]; struct V3 v; };
extern void *func_0017a3c0();
extern void func_0017a220(void *);
extern void func_001be3a0(int, void *);
extern char D_002EBFE8[];

void func(struct O *o, int a) {
    int *pf;
    struct VT **pv;
    struct FV *v;
    int i;
    struct O *w;
    ((struct R *)func_0017a3c0())->m8(o, a);
    o->f10 = o->f10 & ~0x800;
    pf = &o->f3c;
    if (o->f3c != 0 && !(o->f10 & 2)) {
        if ((*(pv = &o->vt))->m10(o, 0) != 0) (*pv)->m14(o, 0, 0);
    }
    if (*pf != 2) {
        if (!(o->f10 & 2)) {
            if ((*(pv = &o->vt))->m10(o, 2) != 0) (*pv)->m14(o, 2, 0);
        }
    }
    func_0017a220(o);
    o->f3e4 = 0;
    if (o->fb4 != 0 && o->fb4 != o->f30) func_001be3a0(o->fb4, D_002EBFE8);
    if (o->fb8 != 0 && o->fb8 != o->f30) func_001be3a0(o->fb8, D_002EBFE8);
    v = (struct FV *)o->vt->m18(o);
    i = 0;
    w = o;
    o->x460 = v->v;
    do {
        i += 2;
        w->a430 = 0;
        w->a434 = 0;
        w = (struct O *)((char *)w + 8);
    } while (i < 10);
    o->f458 = 0;
}
