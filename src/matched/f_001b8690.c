extern volatile s32 D_00329760;
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
extern volatile s32 D_00329758;
extern volatile s32 D_0032975C;

s32 func(s32 arg0, s32 arg1) {
    D_00329758 = 0;
    D_0032975C = arg0;
    D_00329760 = arg1;
    return 1;
}
