s32 func_00249e50();                                /* extern */
extern s32 D_00327D58;

s32 func(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_00249e50();
    D_00327D58 = temp_v0;
    return temp_v0 == arg0;
}
