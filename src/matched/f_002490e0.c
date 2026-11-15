struct T { char pad[308]; void (*fn)(s32); };
extern char tb[];
extern s32 off;
s32 func(s32 a) {
    s32 x = *(s32*)(a + off);
    if (x != 0) ((struct T*)tb)->fn(x);
    return a;
}
