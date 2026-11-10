s32 func(s32 a0, s32 **a1) {
    s32 *p = *a1;
    return (p[1] < p[2]) ^ 1;
}
