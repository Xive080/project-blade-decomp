extern int D_00306F84[];
extern char D_00329770[];
extern int f1b9690(char *, char *, int, int, int, char *);
extern void f243290(void *, int, int, int);
struct O { struct VT *vt; int a; int b; int t; char pad[40]; int n; };
struct VT { int p0; int (*f4)(struct O *, int, int); int p8[4]; int (*f18)(struct O *, int); };
int func(struct O *o, char *b, int c, int d) {
    int r;
    int *p;
    if (o->t == 12) {
        r = f1b9690(D_00329770, b + 664, c, d, 0, b);
        if (r & 1) o->vt->f4(o, 7, 0);
        if (c == 2) {
            p = &o->n;
            if (*p > 0) {
                D_00306F84[0] |= 4;
                *p = *p - 1;
                return o->vt->f18(o, 9);
            }
        }
    }
    f243290(o, (int)b, c, d);
    return r;
}
