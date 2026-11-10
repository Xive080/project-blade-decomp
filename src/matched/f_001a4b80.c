struct T { char pad[308]; void (*fn)(s32); };
extern char tb[];
extern void sub(void);
extern volatile s32 g00, g04, g08, g10, g18, g1c, g20, g24, g28, g2c, g30, g34, g38, g3c, g40, g44, g48, g4c, g50, g61c, g604, g14;
s32 func(void) {
    if (g00 != 1) {
        sub();
        g18 = 0;
        g1c = 0;
        g20 = 0;
        g08 = g04;
        g10 = g04;
        g28 = 0;
        g2c = 0;
        g61c = 0;
        g24 = 0;
        g00 = 1;
        g14 = 0;
        ((struct T*)tb)->fn(g04);
        g04 = 0;
        g08 = 0;
        g10 = 0;
        g28 = 0;
        g604 = 0;
    }
    return 1;
}
