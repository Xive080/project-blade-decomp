#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#pragma mpwc_relax on
s32 func_0013b550(s32, s32);                    /* extern */
s32 func_00195a90(s32 *, s32);          /* extern */
s32 func_001a0540(s8 *, s32, s32);            /* extern */
s32 func_001b86b0(s32);                     /* extern */
extern struct { s32 v; char pad[12]; } D_00316320_;
#define D_00316320 (D_00316320_.v)
extern s32 G_8328;
extern s32 G_8508;

void func(s8 *arg0, s32 arg1, s32 arg2) {
    switch (arg1) {                                 /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 8) = func_0013b550(G_8328, 0x27);
        M2C_FIELD(arg0, s32 *, 0xC) = func_0013b550(G_8328, 0x27);
        M2C_FIELD(arg0, s32 **, 0x14) = &D_00316320;
        M2C_FIELD(arg0, s32 *, 0x10) = 1;
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        M2C_FIELD(arg0, s32 *, 4) = 0;
        func_00195a90(&D_00316320, 0x27);
        break;
    case 2:
        G_8508 = 3;
        func_001b86b0(1);
        break;
    }
    func_001a0540(arg0, arg1, arg2);
}
