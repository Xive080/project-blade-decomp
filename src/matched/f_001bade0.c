extern void *T[];
extern char X[];
extern int f1d8470();
extern int f1d99e0(int);
extern int *f21aa70();
extern int f1d9c00(int, int, int *, int);
extern int f1d9af0(int, int, int, int);
extern int f1d97c0(int);
extern void f21a520(int, void *, int);
extern void f21a780(int, int, int, int);
extern void f21a8d0(int, int);
extern void f21a910(int, void *, int);
extern void f21a980(int, int, void *);
extern void f12e5e0(int, void *, void *);
extern char A[], B[], C[];
extern void F1(void);
extern void F2(void);
extern void F3(void);
extern void F4(void);
extern void F5(void);

void f(void) {
    int i;
    int t;
    int *p;
    int h3;
    int h2;
    for (i = 0; i < 32; i++) {
        T[i] = X;
    }
    t = f1d99e0(f1d8470());
    p = f21aa70();
    h2 = f1d9c00(t, 0, p, 0);
    h3 = f1d9af0(h2, *p, 0, 0);
    f21a520(h3, A, 0);
    f21a520(h3, B, 1);
    f21a520(h3, C, 3);
    f21a780(h3, 3, 83, 27);
    t = f1d97c0(h2);
    h3 = f1d9af0(t, *p, 0, 0);
    f21a8d0(h3, 249);
    f21a910(h3, T, 32);
    f21a980(h3, 2, 0);
    f21a980(h3, 3, F3);
    f21a980(h3, 4, F4);
    f21a980(h3, 5, F5);
    f12e5e0(t, F1, F2);
}
