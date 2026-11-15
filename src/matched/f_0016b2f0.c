struct G { int a; int pad[10]; int h; int r; int s; };
extern struct G g;
extern int g1;
extern int g2;
extern int func_00109bd0(void);
extern int func_0022b8b0(void *, int, void *);
extern char cb[];
int f(void) {
    g.a = 0;
    g.s = 0;
    g.r = -1;
    g1 = func_00109bd0();
    g.h = func_0022b8b0(cb, 5, &g);
    if (g.h == 0) return 0;
    g2 = 1;
    return 1;
}
