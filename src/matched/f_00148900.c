struct V { char pad[0x130]; void *(*alloc)(s32); void (*free)(void *); };
extern char D_0032A620[];
extern void func_00148620(s32 *);
extern s32 func_001486b0(s32 *, s32, s32, s32);
s32 *func(s32 arg0, s32 arg1, s32 arg2) {
    s32 *p;
    if (arg0 & 8) {
        if (arg0 & 1) {
            p = ((struct V *)D_0032A620)->alloc(arg2 * 16 + 24);
        } else {
            p = ((struct V *)D_0032A620)->alloc(arg2 * 40 + 24);
        }
        if (p == 0) return 0;
        p[0] = arg0;
        ((s16 *)p)[3] = 0;
        ((s16 *)p)[2] = arg2;
        p[2] = 0;
        p[3] = arg1;
    } else {
        p = ((struct V *)D_0032A620)->alloc(36);
        if (p == 0) return 0;
        if (func_001486b0(p, arg0, arg1, arg2) == 0) {
            if (p != 0) {
                if (!(*p & 8)) func_00148620(p);
                ((struct V *)D_0032A620)->free(p);
            }
            p = 0;
        }
    }
    return p;
}
