struct P { int h; char pad[1384]; int c; int x; int k1; int k2; int k3; int k4; };
struct O { char pad[484]; int on; };
extern int gflag;
extern int F114880(void *, int, int);
extern int F114cf8(int, int *, int *);
int func_001946c0(struct O *o, struct P *p, int n, int mode, int fl)
{
    int a = -1;
    int b = -1;
    int s;
    int k;
    if (p != 0) {
        if (gflag == 0 || o->on == 0 || p->c > 0) return 0;
        switch (mode) {
        case 2: k = 1; s = p->k2 + n; break;
        case 3: k = 2; s = p->k1 - n; break;
        case 1: k = 0; s = n; break;
        default: return 0;
        }
        if (F114880((void *)p->h, n, k) == 0) {
            if (fl != 0) {
                if (F114cf8(0, &a, &b) > 0 && a == 4 && b >= 0) {
                    p->k2 = s;
                    return n;
                }
            } else {
                p->c = 1;
                p->k4 = s;
                return n;
            }
        }
    }
    return 0;
}
