struct S { char pad[0xa0]; s32 a; char pad2[0x1e4 - 0xa4]; s32 b; };
extern s32 G_84B8;
s32 func_00114cf8(s32, s32 *, s32 *);
s32 func_00115768(s32, s32, char *, char *);
char *func_00122150(char *, s32);
s32 func_00192110(struct S *, s32, char *, char *, char *);
s32 func(struct S *arg0, s32 arg1, s32 arg2) {
    s32 sp3B8;
    s32 sp3BC;
    char sp30[256];
    char sp130[256];
    char sp230[32];
    char sp250[32];
    char sp270[328];
    char *var_s0;
    char *var_v0;
    sp3B8 = -1;
    sp3BC = -1;
    if (G_84B8 == 0 || arg0->b == 0) return 0;
    func_00192110(arg0, arg1, sp270, sp30, sp230);
    func_00192110(arg0, arg2, sp270, sp130, sp250);
    var_v0 = func_00122150(sp30, 0x2F);
    var_s0 = var_v0;
    if (var_v0 != 0) var_s0 = var_s0 + 1; else var_s0 = sp30;
    var_v0 = func_00122150(sp130, 0x2F);
    if (var_v0 != 0) var_v0 += 1; else var_s0 = sp130;
    if (func_00115768(arg0->a, 0, var_s0, var_v0) == 0) {
        if (func_00114cf8(0, &sp3B8, &sp3BC) > 0 && sp3B8 == 0x13 && sp3BC == 0) return 1;
    }
    return 0;
}
