struct G { char pad[0x134]; void (*f)(s32); };
struct I { char pad[0x24]; s32 f24; };
struct S { char pad[12]; struct I *p; s32 f10; char pad2[0x278]; s32 f28c; };
extern char D_0032A620[];
void func_00180450(s32);
void func(struct S *a) {
    struct I *p = a->p;
    if (p) {
        if (p->f24) {
            ((struct G *)D_0032A620)->f(p->f24);
            a->p->f24 = 0;
        }
        ((struct G *)D_0032A620)->f((s32)a->p);
        a->p = 0;
    }
    if (a->f10) {
        func_00180450(a->f10);
        a->f10 = 0;
    }
    if (a->f28c) {
        func_00180450(a->f28c);
        a->f28c = 0;
    }
}
