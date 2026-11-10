#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#define NULL 0
s32 func_0012b630(s32, s8 *);                 /* extern */
s32 func_0012b6e0(s8 *);                      /* extern */
extern s32 D_70003FD8;

s32 func(s8 *arg0, s32 arg1) {
    s32 temp_v1;

    if (arg0 == NULL) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = arg1;
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x3C);
    switch (temp_v1) {                              /* irregular */
    case 0:
        func_0012b6e0(arg0);
        break;
    case 1:
        func_0012b630(D_70003FD8, arg0);
        break;
    }
    return 1;
}
