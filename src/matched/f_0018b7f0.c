struct E { char p0[8]; float f8; int fc; char p10[8]; int f18; char p1c[36]; };
struct G { int a; int b; char pad[8]; struct E e[512]; int x; char p2[0x600]; int y; char p3[0x228]; int z; };
extern struct G g;
extern struct { int v; char pad[12]; } D2_;
#define D2FA43C (D2_.v)
extern int G84A4;
extern float fa(void); extern int fb(void); extern int fc(void); extern void fd(int); extern void fe(int,int); extern void ff(int,int); extern void fg(int,int);
int f(void) {
    int i; struct E *p; int t;
    g.a = 0; g.b = 0; g.x = 0; g.y = 0;
    p = g.e;
    for (i = 0; i < 512; i++) {
        p->f8 = fa();
        p->f18 = 0x3F866666;
        p->fc = 0x3F866666;
        p++;
    }
    t = fb();
    g.z = fc();
    fd(t);
    fe(g.z, t);
    ff(g.z, D2FA43C);
    fg(g.z, 0);
    G84A4 = 0;
    return 1;
}
