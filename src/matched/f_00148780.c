#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#define NULL 0
s32 func_00148320(s32, s32 *);                      /* extern */
s32 func_00148620(s32 *);                       /* extern */
extern s32 D_0032A620;

s32 *func(s32 arg0) {
    s32 *temp_v0;
    s32 *var_v0;

    temp_v0 = M2C_FIELD(&D_0032A620, s32 *(**)(s32), 0x130)(0x24);
    if (temp_v0 == NULL) {
        return NULL;
    }
    if (arg0 == 0) {
        return NULL;
    }
    var_v0 = temp_v0;
    if (func_00148320(arg0, temp_v0) == 0) {
        if (temp_v0 != NULL) {
            if (!(*temp_v0 & 8)) {
                func_00148620(temp_v0);
            }
            M2C_FIELD(&D_0032A620, s32 (**)(s32 *), 0x134)(temp_v0);
        }
        var_v0 = NULL;
    }
    return var_v0;
}
