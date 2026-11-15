struct V { char p[16]; int (*q)(void *, int); void (*r)(void *, int, int); };
struct O {
    char p0[12]; struct V *v; int fl; char p1[0x24]; int *q38; int m3c; char p2[0x314];
    int a354, a358, a35c; void *a360, *a364, *a368; char p3[0x70]; int w3dc;
    char p4[0x180]; int w560, w564, w568; char p5[0xc]; int w578; char p6[0xc]; int w588, w58c, w590, w594;
    char p7[0xcc]; int w664, w668;
};
extern void *func_0017a3c0();
extern void func_0017a220(void *);
extern void func_001ff7d0(void *, float);
void f(struct O *o, int b) {
    o->w578 = 0; o->w594 = 0; o->w588 = 0; o->w58c = 0; o->w590 = 0;
    o->w560 = 0; o->w564 = 0; o->w568 = 0;
    o->fl = o->fl & ~0x2000;
    o->w664 = 0; o->w668 = 0;
    (*(void (**)(void *, int))((char *)func_0017a3c0() + 8))(o, b);
    {
    struct V **pv; int *p;
    if (o->w3dc) { p = &o->m3c;
        if (o->m3c != 2 && !(o->fl & 2) && (*(pv = &o->v))->q(o, 2)) (*pv)->r(o, 2, 0);

        if (*p != 0 && !(o->fl & 2) && (*(pv = &o->v))->q(o, 0)) (*pv)->r(o, 0, 0);
    } else { p = &o->m3c;
        if (o->m3c != 0 && !(o->fl & 2) && (*(pv = &o->v))->q(o, 0)) (*pv)->r(o, 0, 0);

        if (*p != 2 && !(o->fl & 2) && (*(pv = &o->v))->q(o, 2)) (*pv)->r(o, 2, 0);
    }
    }
    if (o->a360 && o->a354) func_001ff7d0(o->a360, 0.0f);
    if (o->a364 && o->a358) func_001ff7d0(o->a364, 0.0f);
    if (o->a368 && o->a35c) func_001ff7d0(o->a368, 0.0f);
    *o->q38 = 0;
    func_0017a220(o);
}
