struct S { char pad[12]; int k; };
extern void func_00244fc0(struct S *);
extern void func_002432e0(struct S *, int);
void f(struct S *o, int b) {
    if (o->k == 8 && *(int *)0x70003FC8 != 7)
        func_00244fc0(o);
    func_002432e0(o, b);
}
