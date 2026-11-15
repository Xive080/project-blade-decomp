struct E { float x; float y; s32 k; s32 z; };
struct P { s32 t; float a; float b; s32 pad[4]; s32 n; struct E e[2]; };
struct O { char p[0x40]; s32 h; char q[4]; s32 r; };
extern s32 f1(s32, s32, s32);
extern s32 f2(s32, struct P *, char *, s32 *);
extern char D[];
void f(struct O *o, float x, float y) {
    struct P p;
    if (o->r) f1(o->h, o->r, 0);
    p.e[0].x = x; p.e[0].y = y; p.e[0].k = 2; p.e[0].z = 0;
    p.e[1].x = x; p.e[1].y = y; p.e[1].k = 11; p.e[1].z = 0;
    p.t = 17; p.a = 1.5f; p.b = 1.5f; p.n = 1;
    o->r = f2(o->h, &p, D, (s32*)((char*)o+72));
}
