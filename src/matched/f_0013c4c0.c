#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_00132150();                            /* extern */
s32 func_00132160(s32, s32, s32);           /* extern */
extern s32 D_002FA610;
extern s32 D_002FA614;
extern s32 D_002FA618;

void func(void *arg0) {
    s32 temp_a2;
    s32 var_a1;

    temp_a2 = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (temp_a2 | 0x10000);
    if (D_002FA610 != 3) {
        if (M2C_FIELD(arg0, s32 *, 0) == 0) {
            var_a1 = D_002FA614;
        } else {
            var_a1 = D_002FA618;
        }
        func_00132160(0x15, var_a1, temp_a2);
        func_00132150();
    }
}
