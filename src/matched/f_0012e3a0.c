struct C { int w; unsigned char r, g, b; };
struct O { char p0[16]; int fl; char p1[28]; int *e30; char p2[128]; int b4; };
extern char D0[];
extern float G1[], G2[];
extern float gf;
extern void func_0017a2c0(void);
extern void func_0012e8d0(int, void *, int);
extern void *func_00142ad0(int);
extern void *func_00142aa0(int, void *);
extern void func_00221820(int, float);
int func(struct O *o) {
    struct C c;
    void *s1;
    if (o->fl & 4) { o->fl = o->fl & ~4; func_0017a2c0(); }
    c.w = (int)o->e30;
    c.r = 255; c.g = 255; c.b = 0;
    func_0012e8d0(3, &c, 0);
    s1 = func_00142ad0(o->b4);
    if (!(G1[0] <= 0.0f)) func_0012e8d0(5, s1, 0);
    if (!(G1[8] <= 0.0f)) func_0012e8d0(5, func_00142aa0(o->b4, s1), 0);
    if (!(gf <= 0.0f)) func_00221820(o->e30[1], gf);
    return 1;
}
