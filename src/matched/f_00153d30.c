struct S { char a[116]; };
struct O { char pad[1028]; s32 k; char pad2[348]; struct S e[38]; };
extern s32 f1(s32);
extern s32 f2(s32);
extern s32 f3(void *, s32, s32);
extern void f4(void *);
s32 func(struct O *o, u32 i) {
    s32 a, b;
    char *q;
    s32 off;
    if (i >= 38) return 0;
    if (o == 0) return 0;
    off = i * 116;
    if (*(s32 *)(off + (s32)o + 1396) == 0) return 0;
    a = f1(o->k);
    if (a == 0) return 0;
    b = f2(a);
    if (b == 0) return 0;
    q = o->e[i].a;
    if (f3(q, b + 48, 0) == 0) return 0;
    f4(q);
    return 1;
}
