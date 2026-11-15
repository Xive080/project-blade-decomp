typedef unsigned __int128 Q;
struct VT { int pad[6]; void (*fn)(void *, s32); };
struct A { struct VT *vt; int p4; void *p8; };
struct E { char pad[0x5c]; s32 v; char pad2[0x10]; };
struct W { char pad[0xe08]; u8 a, b, c, n; };
extern char D_002E87F0[];
extern struct W D_00329770;
extern s32 D_00333140[];
extern s32 D_00333190[];
extern s32 D_00333194[];
extern s32 D_00333198[];
extern s32 D_00307218;
extern u8 D_002FA61F[];
extern s32 D_70003FC8;
extern void func_002429e0(void *, Q *);
extern void func_00242a10(void *);
extern s32 func_001b4ab0(u8, s32);
extern void func_00133120(s32);
void func(struct A *a) {
    Q q;
    Q *pq = &q;
    s32 i;
    struct W *w;
    s32 *p;
    w = &D_00329770;
    *(volatile Q *)pq = *(Q *)D_002E87F0;
    func_002429e0(a, pq);
    func_00242a10(a);
    D_00307218 = 8;
    for (i = 10; i--; ) {
        D_00333140[i] = 3;
        D_00333140[i + 10] = 0;
    }
    D_00333194[0] = 0;
    D_00333190[0] = 0;
    D_00333198[0] = 0;
    p = D_00333140;
    for (i = 0; i < w->n; i++) {
        p[10] = ((struct E *)((char *)w + (i + (w->c + (w->a + w->b))) * 0x70))->v;
        if (func_001b4ab0(D_002FA61F[0], i) != 0) {
            p[0] = 2;
            D_00333194[0]++;
        } else {
            p[0] = 0;
        }
        p++;
        D_00333190[0]++;
    }
    a->p8 = (void *)0x42f00000;
    a->vt->fn(a, 7);
    if (D_70003FC8 != 7) func_00133120(7);
}
