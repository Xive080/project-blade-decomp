struct Seg { char pad[8]; int n; char *pts; };
extern void func_001ce330();
int func(struct Seg *a, int rev, int *tbl, int idx) {
    struct Seg *s;
    char *q;
    char *p;
    char *q2;
    char *p2;
    float A[4];
    float B[4];
    float d;
    int e = (idx << 2) + (int)tbl;
    s = *(struct Seg **)(e + 4);
    if (s == 0) return 4;
    if (*(int *)(e + 20) != 0) {
        q = s->pts + ((s->n - 1) << 5);
        p = q + 12;
    } else {
        p = s->pts;
        q = p + 12;
    }
    B[0] = *(float *)p;
    B[1] = *(float *)(p + 8);
    B[2] = *(float *)q;
    B[3] = *(float *)(q + 8);
    if (rev != 0) {
        q2 = a->pts + ((a->n - 1) << 5);
        p2 = q2 + 12;
    } else {
        p2 = a->pts;
        q2 = p2 + 12;
    }
    A[0] = *(float *)(p2 + 8);
    A[1] = -*(float *)p2;
    A[2] = *(float *)(q2 + 8);
    A[3] = -*(float *)q2;
    A[0] = A[2] - A[0];
    A[1] = A[3] - A[1];
    B[0] = B[2] - B[0];
    B[1] = B[3] - B[1];
    func_001ce330(A, A, &A[2], &A[3]);
    func_001ce330(B, B);
    d = A[0] * B[0] + A[1] * B[1];
    if (d > 0.5f) return 2;
    if (d < -0.5f) return 0;
    if (a == s) return 3;
    return 1;
}
