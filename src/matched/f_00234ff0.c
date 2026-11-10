extern s32 *p1;
extern s32 *p2;
extern s32 *pend;
extern s32 buf[];
u64 func(void) {
    u32 r;
    s32 *t;
    s32 *e;
    u64 ret;
    s32 *q;
    *p1 += *p2;
    t = p1;
    e = pend;
    r = *t;
    t++;
    p1 = t;
    ret = (u64)(r >> 1) & 0x7FFFFFFF;
    if (t >= e) {
        p1 = buf;
        p2++;
    } else {
        q = p2 + 1;
        p2 = q;
        if (q >= e) {
            p2 = buf;
        }
    }
    return ret;
}
