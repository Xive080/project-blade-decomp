extern void *f_16f0690(s32, void *, s32, s32);
extern char X0[], X1[], X2[], X3[];
extern void *T[4];
s32 func(void) {
    T[0] = X0; T[1] = X1; T[2] = X2; T[3] = X3;
    f_16f0690(0x400, T, 0x1ee4, 0);
    return 1;
}
