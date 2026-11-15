struct P { f32 x, y, z, w; };
struct Pl { f32 x, y, z, d; int pad; };
struct H { char p[4]; u16 h; };
struct S1 { char p[0x44]; struct H *h; };
struct S0 { char p0[4]; char *f4; char p8[0x10]; struct S1 *f18; struct P pl; };
struct O { char p[8]; struct S0 *f8; struct H *fc; int f10; int f14; char p18[0x10]; u8 f28; s8 f29; };
extern int func_00202b00(void *);
extern int *func_0020eef0(void *, u16);
extern void func_001c7340(int, void *, int);
extern int D_002FA350[];
extern char D_0032A620[];
extern int G_8778, G_8874, G_8878;
extern u8 G_87CC;

int func(struct O *o, int *a) {
    struct S0 *s0 = o->f8;
    struct S1 *s1 = (struct S1 *)s0->f18;
    struct P *pp;
    int i;
    struct Pl *pl;
    o->fc = s1->h;
    if (func_00202b00(s1) != 1) {
        o->f10 = *func_0020eef0((char *)s0 + G_8874, s1->h->h);
    } else {
        o->f10 = *func_0020eef0((char *)s1 + G_8878, s1->h->h);
    }
    o->f29 = 4;
    o->f28 = G_87CC;
    o->f14 = o->f14 & ~1;
    if (D_002FA350[0] == 0) {
        func_001c7340(*a, s0->f4 + 0x50, *(int *)D_0032A620 + 0x20);
        o->f28 = G_87CC | 2;
        return 1;
    }
    *a = D_002FA350[0];
    o->f28 = G_87CC;
    pl = (struct Pl *)(*(char **)D_0032A620 + G_8778 + 0x60);
    pp = &s0->pl;
    i = 6;
    while (i-- != 0) {
        f32 t = pp->x * pl->x + pp->y * pl->y + pp->z * pl->z;
        t = t - pl->d;
        if (!(t <= -pp->w)) {
            o->f28 |= 2;
            break;
        }
        pl++;
    }
    return 1;
}
