struct B { char p0[12]; int f12; int f16; int f20; };
struct A { char p0[132]; struct B *b; char p1[48]; int c184; char p2[8]; int c196; int c200; };
void f(int x, struct A *a) {
    a->c196 = 0;
    a->c200 = a->c200 + 1;
    if (a->c200 == a->c184) {
        struct B *b = a->b;
        b->f16 = 0;
        b->f20 = 0;
        b->f12 = b->f12 | 1;
        a->c200 = 0;
    }
}
