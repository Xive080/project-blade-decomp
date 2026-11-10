/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
extern s32 D_00242A10;
extern s32 D_00242B20;
extern s32 D_00242E00;
extern s32 D_00243090;
extern s32 D_00243130;
extern s32 D_00243140;
extern s32 D_00243200;
extern s32 D_00243230;
extern s32 D_00243290;
extern s32 D_002432E0;
extern s32 *D_00332AC0;
extern s32 *D_00332AC4;
extern s32 *D_00332AC8;
extern s32 *D_00332ACC;
extern s32 *D_00332AD0;
extern s32 *D_00332AD4;
extern s32 *D_00332AD8;
extern s32 *D_00332ADC;
extern s32 *D_00332AE0;
extern s32 *D_00332AE4;

s32 func(void) {
    D_00332AC0 = &D_00243090;
    D_00332AC8 = &D_002432E0;
    D_00332ACC = &D_00243130;
    D_00332AD0 = &D_00243230;
    D_00332AD4 = &D_00243200;
    D_00332ADC = &D_00243290;
    D_00332AE4 = &D_00243140;
    D_00332AC4 = &D_00242B20;
    D_00332AD8 = &D_00242E00;
    D_00332AE0 = &D_00242A10;
    return 1;
}
