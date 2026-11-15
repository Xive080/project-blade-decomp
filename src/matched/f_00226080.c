#pragma mpwc_relax on
s32 func_00234ff0(void);
void func_00243090(void);
extern s32 D_002E6700[];
struct V { s32 (*f[7])(void *, s32); };
struct O { struct V *vt; char pad[60]; s32 a; s32 b; };
void func(struct O *o) {
    s32 i, r, t;
    s32 *p;
    func_00243090();
    p = D_002E6700;
    for (i = 0; i < 6; i++, p++) {
        r = i + func_00234ff0() % 6;
        if (r >= 6) r -= 6;
        t = D_002E6700[r];
        D_002E6700[r] = *p;
        *p = t;
    }
    o->a = 0;
    o->b = 0;
    o->vt->f[6](o, 8);
}
