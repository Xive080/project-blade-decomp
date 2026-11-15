struct O { char p0[8]; int id; int p1; int arr[24]; int a; int n; int idx; };
struct G { char pad[0x3f4]; struct O *p[3]; };
extern struct G D_00306070;
extern struct O *D_00306464[];
int func_001cc6b0(int, int);
int func(int u, int i) {
    struct O *o = 0;
    int k;
    int *q = (int*)&D_00306070;
    for (k = 0; k < 3; k++, q++) {
        struct O *t = ((struct O**)((char*)q + 0x3f4))[0];
        if (t && t->id == 10000) { o = D_00306464[k]; break; }
    }
    if (o == 0) return 0;
    if (i >= 0) {
        if (i < o->n) {
            o->idx = i;
            func_001cc6b0(o->a, o->arr[o->idx]);
        }
    }
    return 1;
}
