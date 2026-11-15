struct P { char pad[0xa0]; float w; };
extern struct P *G;
struct R { int a; float b; int z0; int z1; int z2; float c; int d; };
extern char V[];
struct T4 { float a, b, c, d; };
struct O { char pad[0x28]; int x; int y; char pad2[0x54]; int r; };
struct O;
extern void f24b410(struct O *, float, float, int);
extern int f189050(void *, int, int, int);
void f(struct O *o) {
    float t;
    struct { int a; float b; int c; int d; int e; float f; int g; struct T4 v; int pad[8]; } s;
    t = 640.0f - G->w;
    f24b410(o, G->w + 0.5f * t, 0.0f, 0);
    s.a = 7;
    s.b = 0.5f;
    s.c = 0;
    s.d = 0;
    s.e = 0;
    s.f = t;
    s.g = 0x43e00000;
    s.v = *(struct T4 *)V;
    o->r = f189050(&s, *(int *)G, o->x, o->y);
}
