typedef unsigned __int128 Q;
extern int f13(int, int);
extern int f19(int *, int, int);
extern int f1a(char *, int, int);
extern int f1b(void);
extern int f24(int, int, void *);
extern int G8328;
extern long G84D8;
extern int G851C;
extern struct { int v; char pad[12]; } D15;
struct S { int w[14]; };
extern struct S D80;
struct O { int p0; int fl; int a; int b; int c; int *d; int e; };
struct A { int n; void *p; };
int f(struct O *o, int x, int y) {
    switch (x) {
    case 0:
        o->a = f13(G8328, 0);
        o->b = 0;
        o->d = &D15.v;
        o->c = 1;
        o->e = 0;
        o->fl = 0;
        f19(&D15.v, 5, 3);
        o->fl |= 0xa;
        break;
    case 9:
        if (f1b() == 0) return 1;
        break;
    case 3: {
        struct S s;
        struct A a;
        s = D80;
        G851C = 0;
        s.w[5] = f13(G8328, 298);
        *(long *)&a = G84D8;
        a.n = 2;
        a.p = &s;
        f24(10, 0, &a);
        break;
    }
    }
    return f1a((char *)o, x, y);
}
