struct E { u16 a; u16 b[11]; };
extern struct E tbl[];
void func(s32 i, s32 bit) {
    s32 m = (1 << bit) & 0xFFFF;
    struct E *p = &tbl[i];
    p->a |= m;
}
