extern void func_00188ff0(s32);
struct S { char pad[0x84]; s32 a; s32 b; s32 c; s32 d; };
void func(struct S *p) {
    u32 i;
    func_00188ff0(p->a); p->a = 0;
    func_00188ff0(p->b); p->b = 0;
    if (p->c != 0) { func_00188ff0(p->c); p->c = 0; }
    for (i = 0; i < 3U; i++, p = (struct S *)((char *)p + 4)) {
        if (p->d != 0) { func_00188ff0(p->d); p->d = 0; }
    }
}
