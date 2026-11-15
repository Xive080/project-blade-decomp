extern int flag852c;
extern int cnt[];
extern int *bufp[];
extern char D1[];
extern char D2[];
extern char A[];
extern char B[];
extern char W[];
extern int func_0010cfb8(char *);
extern void func_0011eac8(int *, int *, int);
extern void func_0011fe10(char *, int *);
extern void func_001214b8(int *, char *, int, int, int, int, int, int);
extern void func_001aa810(int, int, int *, int, int, int);
int f(int a, int *b, int c) {
    int off;
    int t[32];
    off = (cnt[0] + 1) * 8;
    if (flag852c) {
        func_001214b8(t, D1, a, b[0], b[1], cnt[0], off, c);
        func_0011fe10(D2, t);
    }
    bufp[0][off] = a;
    func_0011eac8(&bufp[0][off + 1], b, c);
    cnt[0] = cnt[0] + 1;
    if (cnt[0] >= 1023) {
        bufp[0][0] = cnt[0];
        bufp[0][1] = 0;
        off = (cnt[0] + 1) * 32;
        do { } while (func_0010cfb8(W));
        func_001aa810(0, 0x8018, bufp[0], off, 384, 0);
        if (bufp[0] != (int *)A) {
            bufp[0] = (int *)A;
        } else {
            bufp[0] = (int *)B;
        }
        cnt[0] = 0;
    }
    return 1;
}
