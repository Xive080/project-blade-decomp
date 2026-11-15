extern void func_00109d00(int);
extern void func_00109d20(int);
extern void func_0011eac8(int *, int *, int);
extern void func_0011fe10(char *, int *);
extern void func_001214b8(int *, char *, int, int, int, int, int, int);
extern void func_001aa740(int);
extern int gA;
extern int gB;
extern int ev[16];
struct E{int a,b;};
extern struct Q { int cnt; int *buf; char pad[16]; } q;
extern char base[];
int f(int a, int b) {
    int t[32];
    int n, m;
    func_00109d20(gA);
    ev[0] = a;
    ev[1] = b;
    n = (q.cnt + 1) << 3;
    if (gB) {
        func_001214b8(t, base + 176, 32801, ((struct E*)ev)->a, ((struct E*)ev)->b, q.cnt, n, 8);
        func_0011fe10(base + 272, t);
    }
    m = n + 1;
    q.buf[n] = 32801;
    func_0011eac8(q.buf + m, ev, 8);
    q.cnt = q.cnt + 1;
    if (q.cnt >= 1023) func_001aa740(0);
    func_00109d00(gA);
    return 1;
}
