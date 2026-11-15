extern int G84B8;
extern int f114cf8(int, int *, int *);
extern int f115590(int, int, char *, char *, int);
extern void f121a58(char *, char *);
extern char *f122150(char *, int);
extern void f192110(char *, int, char *, char *, char *);
extern char *f192430(char *, char *, char *);

int func(char *o, int x, int *p)
{
    char b0[320];
    char b1[256];
    char b2[40];
    int r1, r2;
    char *t, *q;
    int s0;
    r1 = -1;
    r2 = -1;
    if (G84B8 != 0) { if (*(int *)(o + 484) != 0) goto go; }
    return 0;
go:
    s0 = *(int *)(o + 160);
    if (p != 0) {
        f192110(o, x, b0, b1, b2);
        if ((t = f122150(b1, 47)) != 0) {
            f121a58(b2, t + 1);
            *t = 0;
        }
        if ((q = f192430(o, b1, b2)) != 0) {
            if (*p > -1) {
                if (*p == 0) *(unsigned short *)(q + 20) &= 0xfffd;
                else *(unsigned short *)(q + 20) |= 2;
            }
            if (f115590(s0, 0, b0, q, 4) == 0 && f114cf8(0, &r1, &r2) > 0 && r1 == 14 && r2 == 0) return 1;
        }
    }
    return 0;
}
