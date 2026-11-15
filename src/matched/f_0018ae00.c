typedef float f32;
typedef int s32;
extern f32 func_00119ff8(f32);
extern f32 func_0011a398(f32);

s32 func(f32 *a, f32 *b, s32 *flags, f32 t) {
    f32 s2, s, c, sn, o;
    f32 *p;
    f32 *q;
    b[0] += t * a[0];
    b[1] += t * a[1];
    s = 1.0f + (a[2] - 1.0f) * t;
    s2 = 1.0f + (a[3] - 1.0f) * t;
    b[2] *= s;
    b[3] *= s;
    b[4] *= s2;
    b[5] *= s2;
    p = &b[4];
    q = &b[5];
    o = 0.017453292f * (a[4] * t);
    sn = func_0011a398(o);
    c = func_00119ff8(o);
    {
        f32 x = *p;
        *p = x * c + *q * sn;
        *q = *q * c - x * sn;
    }
    b[9] *= 1.0f + (a[5] - 1.0f) * t;
    *flags |= 0xb;
    return 1;
}
