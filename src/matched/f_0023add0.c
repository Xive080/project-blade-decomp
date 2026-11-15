struct Q { float a, b, c, d; };
struct A { int type; float f; float half; int z0; int z1; float m; float c; struct Q v; int a0; int a1; float r; int pad[6]; };
struct B { int k; float e; int p[5]; int z; float one; int z1; int eight; int one2; int z2; };
struct G { char pad[0x28]; int x28; };
struct H { char pad[0x14]; int x14; };
struct O { char pad[0x1c]; unsigned short h; char p2[2]; char s20[8]; float f28; int i2c; int fl; int i34; int i38; int i3c; int i40; };
extern char V[];
extern int g1;
extern struct G *g2;
extern int f1(char *, float);
extern int f2(int, int);
extern float f3(int, int, int);
extern int f4(struct A *, int, int, unsigned short);
extern int f5(int, struct B *, int, int);
extern int f6(struct O *, int);
void func(struct O *o) {
    float f;
    struct A a;
    struct B b;
    o->i34 = f1(o->s20, o->f28);
    if (o->fl & 2) f = 0.5f;
    else if (o->fl & 1) f = 1.0f;
    else f = 0.0f;
    {
        int v = f2(g1, o->i2c);
        int x = g2->x28;
        a.type = 2;
        a.f = f;
        a.half = 0.5f;
        a.z0 = 0;
        a.z1 = 0;
        a.a0 = x;
        a.a1 = v;
        a.r = f3(x, v, 2);
        a.m = 24.0f * a.r;
        a.c = 24.0f;
        a.v = *(struct Q *)V;
    }
    o->i38 = f4(&a, ((struct H *)g2)->x14, o->i34, *(volatile unsigned short *)&o->h);
    if (o->fl & 4) {
        b.one = 1.0f;
        b.z1 = 0;
        b.eight = 8;
        b.one2 = 1;
        b.z2 = 0;
        b.k = 5;
        b.e = 0.0001f;
        b.z = 0;
        o->i3c = f5(o->i34, &b, 0, 0);
    } else o->i3c = 0;
    if (o->fl & 8) {
        o->i40 = f6(o, 0);
    } else o->i40 = 0;
}
