struct S { s32 on; char a[4]; };
extern s32 func_00238a40(void *, s32);
extern void func_00238aa0(void *, s32, s32);
void func(struct S *p) {
    if (p->on != 0 && func_00238a40(p->a, 0) != 1) {
        func_00238aa0(p->a, 0, 1);
    }
}
