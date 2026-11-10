/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_001c24e0(s32, s32);                /* extern */
s32 func_001c2510(s32);                             /* extern */
s32 func_001c2520(s32);                         /* extern */
s32 func_001c36f0(s32);                         /* extern */
extern s32 G_8350;
extern s32 G_8360;

void func(void) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 temp_v0_2;

    temp_s0 = G_8350;
    if (temp_s0 != 0) {
        temp_v0 = func_001c2510(temp_s0);
        if (temp_v0 != 0) {
            func_001c36f0(temp_v0);
            func_001c24e0(temp_s0, 0);
        }
        func_001c2520(temp_s0);
    }
    temp_s0_2 = G_8360;
    if (temp_s0_2 != 0) {
        temp_v0_2 = func_001c2510(temp_s0_2);
        if (temp_v0_2 != 0) {
            func_001c36f0(temp_v0_2);
            func_001c24e0(temp_s0_2, 0);
        }
        func_001c2520(temp_s0_2);
    }
}
