struct S { int p0; unsigned flags; char pad[0x148]; float f; int p4; int i; char pad2[0x5b0-0x15c]; };
extern char base[];
extern void f_002432e0(void);
extern void f_00242960(void);
int f_00227390(int *a) {
    struct S *g;
    int v;
    f_002432e0();
    switch (a[3]) {
    case 4:
        g = (struct S*)base;
        if (g[0].i == 0 && g[1].i == 0 && !(g[0].flags & 0x6000)) {
            if (g[0].f != g[1].f) {
                if (g[0].f > g[1].f) v = 0; else v = 1;
                g[v].flags |= 0x2000;
                g[v ^ 1].flags |= 0x4000;
            } else {
                g[0].flags |= 0x4000;
                g[1].flags |= 0x4000;
            }
            f_00242960();
        }
        break;
    default:
        break;
    }
    return 1;
}
