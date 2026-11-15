struct O { int (*fn)(struct O *, int, int); };
extern struct O *D_00317400;
extern int D_00317404;
int f(int a, int b) {
    if (D_00317404 == 0 && D_00317400 != 0) return D_00317400->fn(D_00317400, a, b);
    return 0;
}
