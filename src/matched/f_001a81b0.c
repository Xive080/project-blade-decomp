extern int lk;
extern struct { char pad[0x75c8]; float v; } vol;
extern struct { char pad[0x7740]; int t[1]; } tb;
extern void lock(int);
extern void unlock(int);
extern void snd(int, int, int*, int, int, int);
int f(float v) {
    float t;
    int r;
    if (v < 0.0f) v = 0.0f;
    else if (v > 1.0f) v = 1.0f;
    vol.v = v;
    lock(lk);
    t = 16383.0f * v;
    asm { cvt.w.s t,t }
    asm { mfc1 r,t }
    tb.t[0] = r;
    snd(1, 0x8010, tb.t, 4, 0, 0);
    unlock(lk);
    return 1;
}
