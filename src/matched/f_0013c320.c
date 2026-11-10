extern void fa(void); extern void fb(void); extern void fc(void); extern void fd(void); extern void fe(void); extern void ff(void); extern void fg(void);
extern void *volatile gA; extern void *volatile gB; extern void *volatile gC; extern void *volatile gD; extern void *volatile gE; extern void *volatile gF; extern void *volatile gG; extern void *volatile gH;
s32 func(void) {
    gA = fa;
    gB = fb;
    gC = 0;
    gE = fc;
    gF = fd;
    gD = 0;
    gG = fe;
    gH = ff;
    return 1;
}
