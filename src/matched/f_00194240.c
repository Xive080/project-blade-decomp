#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#define NULL 0
s32 func_00121a58(s8 *, s32);                   /* extern */
extern s32 G_84B8;

s8 *func(s8 *arg0, s32 arg1, s8 *arg2) {
    *arg2 = 0;
    if ((G_84B8 == 0) || (M2C_FIELD(arg0, s32 *, 0x1E4) == 0)) {
        return NULL;
    }
    if (arg1 != 0) {
        func_00121a58(arg2, arg1 + 0x428);
    }
    return arg2;
}
