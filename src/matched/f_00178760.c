extern s32 mode;
extern char Q[];
extern char S0[];
extern char S1[];
void a(s32, s32);
f32 fl(void);
void pr(s32, char *, s32);
void tail(void);
void func(void) {
    if (mode == 2) {
        s32 s = *(s32 *)Q;
        s32 r;
        char *p;
        a(2, 0x48);
        fl();
        asm { cvt.w.s $f0,$f0 }
        p = S0;
        asm { mfc1 r,$f0 }
        pr(s, p, r);
        a(2, 0x800000A1);
        fl();
        asm { cvt.w.s $f0,$f0 }
        p = S1;
        asm { mfc1 r,$f0 }
        pr(s, p, r);
    }
    tail();
}
