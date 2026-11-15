struct P { s32 t; float a; s32 pad[5]; s32 n; float x; float y; s32 z0; s32 z1; s32 z2; };
struct O { char p[0x40]; s32 h; s32 r; };
extern s32 f1(s32, s32, s32);
extern s32 f2(s32, struct P *, char *, s32 *);
extern char D[];
void f(struct O *o, float a, float x, float y) {
    struct P p;
    if (o->r) f1(o->h, o->r, 0);
    p.x = x; p.y = y; p.z0 = 0; p.z1 = 0; p.z2 = 0;
    p.t = 14; p.a = -a; p.n = 1;
    o->r = f2(o->h, &p, D, (s32*)((char*)o+68));
}
