struct S { char pad[0x30]; s32 x; };
extern void func_00148830(s32);
s32 func(struct S *p) {
    func_00148830(p->x);
    p->x = 0;
    return 1;
}
