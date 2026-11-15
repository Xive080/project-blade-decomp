extern void f188ff0(int);
struct S { char pad[0x84]; int a[22]; };
void func(struct S *p) {
    int i;
    f188ff0(p->a[0]);f188ff0(p->a[1]);f188ff0(p->a[2]);f188ff0(p->a[3]);
    p->a[0]=0;p->a[1]=0;p->a[2]=0;p->a[3]=0;
    for (i = 0; i < 18; i++, p = (struct S*)((char*)p+4)) { f188ff0(p->a[4]); p->a[4]=0; }
}
