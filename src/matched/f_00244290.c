struct S { char p0[12]; int c; char p1[0x24]; int *r; char p2[0x94]; int c2; int fl; char p3[0x308]; int q; };
extern void f1(int); extern void f2(void*); extern void f3(void*); extern void f4(void*);
extern int *f5(void); extern void f6(int);
void f(struct S *a) {
    if (a->r) {
        f1(a->r[9]);
        a->r[9] = 0;
        f2(a->r);
        a->r = 0;
    }
    if (a->fl & 0x20) {
        f3((char*)a + 992);
        f3((char*)a + 1108);
        f3((char*)a + 1224);
        f3((char*)a + 1340);
    }
    f4(a);
    ((void(**)(void*))f5())[1](a);
    f6(a->q);
    a->q = 0;
    a->c2 = 0;
    a->c = 0;
}
