s32 func_001a8d10(s32);                             /* extern */

s32 func(s32 arg0, s32 arg1, s8 *arg2) {
    if (func_001a8d10(arg0 + 0x38) != 0) {
        *arg2 = 1;
    } else {
        *arg2 = 0;
    }
    return 1;
}
