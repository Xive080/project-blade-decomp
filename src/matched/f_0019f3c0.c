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
s32 func_00195670(s32 *, s32);          /* extern */
s32 func_001a3ac0(s8 *, s32, s32);            /* extern */
s32 func_001b5f00();                            /* extern */
extern struct { s32 v; char pad[12]; } D_00316000_;
#define D_00316000 (D_00316000_.v)
extern struct { s32 v; char pad[12]; } D_00316020_;
#define D_00316020 (D_00316020_.v)
extern s32 G_8328;

void func(s8 *arg0, s32 arg1, s32 arg2) {
    switch (arg1) {                                 /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 8) = func_0013b550(G_8328, 0x3C);
        M2C_FIELD(arg0, s32 *, 0xC) = func_0013b550(G_8328, 0x3D);
        M2C_FIELD(arg0, s32 **, 0x14) = &D_00316000;
        M2C_FIELD(arg0, s32 *, 0x10) = 2;
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        M2C_FIELD(arg0, s32 *, 4) = 0;
        func_00195670(&D_00316000, 0x114);
        func_00195670(&D_00316020, 0x113);
        break;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        break;
    case 9:
        if (M2C_FIELD(arg0, s32 *, 0x18) == 1) {
            func_001b5f00();
        }
        break;
    }
    func_001a3ac0(arg0, arg1, arg2);
}
