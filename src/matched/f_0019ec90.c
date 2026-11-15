extern int G8328;
extern char D5FA0[];
extern char D6900[];
extern char *D5FAC[];
extern char D2EFF18[];
extern char D19EDE0[];
extern int f13b550(int, int);
extern void f121a58(char *, char *);
extern void f1214b8(char *, char *, int);
extern void f1957d0(char *, int, char *);
extern int f1a3ac0(char *, int, int);
extern int *f1b54e0(void);
extern int f1b6240(void);

int func(char *a, int b, int c)
{
    switch (b) {
    case 0: {
        *(int *)(a + 8) = f13b550(G8328, 307);
        *(int *)(a + 12) = 0;
        *(char **)(a + 20) = D5FA0;
        *(int *)(a + 16) = 1;
        *(int *)(a + 24) = 0;
        *(int *)(a + 4) = 0;
        f1957d0(D5FA0, 307, D19EDE0);
        break;
    }
    case 2: {
        int *t = f1b54e0();
        unsigned n = t[3];
        if (n < 3) {
            f121a58(D6900, (char *)t + n * 20 + 16);
        } else {
            f1214b8(D6900, D2EFF18, f13b550(G8328, 145));
        }
        D5FAC[0] = D6900;
        break;
    }
    case 9:
        if (f1b6240() == 0) return 1;
        break;
    default:
        break;
    }
    return f1a3ac0(a, b, c);
}
