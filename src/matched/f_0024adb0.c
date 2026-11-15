extern char D[];
struct G { char pad[0x130]; int (*f)(int); };
extern int off1;
extern int off2;
extern int f1bf260(int, int *, int);
extern void f11ec80(int, int, int);
extern void f1ca2d0(int, int, int);
extern void f209ff0(int, int);
int f(int a, int b, int c) {
    int t;
    int r;
    if (f1bf260(a, &t, 4) == 0) return 0;
    if (t == 0) return a;
    r = ((struct G *)D)->f(92);
    if (r == 0) return 0;
    f11ec80(r, 0, 92);
    *(int *)(c + off1) = r;
    f1ca2d0(a, r, 32);
    f209ff0(c, off2);
    return a;
}
