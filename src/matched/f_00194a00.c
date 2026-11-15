struct O { char p[0x1e4]; int f; };
struct B { int h; char p[0x568]; int s; int q; int mx; int cur; };
extern int D_a;
extern struct B *D_b;
extern int f114b08(int, int, unsigned);
extern int f114cf8(int, int *, int *);
unsigned f(struct O *o, struct B *b, int c, unsigned n, unsigned m, int fl) {
    int x = -1;
    int y = -1;
    if (n == 0) return 0;
    if (b != 0) {
        if (D_a == 0 || o->f == 0 || b->s > 0) return 0;
        if (f114b08(b->h, c, n * m) == 0) {
            if (fl != 0) {
                if (f114cf8(0, &x, &y) > 0 && x == 6 && y >= 0) {
                    b->cur += y;
                    if (b->cur > b->mx) b->mx = b->cur;
                    return y / n;
                }
            } else {
                b->s = 1;
                D_b = b;
                return m;
            }
        }
    }
    return 0;
}
