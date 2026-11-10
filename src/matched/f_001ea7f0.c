extern void func_001c8500(s32);

struct S {
    s32 unk0;
    s32 unk4;
};

extern struct S g_unk_00188DC0;

void func(void) {
    s32 *gp_base = (s32 *)&g_unk_00188DC0;
    s32 *s0 = gp_base;
    s32 a0 = s0[0];
    if (a0 != 0) {
        func_001c8500(a0);
        s0[0] = 0;
    }
    a0 = s0[1];
    if (a0 != 0) {
        func_001c8500(a0);
        s0[1] = 0;
    }
}
