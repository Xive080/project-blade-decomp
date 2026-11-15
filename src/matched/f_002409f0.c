extern void f189520(int, int, int);
extern int f1895d0(int, void *, void *, void *);
extern void f230d10(void *, int);
extern char D2414B0[];

struct O { char pad0[48]; int fl; int c34; int c38; char pad1[8]; int c44; int c48; float f4c; float f50; float f54; int c58; int c5c; };
struct A { int a0; float f4; float f8; int c; };

void func(struct O *o, int k, struct A *a) {
    struct { int x30; int x34; int pad[5]; int x4c; int x50; int x54; int x58; int x5c; int x60; } s;
    int t;
    struct O *p;
    struct A *q;
    float fl;
    int v;
    p = (struct O *)(int)o;
    switch (k) {
    case 14:
    v = a->a0;
    q = (struct A *)(int)a;
    if (v == 0) {
        if (p->c5c != 0) {
            if (p->c34 != 0) {
                p->c44 = 0;
                p->c5c = 0;
                s.x50 = 0x3EA8F5C3;
                s.x54 = 0;
                s.x58 = 1;
                s.x5c = 0;
                s.x60 = 0;
                s.x30 = 5;
                s.x34 = 0x38D1B717;
                s.x4c = 0;
                t = p->c38;
                if (t != 0) f189520(p->c34, t, 0);
                p->c38 = f1895d0(p->c34, &s, D2414B0, p);
            }
            if (!(p->fl & 1)) f230d10(p, 1);
        }
        if (q->c != 0 && !(p->fl & 1)) f230d10(p, 3);
    } else {
        p->c48 = v;
        p->f50 = q->f4;
        fl = q->f8;
        p->f4c = fl;
        p->f54 = fl;
        p->c58 = 0x3F400000;
    }
    break;
    default: break;
    }
}
