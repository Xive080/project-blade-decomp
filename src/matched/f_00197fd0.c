struct O { s32 (*fn)(struct O *, s32, void *); };
extern struct O * volatile G;
extern void f11e(s32 *, s32, s32);
extern void f178(void);
extern void f24b(struct O *, s32);
void func(struct O *a, s32 b) {
    s32 sp;
    struct O *p;
    G = a;
    if (G != 0) {
        f11e(&sp, 0, 4);
        sp = b;
        p = G;
        p->fn(p, 2, &sp);
        f24b(G, 1);
        p = G;
        p->fn(p, 3, 0);
        return;
    }
    f178();
}
