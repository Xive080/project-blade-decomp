struct P { int a; int b; int c; float d; int e; float f; int g; float v[4]; int h; int i; float j; int pad[4]; };
struct O { char pad[0x28]; int w; int x; char pad2[0x54]; int h84; int h88; char pad3[0x14]; int t[1]; };
struct G { int a; int b; };
extern struct G *G_89F0;
struct S4 { float a,b,c,d; };
extern char D_002E06A0[];
extern char D_002E06E0[];
extern void func_00188ff0(int);
extern float func_00182e50(int, int);
extern int func_00189050(struct P *, int, int, int);
void f(char *arg0, int arg1) {
    struct P p;
    int t = *(int*)(arg0 + 0x84);
    if (t != 0) {
        func_00188ff0(t);
        *(int*)(arg0 + 0x84) = 0;
        func_00188ff0(*(int*)(arg0 + 0x88));
        *(int*)(arg0 + 0x88) = 0;
    }
    {
    float dd = *(float*)(arg0 + 0xb0);
    int a1 = *(int*)((arg1 << 2) + (int)arg0 + 0xa0);
    int a0 = G_89F0->b;
    float r;
    p.a = 2;
    p.b = 0x3f000000;
    p.c = 0x3f000000;
    p.d = dd;
    p.e = 0;
    p.h = a0;
    p.i = a1;
    r = func_00182e50(a0, a1);
    *(volatile float*)&p.j = r; 
    p.f = 24.0f * p.j;
    p.g = 0x41c00000;
    *(struct S4*)p.v = *(struct S4*)D_002E06A0;
    *(int*)(arg0 + 0x84) = func_00189050(&p, G_89F0->a, *(int*)(arg0 + 0x28), *(int*)(arg0 + 0x2c) + 1);
    *(struct S4*)p.v = *(struct S4*)D_002E06E0;
    *(int*)(arg0 + 0x88) = func_00189050(&p, G_89F0->a, *(int*)(arg0 + 0x28), *(int*)(arg0 + 0x2c));
    }
}
