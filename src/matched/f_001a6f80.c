extern void sub(s32, s32);
extern char D[];
struct G { char pad[0x130]; s32 *(*f)(s32); };
struct O { char pad[0x88]; s32 a; char p2[8]; s32 b; s32 c; };
extern int off;
extern int off2;
s32 func(s32 a, s32 b) {
    s32 *s0, *v;
    s32 n;
    s0 = *(s32**)(b + off);
    if (s0 == 0) return 0;
    v = *(s32**)(a + off);
    if (v == 0) {
        v = (s32*)((struct G*)D)->f(156);
        if (v == 0) { v = 0; } else { ((struct O*)v)->a = 0; ((struct O*)v)->b = 0; ((struct O*)v)->c = 1; }
        if (v == 0) return 0;
        *(s32**)(a + off) = v;
    }
    n = 39;
    do { n--; *v = *s0; s0++; v++; } while (n > 0);
    sub(a, off2);
    return a;
}
