extern s32 A;
extern s32 B;
extern s32 C;
extern s32 D;
extern s32 rnd(void);
extern void p(s32, s32);
extern void q(void);
void f(void) {
    s32 s;
    if (A & 0x2000) {
        s = C;
    } else if (B & 0x2000) {
        s = D;
    } else return;
    p(rnd() % 3 + 22, s);
    q();
}
