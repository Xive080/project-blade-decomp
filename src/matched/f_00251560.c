struct L { int a, b; float c; char pad[16]; int d; int e, f, g, h, i; };
struct W { char p[184]; float v; };
struct O { char p[132]; int h; char q[60]; int c; };
extern struct W *G;
extern char D[];
extern void f1(int, int, int);
extern int f2(int, struct L *, char *, struct O *);
void func(struct O *o, int x) {
    struct L l;
    if (x == 0) {
        if (o->h != 0) {
            if (o->c != 0) {
                f1(o->h, o->c, 1);
            }
            l.e = 0x3D6C4EC5;
            l.f = 0;
            l.g = 0;
            l.h = 0;
            l.i = 0;
            {
            float t = -(((G->v - 10.0f) - 4.0f) / 27.0f);
            l.a = 0;
            l.b = 0;
            l.c = t;
            }
            l.d = 0;
            o->c = f2(o->h, &l, D, o);
        }
    }
}
