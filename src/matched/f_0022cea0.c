void sub1(char *);
void sub2(char *);
struct S { char p0[0xc]; int a; char p1[0xbc]; int b; char p2[0x1638]; char e0[0x74]; char e1[0x74]; char e2[0x74]; char e3[0x74]; };
extern int G;
void f(struct S *p) {
    sub1(p->e0);
    sub2(p->e0);
    sub1(p->e1);
    sub2(p->e1);
    sub1(p->e2);
    sub2(p->e2);
    sub1(p->e3);
    sub2(p->e3);
    if (p->b) p->b = 0;
    p->a = 0;
    G = 0;
}
