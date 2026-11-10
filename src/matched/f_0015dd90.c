struct T { char pad[308]; void (*fn)(s32); };
extern char tb[];
extern s32 g_big[];
extern s32 g_small;
extern void sub(s32);
s32 func(void) {
    struct T *t = (struct T*)tb;
    t->fn(g_big[0]);
    g_big[0] = 0;
    sub(g_small);
    return 1;
}
