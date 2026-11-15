struct Q { int pad4; int c; };
extern char D[];
extern int f1c35a0(void);
extern int *f170000(void *);
extern struct Q *f201b60(int);
extern int f2018c0(int);
extern void f202670(int, int);
extern void f201cc0(void *, int);
struct P { int a; int n; int pad[4]; struct Q *q; };
void func(struct P *p) {
    int s;
    int x;
    int i;
    int x64;
    s = f1c35a0();
    x = f170000(D)[2];
    x64 = x - 64;
    p->a = 1;
    p->n = 6;
    p->q = f201b60(x);
    p->q->c = s;
    for (i = 0; i < p->n; i++) {
        int t = f1c35a0();
        int b = f2018c0(x64);
        f202670(b, t);
        f201cc0(p->q, b);
    }
}
