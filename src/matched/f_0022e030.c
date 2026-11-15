struct S { int a; float b; int c; int p3; int p4; float f; int p6; int h; float d; float e; int g; int i; int j; };
struct C { char pad[0x154]; float f; unsigned n; };
extern void f188ff0(int);
extern void f189520(int, int, int);
extern int f1895d0(int, struct S*, void*, char*);
extern void f22fc20(void);
extern void f231450(int, float, float);
extern void f231500(int, float, float, float);
extern char D22E2E0[];
extern char D22EE60[];
extern int D3319D0[];

void func(char *a) {
    struct S s;
    unsigned n;
    char *e;
    struct C *c;
    char *t;
    float w;
    float f20;
    int v;
    float *q;
    struct S *p;
    int *r;
    c = *(struct C**)(a + 0x34);
    if (!(*(int*)(a + 0x2c) & 4)) f22fc20();
    n = c->n;
    if (n > 3) n = 3;
    f20 = (0.25f * (float)n) / 3.0f;
    if (*(int*)(a + 0x2c) & 1) w = 300.0f; else w = -300.0f;
    s.a = 9;
    q = &s.b;
    *q = w;
    r = &s.h;
    s.c = 0;
    s.f = 0.0001f;
    *r = 0;
    if (n != 0) {
        do {
            v = *(int*)(a + 0xf4);
            t = a + v * 0x28;
            *(int*)(a + 0xf4) = D3319D0[v];
            e = t + 0x54;
            if (*(int*)(t + 0x70) != 0) f189520(*(int*)e, *(int*)(t + 0x70), 1);
            p = (struct S*)((char*)&s + 0);
            f20 -= 0.083333336f;
            s.d = 0.25f;
            s.e = f20;
            s.g = 1;
            s.i = 0;
            s.j = 0;
            *(int*)(e + 0x1c) = f1895d0(*(int*)e, p, D22EE60, e);
        } while (--n != 0);
    }
    s.d = 0.25f;
    s.e = f20;
    s.g = 1;
    s.i = 0;
    s.j = 0;
    s.a = 5;
    *q = 0.0001f;
    *r = 0;
    *(int*)(a + 0x44) = f1895d0(*(int*)(a + 0x40), (struct S*)((char*)&s + 0), D22E2E0, a);
    e = a + 0xf8;
    f188ff0(*(int*)(a + 0xfc));
    *(int*)(e + 4) = 0;
    *(int*)(e + 0x14) = 0;
    if (*(int*)(e + 0xc) != 0) {
        f188ff0(*(int*)(e + 0xc));
        *(int*)(e + 0xc) = 0;
        *(int*)(e + 0x18) = 0;
    }
    if (*(int*)(a + 0x3c) != 0) {
        f231500(*(int*)(a + 0x3c), c->f * (float)c->n, 0.5f, 2.25f);
        f231450(*(int*)(a + 0x3c), 0.5f, 2.75f);
    }
}
