extern char *func_001221a0(char *, char *);
extern void func_00121a58(char *, char *);
extern int func_00121b70(char *);
extern int func_00121728(char *, char *);
extern char D_002EFB88[];
extern char D_002EB340[];
struct E { char s[32]; int k; };
struct F { int (*fn)(char *); int p[3]; };
extern struct E D_002E0100[];
extern struct F D_002E00B8[];
int f(char *name) {
    char a[32];
    char b[32];
    int i, n;
    a[0] = 0;
    if (func_001221a0(name, D_002EFB88)) {
        func_00121a58(a, name);
        *func_001221a0(a, D_002EFB88) = 0;
    }
    b[0] = 0;
    if (func_001221a0(name, D_002EFB88)) {
        func_00121a58(b, name);
        *func_001221a0(b, D_002EFB88) = 0;
    }
    n = func_00121b70(b);
    while (n > 0) {
        if ((D_002EB340[b[n - 1] + 1] & 4) == 0) break;
        b[--n] = 0;
    }
    for (i = 0; i < 5; i++) {
        if (func_00121728(D_002E0100[i].s, b) == 0) {
            int (*fn)(char *) = D_002E00B8[D_002E0100[i].k].fn;
            if (fn) return fn(a);
            break;
        }
    }
    return 0;
}
