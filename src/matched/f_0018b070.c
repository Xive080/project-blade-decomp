extern float func_0011a398(float x);
extern float func_00119ff8(float x);
int f(float s, float *a, float *b, int *c) {
    float t, sn, cs, x;
    b[0] += s * a[0]; b[1] += s * a[1];
    t = 0.017453292f * (a[2] * s);
    sn = func_0011a398(t);
    cs = func_00119ff8(t);
    x = b[4];
    b[4] = b[5] * sn + x * cs;
    b[5] = b[5] * cs - x * sn;
    *c |= 3;
    return 1;
}
