extern char D_00127210[];
extern void func_001297c0(void*, void*, void*, void*);
typedef struct V { float x, y, z; } V;
struct L { V p; float pad; V q; float pad2; int t; int a; };
void *func(void *a0, int a1, V *a2, V *a3, int t0) {
    float s[6];
    struct L l;
    s[0] = a2->x + a3->x;
    s[1] = a2->y + a3->y;
    s[2] = a2->z + a3->z;
    s[3] = a2->x - a3->x;
    s[4] = a2->y - a3->y;
    s[5] = a2->z - a3->z;
    l.a = a1;
    l.p = *a2;
    l.q = *a3;
    l.t = t0;
    func_001297c0(a0, s, D_00127210, &l.p);
    return a0;
}
