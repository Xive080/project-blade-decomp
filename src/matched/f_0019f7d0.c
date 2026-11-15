struct O { int p0; unsigned fl; int a; int b; int mode; int c; int cnt; };
struct G { int h0[2]; unsigned fl; int pad; int x; int y; int p[2]; char pad2[0x2000]; };
struct E { char pad[20]; int a; int b; };
struct M { int t; void *e; };
struct B { int hd[5]; int w0; int w1; struct E e[8]; };
extern int func_0013b550(int, int);
extern int func_00174ac0(int);
extern void func_00195820(void *, int);
extern void func_00195a90(void *, int);
extern int func_001a3ac0(struct O *, int, int);
extern void func_0024b4b0(int, int);
extern void func_0024b540(int, int, struct M *);
extern struct G D_00316160;
extern struct B D_002e2120;
extern int g_h;
extern int g_z;
extern long g_m;
int f(struct O *o, int st, int k, int a3) {
    switch (st) {
    case 0: {
        int id;
        switch (a3) {
        case 0: id = 73; break;
        case 1: id = 74; break;
        default: return 0;
        }
        o->a = func_0013b550(g_h, id);
        o->b = func_0013b550(g_h, 72);
        o->c = (int)&D_00316160;
        o->mode = 2;
        o->cnt = 0;
        o->fl = 0;
        func_00195820(&D_00316160, 75);
        func_00195a90(&D_00316160.p[2], 76);
        o->fl |= 0x10;
        break;
    }
    case 2:
        D_00316160.x = a3;
        switch (a3) {
        case 0: D_00316160.y = 1; break;
        case 1: D_00316160.y = 2; break;
        }
        if (func_00174ac0(a3)) {
            { unsigned long t = D_00316160.fl; t = (t << 32) >> 32; D_00316160.fl = t; }
        } else {
            D_00316160.fl |= 1;
        }
        break;
    }
    if (!func_001a3ac0(o, st, k)) return 0;
    switch (st) {
    case 3: case 5: case 6: {
        if (o->cnt == 1) {
            struct B b;
            unsigned i;
            b = D_002e2120;
            g_z = 0;
            b.w0 = func_0013b550(g_h, 78);
            b.w1 = func_0013b550(g_h, 77);
            for (i = 0; i < 8; i++) {
                b.e[i].a = func_0013b550(g_h, 87 + i);
                b.e[i].b = func_0013b550(g_h, 79 + i);
            }
            {
                struct M m;
                *(long *)&m = g_m;
                m.t = 9; m.e = &b;
                func_0024b540(10, 0, &m);
            }
        } else {
            func_0024b4b0(10, 0);
        }
        break;
    }
    }
    return 1;
}
