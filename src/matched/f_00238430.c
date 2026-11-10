struct B { char pad[0x2850]; s32 x; char rest[0x74D4 - 0x2854]; };
struct S { s32 on; char a[0x5704]; struct B b; s32 xcbdc; };
extern void func_0011ec80(void *, s32, s32);
extern void func_00238bc0(void *);
extern void func_0023a700(s32, void *);
void func(struct S *p) {
    if (p->on != 0) {
        func_00238bc0(p->a);
        func_0023a700(p->xcbdc, &p->b);
        func_0011ec80(p->a, 0, 0x5704);
        func_0011ec80(&p->b, 0, 0x74D4);
        p->b.x = 0;
        p->on = 0;
    }
}
