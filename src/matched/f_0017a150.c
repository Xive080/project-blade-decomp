/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_00142aa0(s32, s32);                        /* extern */
s32 func_00142ad0();                                /* extern */
s32 func_001a6410(s32, f32);                    /* extern */

void func(s32 arg0) {
    s32 var_s0;

    var_s0 = func_00142ad0();
    do {
        func_001a6410(var_s0, *(f32 *)0x70003FA8);
        var_s0 = func_00142aa0(arg0, var_s0);
    } while (var_s0 != 0);
}
