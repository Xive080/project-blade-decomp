struct VT { int p0[3]; void (*f3)(void *); int p4[4]; void (*f8)(void *); };
struct Q { struct VT *vt; };
struct M { int p0[3]; struct VT *vt; };
struct P { int p0[3]; struct VT *o; char pad[44]; int k; };
struct E { float f; char pad[444]; };
extern int gs, gb, gc, gd, ge;
extern struct { unsigned char b; char pad[0x2000]; } D_002fa61f;
extern char D_002fa610[];
extern struct { int v; char pad[0x2000]; } D_002fa42c;
extern int D_002faab00[];
extern struct E D_002fa8f0[];
extern int func_0016b090(void);
extern void func_00174380(int);
extern void func_00178480(void *);
extern void func_001a9a40(int, int);
extern void func_00133120(int);
extern void func_00132a00(void);
extern void func_00170ba0(void);
extern void func_00178800(void);
extern void func_001784a0(int);
int f(void) {
    int idx;
    if (gs != 9) {
        if (func_0016b090() != 0) return 1;
        switch (gs) {
        case 0: {
            int s0 = D_002fa61f.b;
            func_00178480(D_002fa610);
            func_00174380(0);
            func_00174380(1);
            if (s0 == D_002fa61f.b) {
                func_001a9a40(-1, 0);
                (*(struct Q **)0x70003fd4)->vt->f8(*(struct Q **)0x70003fd4);
                func_001a9a40(-1, 1);
                gb = 1;
            } else {
                D_002fa42c.v = 1;
                func_00133120(3);
            }
            break;
        }
        case 3:
            func_00174380(0);
            func_00174380(1);
            func_00132a00();
            gb = 1;
            func_00170ba0();
            D_002fa42c.v = 1;
            func_00133120(1);
            break;
        }
        return 1;
    }
    {
        struct P *p;
        func_00178800();
        p = (*(struct P **)0x70003fe0);
        if (p->k == 4) p->o->f3(p);
        switch (gc) {
        case 3:
        case 4: idx = 1; break;
        default: idx = 0; break;
        }
        if (gd == 0) {
            if (D_002faab00[idx] == 1) {
float z = 0.0f; float t = D_002fa8f0[idx].f;
                if (t != z) {
                    if (ge != 0) { gd = 1; func_001784a0(5); }
                    ge = 0;
                } else {
                    ge = 1;
                }
            }
        }
        return 1;
    }
}
