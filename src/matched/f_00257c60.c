typedef unsigned u32;
typedef int s32;
extern void f1(s32);
extern void f2(s32);
extern s32 G0[];
extern u32 N;
void func(void) {
    u32 i;
    s32 *q;
    s32 *p;
    if (G0[0]) {
        p = G0;
        for (i = 0; i < N; p += 4, i++) {
            q = p + 5;
            if (q[2]) { f1(q[2]); q[2] = 0; }
            if (q[3]) { f1(q[3]); q[3] = 0; }
            if (q[0]) { f2(q[0]); q[0] = 0; }
        }
    }
}
