extern s32 func_002289e0(void *);
extern s32 func_00234ff0(void);
struct S {
    char pad[0xc0];
    struct { s32 cnt; s32 base; s32 a; s32 b; } q[7];
    struct R { s32 r0, type, r2, r3; } *tbl;
    s32 f134, f138, last, cur, f144, f148, f14c;
};
s32 f(struct S *p) {
    s32 pick, t, s, r;
    do {
        do {
            s = func_002289e0(p);
            r = func_00234ff0();
            pick = p->q[s].base + r % p->q[s].cnt;
            t = p->tbl[pick].type;
            if (t == 1) {
                if (p->f14c != 0) break;
            }
            if (t == 2) {
                if (p->f148 != 0) break;
            }
            if (t == 5) {
                if (p->f148 != 0 || p->f14c != 0) break;
            }
            if (t == 1) continue;
            if (t == 2) continue;
            if (t == 5) continue;
            break;
        } while (1);
    } while (pick == p->last || pick == p->cur);
    p->cur = p->last;
    return pick;
}
