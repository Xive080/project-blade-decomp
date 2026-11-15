struct T { char pad[308]; void (*fn)(s32); };
extern char tb[];
extern s32 off2;
s32 func(s32 a) {
    s32 x = *(s32*)(a + off2);
    if (x != 0) ((struct T*)tb)->fn(x);
    return a;
}
