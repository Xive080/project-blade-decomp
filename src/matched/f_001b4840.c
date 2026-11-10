#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#pragma mpwc_relax on
s32 func_00131540(s32, s32 *);          /* extern */
s32 func_00131d00();                            /* extern */
s32 func_00132c50(u8);                          /* extern */
s32 func_00170ce0(s32);                     /* extern */
s32 func_00174ad0(s32);                         /* extern */
s32 func_00174b00(s32, s32);            /* extern */
s32 func_001a4b20();                                /* extern */
s32 func_001a4f40(s32);                     /* extern */
s32 func_001b9ce0(s32 *, s32 *, s32);   /* extern */
s32 func_001b9f80(s32 *, s32);          /* extern */
s32 func_0024af90();                            /* extern */
extern struct { s32 v; char pad[12]; } D_001B4920_;
#define D_001B4920 (D_001B4920_.v)
extern struct { s32 v; char pad[12]; } D_002FA364_;
#define D_002FA364 (D_002FA364_.v)
extern struct { u8 v; char pad[12]; } D_002FA61F_;
#define D_002FA61F (D_002FA61F_.v)
extern struct { s32 v; char pad[12]; } D_00307218_;
#define D_00307218 (D_00307218_.v)
extern struct { s32 v; char pad[12]; } D_00329770_;
#define D_00329770 (D_00329770_.v)
extern s32 G_8540;
extern s32 G_8544;
extern s32 G_8548;
extern s32 G_854C;

s32 func(s8 *arg0) {
    func_0024af90();
    G_854C = func_00174ad0(0);
    func_00174b00(0, 0);
    G_8548 = 0;
    G_8540 = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    G_8544 = 0;
    func_00131d00();
    func_00170ce0(-0x19);
    func_001b9f80(&D_00329770, 7);
    func_001b9ce0(&D_00329770, &D_00307218, func_001a4b20());
    func_00131540(0, &D_001B4920);
    func_001a4f40(1);
    D_002FA364 = 4;
    D_002FA364 |= 0x10;
    func_00132c50(D_002FA61F);
    return 1;
}
