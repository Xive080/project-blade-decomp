extern float func_0011a620(float);
extern void func_001ce160(float *, float *);

void func_00190c40(char *a0, float *a1, float inv) {
    float b[4];
    float c[4];
    float d[4];
    float *p0, *p1, *p2, *q;
    float *v, *end, *s;
    char *t;
    int *e0, *e1;
    inv = 1.0f / inv;
    t = *(char **)(a0 + 0x41c);
    if (t == 0) {
        *(float *)(a0 + 0x5d4) = a1[0] - (*(float **)(a0 + 0x414))[12];
        *(float *)(a0 + 0x5d8) = a1[1] - (*(float **)(a0 + 0x414))[13];
        *(float *)(a0 + 0x5dc) = a1[2] - (*(float **)(a0 + 0x414))[14];
        *(float *)(a0 + 0x5d4) *= 0.3f * inv;
        *(float *)(a0 + 0x5d8) *= 0.3f * inv;
        *(float *)(a0 + 0x5dc) *= 0.3f * inv;
        *(float *)(a0 + 0x5e4) = 0.0f;
        return;
    }
    s = *(float **)(t + 12);
    e0 = *(int **)t;
    end = (float *)((char *)s + *(int *)(t + 8) * 24);
    if (e0 != 0) {
        v = s + 6;
        if (*e0 > 1) {
            v = s;
            s = (float *)(e0 + 9);
        }
    } else {
        v = s + 6;
    }
    while (v < end) {
        p1 = v + 3;
        p0 = v;
        if (!((v[3] - v[0]) * (a1[2] - v[2]) - (a1[0] - v[0]) * (v[5] - v[2]) <= 0.0f))
            break;
        s = v;
        v += 6;
    }
    if (s == p0) {
        e1 = *(int **)(t + 4);
        if (e1 != 0 && *e1 > 1) {
            p0 = (float *)(e1 + 9);
        } else {
            s = end - 12;
        }
    }
    b[0] = p1[0] - p0[0];
    b[1] = p1[1] - p0[1];
    b[2] = p1[2] - p0[2];
    func_001ce160(b, b);
    c[0] = s[0] - p1[0];
    c[1] = s[1] - p1[1];
    c[2] = s[2] - p1[2];
    func_001ce160(c, c);
    d[0] = c[1] * b[2] - c[2] * b[1];
    d[1] = c[2] * b[0] - c[0] * b[2];
    d[2] = c[0] * b[1] - c[1] * b[0];
    func_001ce160(d, d);
    *(float *)(a0 + 0x5d4) = a1[0] - (*(float **)(a0 + 0x414))[12];
    *(float *)(a0 + 0x5d8) = (a1[1] - (*(float **)(a0 + 0x414))[13]) +
        ((p0[0] * d[0] + p0[1] * d[1] + p0[2] * d[2]) - (d[2] * a1[2] + (d[0] * a1[0] + d[1] * a1[1]))) / d[1];
    *(float *)(a0 + 0x5dc) = a1[2] - (*(float **)(a0 + 0x414))[14];
    *(float *)(a0 + 0x5d4) *= inv;
    *(float *)(a0 + 0x5d8) *= inv;
    *(float *)(a0 + 0x5dc) *= inv;
    {
        float *n;
        float r;
        n = *(float **)(a0 + 0x414);
        r = 57.29578f * func_0011a620(n[4] * d[0] + n[5] * d[1] + n[6] * d[2]);
        *(float *)(a0 + 0x5e4) = r;
        if (!(r <= 1.0f)) {
        q = (float *)(a0 + 0x5e8);
        q[0] = (*(float **)(a0 + 0x414))[5] * d[2] - (*(float **)(a0 + 0x414))[6] * d[1];
        q[1] = (*(float **)(a0 + 0x414))[6] * d[0] - (*(float **)(a0 + 0x414))[4] * d[2];
        q[2] = (*(float **)(a0 + 0x414))[4] * d[1] - (*(float **)(a0 + 0x414))[5] * d[0];
        func_001ce160(q, q);
        *(float *)(a0 + 0x5e4) *= inv;
        } else {
            *(float *)(a0 + 0x5e4) = 0.0f;
        }
    }
}
