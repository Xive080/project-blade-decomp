extern void f_00109d20(int);
extern void f_00109d00(int,int,int);
void f_001b3f90(int *p, int *o1, int *o2, int *o3, int *o4) {
    int a1, a0, a2, hi, d, t;
    f_00109d20(p[16]);
    a1 = p[4];
    a0 = p[5];
    a2 = p[6];
    t = (p[3] + a1) << 15; hi = (t + a0) % a2;
    d = (((p[2] - 2 - a1) << 15) - a0);
    if (a2 - hi >= d) {
        *o1 = p[0] + hi;
        *o2 = d;
        *o3 = 0;
        *o4 = 0;
    } else {
        *o1 = p[0] + hi;
        *o2 = p[6] - hi;
        *o3 = p[0];
        *o4 = d - (p[6] - hi);
    }
    f_00109d00(p[16], a1, a2);
}
