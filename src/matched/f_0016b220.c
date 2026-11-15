struct G { int a; int b; int pad[9]; int fd; int h; int x; int y; char buf[4]; };
extern struct G g;
extern void func_00121a58(char *, void *);
extern int func_001099c0(int, char *, int);
extern void func_00109c10(int);
extern char cb[];
int f(void *a, int x, int y) {
    func_00121a58(g.buf, a);
    g.a = 1;
    g.b = 0;
    g.x = x;
    g.y = y;
    g.h = func_001099c0(2, cb, 0);
    func_00109c10(g.fd);
    return 1;
}
