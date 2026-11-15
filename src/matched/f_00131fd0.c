extern int A[];
extern int B[];
extern float C[];
extern int D[];
extern int f1a74e0(int);
int f(int i) {
    int r, d;
    if (A[i] != 0) goto one;
    if (B[i] != 0) {
one:
        return 1;
    }
    if (*(float *)0x70003fb0 < C[i]) return 1;
    d = D[i];
    if (d == -1) return 0;
    r = f1a74e0(d);
    switch (r) {
    case 4:
    case 5:
        return 1;
    case 1:
    case 2:
    case 3:
    default:
        return 0;
    }
}
