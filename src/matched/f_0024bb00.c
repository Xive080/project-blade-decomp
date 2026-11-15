struct S { char pad[0x10]; void (*fn)(struct S *); char pad2[0x10]; s32 fl; s32 a28; char pad3[4]; s32 a30; s32 a34; s32 a38; };
void g1(s32);
void g2(s32);
void func(s32 unused, struct S *p) {
    s32 f = p->fl;
    if ((f & 0x20) && !(f & 1)) {
        p->fn(p);
        if (p->a34 != 0) {
            g1(p->a34);
            p->a34 = 0;
            p->a38 = 0;
        }
        g2(p->a28);
        p->a28 = 0;
        p->a30 = 0;
        p->fl = 0;
        return;
    }
    *(u32 *)&p->fl = *(u32 *)&p->fl & ~2;
    g1(p->a34);
    p->a38 = 0;
    p->a34 = 0;
}
