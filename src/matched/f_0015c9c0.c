struct S { char pad0[12]; float lim; char pad1[12]; float v; };
int f(struct S *a, float x) {
    if (a == 0 || x == 0.0f) return 0;
    a->v += x;
    if (a->v < -a->lim) a->v = -a->lim;
    else if (!(a->v <= a->lim)) a->v = a->lim;
    return 1;
}
