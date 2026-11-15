extern int *f1(int, int);
extern void f2(int);
extern void f3(int, int);
extern int f4(int, int, int);
extern void f5(int, int, char *);
extern void f6(int, int);
extern void f7(int, int);
extern void f8(int, int);
extern int G;
int func(int a, int b, int c) {
    struct S { char c; int p; } sp;
    switch (b) {
    case 1:
        sp.c = *(char *)f1(G, 270);
        sp.p = (int)f1(G, 195);
        f5(5, 0, (char *)&sp);
        f6(19, 0);
        f5(17, 0, 0);
        f7(6, 0);
        break;
    case 10:
        return 1;
    case 9:
        f2(0);
        f3(a, 0);
        break;
    }
    return f4(a, b, c);
}
