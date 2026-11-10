/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_0016b090();                                /* extern */
s32 func_00178760();                            /* extern */
s32 func_002605d0();                            /* extern */

s32 func(void) {
    func_00178760();
    if (func_0016b090() != 0) {
        func_002605d0();
    }
    return 1;
}
