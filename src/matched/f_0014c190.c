/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_0011ec80(s32 *, s32, s32); /* extern */
s32 func_00170690(s32, s32 **, s32, s32); /* extern */
extern s32 D_0014C280;
extern s32 D_0014CF50;
extern s32 D_0014CF90;
extern s32 D_0014D0F0;
extern s32 D_0014D130;
extern s32 D_00151D90;
extern s32 D_00153580;
extern s32 D_00153E10;
extern s32 D_00154D80;
extern s32 D_001552A0;
extern s32 D_003034D0;
extern s32 *D_00303E20;
extern s32 *D_00303E24;
extern s32 *D_00303E28;
extern s32 *D_00303E2C;
extern s32 *D_00303E30;
extern s32 *D_00303E34;
extern s32 *D_00303E38;
extern s32 *D_00303E3C;
extern s32 *D_00303E48;
extern s32 *D_00303E4C;

s32 func(void) {
    D_00303E20 = &D_001552A0;
    D_00303E24 = &D_00154D80;
    D_00303E28 = &D_00153E10;
    D_00303E30 = &D_00153580;
    D_00303E34 = &D_00151D90;
    D_00303E2C = &D_0014D130;
    D_00303E38 = &D_0014D0F0;
    D_00303E3C = &D_0014CF90;
    D_00303E48 = &D_0014CF50;
    D_00303E4C = &D_0014C280;
    func_0011ec80(&D_003034D0, 0, 0x948);
    func_00170690(0x10000, &D_00303E20, 0xEB70, 0xC);
    return 1;
}
