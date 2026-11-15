typedef int s32;
typedef unsigned int u32;
struct S { s32 pad0[4]; s32 a; s32 b; s32 c; };
struct T { s32 w[4]; s32 a; s32 b; };
struct G { s32 w[81]; };
extern struct G *G_8984;
extern char D_A[], D_B[];
extern void f121a58(void *, void *);
struct G *func(void) {
    if (G_8984 == 0) {


        u32 i; s32 *q; s32 *p;
        G_8984 = (struct G *)D_B;
        p = (s32 *)G_8984;
        f121a58(G_8984, D_A);
        p[4] = 0;
        i = 0; q = p;
        do {
            p[5] = 0x7FFFFFFF;
            p[6] = 0x7FFFFFFF;
            ((s32 **)q)[81] = p + 5;
            q[82] = 0;
            q[83] = 0;
            i++;
            q[84] = 0;
            p += 2;
            q += 4;
        } while (i < 38);
    }
    return G_8984;
}
