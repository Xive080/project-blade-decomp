
typedef struct { f32 x, y, z; } V3;
extern int *G_8368;
extern char *func_00147b70(int *, char *);
extern char *func_00148000(int *, char *, int, int, f32);
extern int *func_00148900(int, int, int);
extern void func_001ce3f0(char *, char *, int, int);

int *func(int *arg0, char *arg1, int arg2) {
    char *s0;
    int *p;
    char *s4, *s5, *v;
    s0 = func_00147b70(arg0, arg1);
    if (s0 == 0) return 0;
    if (*arg0 & 1) {
        p = G_8368;
        if (p != 0) {
            *p = 1;
        } else {
            p = func_00148900(1, 0, 0x16);
        }
        if (p == 0) return 0;
        arg1 = func_00148000(p, arg1, 0, 3, *(f32 *)(arg1 + 0xc));
        s0 = func_00148000(p, s0, 0, 4, *(f32 *)(s0 + 0xc));
        if (arg2 != 0) {
            func_001ce3f0(arg1, arg1, 1, arg2);
            func_001ce3f0(s0, s0, 1, arg2);
        }
    } else {
    p = G_8368;
    if (p != 0) {
        *p = 2;
    } else {
        p = func_00148900(2, 0, 0x16);
    }
    if (p == 0) return 0;
    s4 = func_00148000(p, arg1, 0, 3, *(f32 *)(arg1 + 0xc));
    s5 = func_00148000(p, s0, 0, 4, *(f32 *)(s0 + 0xc));
    if (p != 0 && s4 != 0) {
        v = arg1 + 0x1c;
        if (v != 0) {
            *(V3 *)(s4 + 0x1c) = *(V3 *)v;
        }
    }
    if (p != 0 && s5 != 0) {
        v = s0 + 0x10;
        if (v != 0) {
            *(V3 *)(s5 + 0x10) = *(V3 *)v;
        }
    }
    if (arg2 != 0) {
        func_001ce3f0(s4, s4, 1, arg2);
        func_001ce3f0(s5, s5, 1, arg2);
        func_001ce3f0(s4 + 0x1c, s4 + 0x1c, 1, arg2);
        func_001ce3f0(s5 + 0x10, s5 + 0x10, 1, arg2);
    }
    }
    return p;
}
