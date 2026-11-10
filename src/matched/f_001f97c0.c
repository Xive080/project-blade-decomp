extern f32 func_001f8500(f32);

s32 func(void *arg0, f32 fparg0) {
    f32 local_var;
    local_var = *(f32 *)((char *)arg0 + 8);
    func_001f8500(fparg0 - local_var);
    return 1;
}
