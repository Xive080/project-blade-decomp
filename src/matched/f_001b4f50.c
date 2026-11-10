s32 func_001b4c00(u32);                             /* extern */
extern s32 G_8550;

void func(void) {
    u32 var_s0;

    G_8550 = 0;
    var_s0 = 0;
    do {
        if (func_001b4c00(var_s0) != 0) {
            G_8550 |= 1 << var_s0;
        }
        var_s0 += 1;
    } while (var_s0 < 7U);
}
