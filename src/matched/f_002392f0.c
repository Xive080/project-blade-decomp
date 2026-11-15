struct A { char pad[0x14]; s32 a; s32 b; char y[28]; };
struct B { s32 v; s32 *p; };
extern void func_0011ec80(void *, s32, s32);
extern void func_00239590(void *, void *);
s32 func(struct A *a, struct B *b) {
    func_0011ec80(&a->a, 0, 36);
    a->a = *b->p;
    a->b = b->v;
    func_0011ec80(a->y, 0, 28);
    func_00239590(a->y, b);
    return 1;
}
