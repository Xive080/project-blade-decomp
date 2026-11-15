struct O { char pad[0xc]; void (*fn)(struct O *, s32); char p2[0x14]; s32 a; s32 b; };
extern s32 *G;
extern void del(struct O *);
extern s32 mk(s32);
extern void st(struct O *, s32);
void f(s32 i, s32 a, s32 b) {
    struct O *o;
    s32 t;
    i = G[i + 11];
    o = (struct O *)i;
    t = o->b;
    if (t != 0) { if (t != 0) del(o); }
    o->b = mk(*G);
    o->a = 0;
    *(s32 *)((char *)o + 60) = -1;
    *(s32 *)((char *)o + 64) = -1;
    *(s32 *)((char *)o + 68) = -1;
    *(s32 *)((char *)o + 72) = -1;
    o->fn(o, b);
    if (a != 0) st(o, 1);
}
