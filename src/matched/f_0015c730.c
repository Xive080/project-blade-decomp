extern char D_0015C7A0[];
extern char D_0015C840[];
extern char D_0015C850[];
extern struct { void *a; void *b; s32 c; void *d; } D_00305D50;
extern s32 func_00170690(s32, void *, s32, s32);
s32 func(void) {
    D_00305D50.a = D_0015C850;
    D_00305D50.b = D_0015C840;
    D_00305D50.c = 0;
    D_00305D50.d = D_0015C7A0;
    func_00170690(0x08000000, &D_00305D50, 0x84, 0x20);
    return 1;
}
