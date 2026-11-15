extern s32 D[];
extern u32 N1[];
extern u32 N2[];
extern void f1(void *, s32, s32);
extern void f2(void *);
extern void f3(void *, s32, s32);
struct V2 { f32 x, y; };
void func(void)
{
    struct V2 t;
    if (D[0] != 0) {
        u32 i;
        char *p;
        s32 *s;
        char *o;
        p = (char *)D;
        for (i = 0; i < N1[0]; i++) {
            s = (s32 *)(p + 20);
            if (*(s32 *)(p + 24) != 0) {
                f1((void *)s[0], *(s32 *)(p + 24), 0);
                o = (char *)s[0];
                t = *(struct V2 *)(o + 16);
                f2(o);
                o = (char *)s[0];
                *(f32 *)(o + 16) = t.x;
                *(f32 *)(o + 20) = t.y;
                *(u32 *)(o + 12) |= 1;
                s[1] = 0;
            }
            p += 16;
        }
    }
    if (N2[0] != 0) {
        u32 i;
        s32 *s;
        char *q;
        q = (char *)D;
        for (i = 0; i < N2[0]; i++) {
            s = (s32 *)(q + 536);
            if (*(s32 *)(q + 540) != 0) {
                f3((void *)s[0], *(s32 *)(q + 540), 0);
                s[1] = 0;
                s[0] = 0;
            }
            q += 8;
        }
        N2[0] = 0;
    }
}
