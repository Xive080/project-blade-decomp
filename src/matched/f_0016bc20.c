#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#pragma mpwc_relax on
#define NULL 0
s32 func_0011ec80(s8 *, s32, s32);
s32 *func_00204350(s32);
extern s32 D_0032A620;

s8 *func(s32 arg0, s32 *arg1, s32 arg2) {
    s8 *o;
    s8 *(**al)(s32);
    s32 n;

    if (arg0 != 0 || arg1 != NULL) {
        if (!(arg0 != 0 && arg1 != NULL) && arg2 > 0) goto go;
    }
    return NULL;
go:
    al = (s8 *(**)(s32))((s8 *)&D_0032A620 + 0x130);
    o = (*al)(0x1C);
    if (o == NULL) return NULL;
    M2C_FIELD(o, s32 *, 0) = arg0;
    if (arg0 != 0) {
        M2C_FIELD(o, s32 **, 4) = func_00204350(arg0);
    } else {
        M2C_FIELD(o, s32 **, 4) = arg1;
        M2C_FIELD(o, s32 *, 8) = *arg1;
    }
    M2C_FIELD(o, s32 *, 0xC) = arg2;
    n = arg2 * 8;
    M2C_FIELD(o, s8 **, 0x10) = (*al)(n);
    M2C_FIELD(o, s32 *, 0x14) = 0;
    M2C_FIELD(o, s32 *, 0x18) = 0;
    if (M2C_FIELD(o, s8 **, 0x10) == NULL) {
        M2C_FIELD(&D_0032A620, s32 (**)(s8 *), 0x134)(o);
        return NULL;
    }
    func_0011ec80(M2C_FIELD(o, s8 **, 0x10), 0, n);
    return o;
}
