extern s32 *func_002018b0(s32 *);

s32 func(void *arg0) {
    s32 *temp_v0;
    s32 *temp_a0;
    s32 *temp_s0;

    temp_a0 = *(s32 **)((char *)arg0 + 8);
    temp_s0 = *(s32 **)((char *)temp_a0 + 0x18);
    temp_v0 = func_002018b0(temp_a0);
    *(s16 *)((char *)temp_s0 + 12) = 0;
    temp_v0[0] &= ~1;
    return 1;
}
