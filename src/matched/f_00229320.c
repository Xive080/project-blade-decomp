struct V { int (*f0)(); int (*f4)(); int (*f8)(); int (*fc)(); int (*f10)(void *, int, void *); };
struct E { char pad[0xc]; struct V *vt; int f10; char pad2[0x28]; int f3c; };
struct O { int a0; int flags; int f8; char p[8]; int f14; char p2[0x24]; struct E *obj; float f40; int f44; float f48; int e[4]; };
struct M { int a; struct E *b; int c; };
extern struct V *G_84AC;
extern int G_88A8;
extern char D_00306F80[];
extern char D_00307530[];
extern struct E *func_0016f240(int, int, int);
extern void func_00170c80(struct E *);
extern int *func_0022b940(void);
extern int func_00234ff0(void);
extern void func_002429e0(void *, void *);
extern void func_00242a10(void *);
extern void func_00133120(int);
void f(struct O *o) {
    int i; float t;
    struct { int x; int y; int z; } c;
    struct { char *a; struct E *b; int c; } m;
    struct E *e;
    i = 2;
    if (o->flags & 2) { c.z = 0; c.y = 0; c.x = 0; }
    else { c.z = 0x437f0000; c.y = 0x437f0000; c.x = 0x437f0000; }
    func_002429e0(o, &c);
    func_00242a10(o);
    o->f14 = 0x40800000;
    G_88A8 = 0;
    o->f40 = *(float *)0x70003FB0;
    o->f44 = 0;
    t = *(float *)0x70003FB0;
    o->f48 = 10.0f + (15.0f + t) + (float)(func_00234ff0() % 15);
    if (i--) {
        do {
            o->e[i * 2] = 0;
            o->e[i * 2 + 1] = 0;
        } while (i-- != 0);
    }
    o->obj = func_0016f240(22, -1, -1);
    func_00170c80(o->obj);
    ((void (*)(struct E *, int))((int *)func_0022b940())[2])(o->obj, 0);
    e = o->obj;
    if (e->f3c != 2) {
        if (!(e->f10 & 2) && ((int (*)(struct E *, int))((int *)e->vt)[4])(e, 2) != 0)
            ((void (*)(struct E *, int, int))((int *)e->vt)[5])(e, 2, 0);
    }
    o->f8 = 0x42f00000;
    m.a = D_00306F80;
    m.b = o->obj;
    m.c = 0;
    if (G_84AC != 0) ((void (*)(void *, int, void *))((int *)G_84AC)[4])(G_84AC, 13, &m);
    m.a = D_00307530;
    m.b = o->obj;
    m.c = 0;
    if (G_84AC != 0) ((void (*)(void *, int, void *))((int *)G_84AC)[4])(G_84AC, 13, &m);
    func_00133120(2);
}
