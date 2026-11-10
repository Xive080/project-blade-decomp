s32 func_001b4c00(u32);                             /* extern */
extern s32 G_8550;

u32 func(void) {
    u32 var_s0;

    var_s0 = 0;
loop_1:
    if ((func_001b4c00(var_s0) != 0) && !(G_8550 & (1 << var_s0))) {
        return var_s0;
    }
    var_s0 += 1;
    if (var_s0 >= 7U) {
        return 7U;
    }
    goto loop_1;
}
