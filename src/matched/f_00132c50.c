struct V { char p[16]; void (*f)(void *, int, void *); };
struct P { struct V *vt; };
extern int A0; extern volatile int A1; extern volatile int A2; extern volatile int A3; extern volatile int A4; extern volatile int A5; extern volatile int A6; extern volatile int A7;

void func(int a) {
    int t; int u;
    struct P *o;
    t = 0;
    o = *(struct P **)0x70003FD4;
    o->vt->f(o, 2, &t);
    if (A0 != a || A0 == -1 || A2 != t) {
        u = t;
        A0 = a;
        A1 = 8;
        A2 = u;
        A3 = 1;
        A4 = 1;
        A5 = 0xBF800000;
        A6 = 0;
        A7 = 1;
    }
}
