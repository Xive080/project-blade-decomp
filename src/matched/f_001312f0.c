typedef struct E { int a0; int flags; int a8; int ac; int f10; int f14; int p18[3]; int f24; int f28; int f2c; int f30; int f34; int f38; int f3c; int f40; int f44; int f48; } E;
typedef struct R { int x; int y; int w; int h; } R;
extern E g_e[];
extern int g_414;
extern int g_630;
extern void func_00131050(float f);
extern int func_001c21a0(int);
extern int func_001c21c0(int);
extern void func_001c86c0(int, int, R *);
void func(int mode) {
    R r;
    int i;
    switch (mode) {
    case 0:
        func_00131050(1.0f);
        g_e[0].flags &= ~0x40;
        break;
    case 1:
        func_00131050(0.5f);
        g_e[0].flags &= ~0x40;
        break;
    case 2:
        if (g_630 & 1) r.h = 512; else r.h = 360;
        r.w = 640;
        r.x = 0;
        r.y = (512 - r.h) / 2;
        g_e[0].f10 |= 1;
        g_e[1].f10 &= ~1;
        func_001c86c0(func_001c21a0(g_e[0].f14), func_001c21a0(g_e[0].a0), &r);
        func_001c86c0(func_001c21c0(g_e[0].f14), func_001c21c0(g_e[0].a0), &r);
        g_e[0].flags |= 0x40;
        break;
    }
    for (i = 0; i < 2; i++) {
        g_e[i].f24 = 0;
        g_e[i].f28 = 0;
        g_e[i].f38 = 0;
        g_e[i + 1].a0 = 0x437f0000;
        g_e[i + 1].flags = 0x437f0000;
        g_e[i + 1].a8 = 0x437f0000;
        g_e[i].f3c = 0x41200000;
        g_e[i].f40 = 0x42b40000;
        g_e[i].f44 = 1;
        g_e[i].f48 = 0;
        g_e[i + 1].ac = 0;
    }
    g_414 = 0;
}
