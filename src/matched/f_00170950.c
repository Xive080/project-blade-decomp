struct E { s32 a, b, c, d, e; };
extern struct G { char pad[36]; s32 idx; } g;
extern struct { s32 a, b; } gp_;
extern s32 func_00178e70(s32);
void func(void) {
    struct E *p = (struct E *)((char *)&g + g.idx * 20 + 424);
    s32 t = func_00178e70(g.idx);
    p->e = 1;
    p->c = p->a + (p->b - t);
    if (gp_.b != 0 && g.idx == 4) {
        gp_.a = 1;
        gp_.b = 0;
    }
    g.idx = 0;
}
