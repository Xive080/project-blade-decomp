/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#pragma mpwc_relax on
s32 func_0010a670(s32 *, s32 *);        /* extern */
extern s32 D_00317540;
extern struct { s32 v; char pad[4]; } D_00317544[];
extern s32 D_00317584;

s32 func(s32 arg0) {
    func_0010a670(&D_00317540, &D_00317584);
    return D_00317544[arg0].v;
}
