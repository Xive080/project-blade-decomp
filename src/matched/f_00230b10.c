void D(void);
struct B { int h; char pad[28]; int r; };
struct S { char p0[8]; int z; char pad[264]; struct B b; };
int g(int, int *, void (*)(void), struct S *);
void func(int a0, struct S *s) {
    int t[13];
    struct B *q = &s->b;
    t[8] = 0x3E800000;
    t[9] = 0;
    t[10] = 1;
    t[11] = 0;
    t[12] = 0;
    t[0] = 9;
    t[1] = 0xC3555555;
    t[2] = 0;
    t[5] = 0x38D1B717;
    t[7] = 0;
    q->r = g(q->h, t, D, s);
    s->z = 0;
}
