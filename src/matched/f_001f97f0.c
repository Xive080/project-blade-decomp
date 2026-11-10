extern f32 func_001f9820(f32);

s32 func(void *arg0, f32 fparg0) {
    f32 local_var;
    s32 temp;
    temp = *(s32 *)((char *)arg0 + 20);
    local_var = *(f32 *)((char *)temp + 8);
    func_001f9820(fparg0 - local_var);
    return 1;
}
