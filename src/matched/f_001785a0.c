struct H { char pad[0xc0]; s32 f; };
struct R { char buf[0x1d0]; u8 mask; u8 lim; u8 idx; u8 two; };
extern struct R tbl[];
extern struct H *pg;
extern void sub1(void *, f32);
extern void sub2(void *);
void func(s32 i) {
    struct R *r = &tbl[i];
    u8 m; s32 m2;
    if (r->idx == 0) r->idx = r->lim - 1; else r->idx = r->idx - 1;
    if (r->two != 0) {
        m = (1 << (s8)r->idx) & 0xff;
        if (pg->f != 0) {
            if (!(r->mask & (m & 0xff))) {
                r->mask |= m;
                sub1((char *)r + r->idx * 0x74, 1.0f);
                sub1((char *)r + r->idx * 0x74 + 0xe8, -1.0f);
            }
        } else {
            m2 = m & 0xff;
            if (r->mask & m2) {
                r->mask = r->mask & (~m2 & 0xff);
                sub1((char *)r + r->idx * 0x74, -1.0f);
                sub1((char *)r + r->idx * 0x74 + 0xe8, 1.0f);
            }
        }
    }
    sub2((char *)r + r->idx * 0x74);
    if (r->two != 0) sub2((char *)r + r->idx * 0x74 + 0xe8);
}
