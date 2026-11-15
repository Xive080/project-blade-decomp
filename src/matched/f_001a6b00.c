extern char X0[], X1[], X2[], X3[], X4[], X5[], X6[];
extern int G;
int f1c2a00(int, int, char *, char *);
int f202590(int, int, char *, char *, char *);
int f2025f0(int, char *, char *, char *);
int f(void) {
    if (f1c2a00(0, 306, X0, X1) < 0) return 0;
    G = f202590(4, 306, X2, X3, X4);
    if (G < 0) return 0;
    return f2025f0(306, X5, X6, X0) >= 0;
}
