/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#define NULL 0
s32 func_001450e0(s32 *, s32);                  /* extern */
s32 func_00147b70(s32 *, s32);                      /* extern */
s32 func_00147e20();                                /* extern */

s32 func(s32 *arg0) {
    s32 var_s0;

    if ((arg0 == NULL) || !(*arg0 & 6)) {
        return 0;
    }
    var_s0 = func_00147e20();
    if (var_s0 != 0) {
        do {
            func_001450e0(arg0, var_s0);
            var_s0 = func_00147b70(arg0, var_s0);
        } while (var_s0 != 0);
    }
    return 1;
}
