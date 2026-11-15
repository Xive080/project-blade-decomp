typedef int s32;
extern s32 D_A[];
extern s32 f131d00();
extern void f170ce0(s32);
extern void f132a70(s32);
extern void f1a9a40(s32, s32);
struct V { s32 a; void (*fn)(struct O *, s32, s32); };
struct O { struct V *vt; };
s32 func(s32 *p) {
    struct O *o;
    D_A[0] = 0;
    p[4] = -1;
    p[5] = -1;
    if (f131d00() == 0) return 1;
    o = *(struct O **)0x70003FD4;
    if (o) o->vt->fn(o, 8, 0);
    f170ce0(12);
    f132a70(1);
    f1a9a40(-1, 0);
    p[1] = 0;
    return 1;
}
