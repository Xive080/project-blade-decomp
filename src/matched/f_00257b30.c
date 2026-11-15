struct V { void *p0; void (*f)(void *); };
extern struct G { char pad[0x23c]; struct V *vt; char pad2[0xb4 - 0x40]; f32 t; } D_00333260;
u32 func_00256438(f32);
void func_001785a0(s32);
void func(f32 dt) {
    u32 i;
    u32 k;
    s32 *p;
    D_00333260.t = D_00333260.t + dt;
    if (D_00333260.vt != 0) D_00333260.vt->f(D_00333260.vt);
    i = func_00256438(D_00333260.t / 0.2f);
    if (i < 14U) {
        p = (s32 *)&D_00333260.pad[i * 4];
        for (k = 0; k < 2U; k++) {
            if (p[0x244 / 4] < 14) {
                func_001785a0(p[0x244 / 4]);
                p[0x244 / 4] = 14;
            }
            p = (s32 *)((char *)p + 0x38);
        }
    }
}
