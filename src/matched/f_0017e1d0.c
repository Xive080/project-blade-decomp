struct V3 { float x, y, z; };
struct L { float dist; int hit; struct V3 n; int *ptr; struct V3 a; struct V3 b; int c; int d; };
extern volatile s32 D_002FA468;
extern char func_0017e7e0[];
extern char func_0017e410[];
extern void func_00127490(int, char *, struct V3 *, struct V3 *, struct L *);
extern void func_00129300(int, struct V3 *, struct V3 *, char *, struct L *);
int f(int o, struct V3 *a, struct V3 *b, struct V3 *out, struct V3 *nrm, int *res, int c, int d) {
    struct L l;
    l.dist = 3.4028235e38f;
    l.hit = 0;
    l.c = c;
    l.d = d;
    l.a = *a;
    l.b = *b;
    l.ptr = 0;
    func_00127490(*(int *)0x70003FD8, func_0017e7e0, a, b, (struct L*)&l.dist);
    D_002FA468 = *(s32 *)0x70003FB8 + 1;
    if (*(s32 *)0x70003FFC == 0xAFBFCFDF) *(s32 *)0x70003FB8 = D_002FA468;
    func_00129300(*(int *)0x70003FD8, a, b, func_0017e410, (struct L*)&l.dist);
    if (l.hit != 0) {
    if (out) {
        out->x = b->x - a->x;
        out->y = b->y - a->y;
        out->z = b->z - a->z;
        out->x = out->x * l.dist;
        out->y = out->y * l.dist;
        out->z = out->z * l.dist;
        out->x = out->x + a->x;
        out->y = out->y + a->y;
        out->z = out->z + a->z;
    }
    if (nrm) *nrm = l.n;
    if (res) {
        if (l.ptr) *res = *l.ptr;
        else *res = 0;
    }
    return 1;
    }
    return 0;
}
