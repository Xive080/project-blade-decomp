#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
extern volatile s32 D_002E3240;
extern volatile s32 D_002E3244;
extern volatile s32 D_002E3248;
extern volatile s32 D_002E324C;
extern volatile s32 D_002E3250;
extern volatile s32 D_002E3254;
extern volatile s32 D_002E3264;
extern volatile s32 D_002E3268;
extern volatile s32 D_002E326C;
extern volatile s32 D_002E3600;
extern volatile s32 D_002E3604;
extern volatile s32 D_002E361C;
extern volatile s32 D_002E3630;
extern volatile s32 D_002E3634;
extern volatile s32 D_0032A620;

s32 func(s32 arg0) {
    D_002E3240 = 2;
    D_002E3254 = 0x19000;
    D_002E3244 = M2C_FIELD(&D_0032A620, s32 (**)(s32), 0x130)(D_002E3254);
    D_002E3248 = D_002E3244;
    D_002E324C = D_002E3244;
    D_002E3250 = D_002E3244;
    D_002E3268 = 0;
    D_002E326C = 0;
    D_002E3604 = arg0;
    D_002E3630 = 0;
    D_002E3634 = 0;
    D_002E3264 = 0;
    D_002E3600 = 0x29;
    D_002E361C = 0;
    return 1;
}
