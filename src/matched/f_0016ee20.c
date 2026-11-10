/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_00131540(s32, s32);            /* extern */
extern s32 D_00306044;
extern s32 D_0030604C;
extern s32 D_00306050;

void func(s32 arg0, s32 arg1) {
    if (arg1 == 0) {
        func_00131540(0, 0);
        switch (arg0) {                             /* irregular */
        case 4:
            D_00306044 = 1;
            D_0030604C = 0;
            D_00306050 = 0x48;
            return;
        case 1:
            /* fallthrough */
        case 5:
            D_00306044 = 6;
            break;
        }
    }
}
