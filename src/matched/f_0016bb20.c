struct E { s32 p; s32 x; };
struct S { s32 a; s32 b; s32 c; s32 n; struct E *e; };
extern void func_001cc6b0(s32, s32);
extern void func_001cc9b0(s32);
extern void func_002042f0(s32, s32);
extern char D_0032A620[];
struct G { char pad[308]; void (*fn)(void*); };

s32 func(struct S *s, s32 flag) {
    s32 i;
    if (s == 0) return 0;
    if (s->a != 0) {
        func_002042f0(s->a, s->b);
    } else {
        func_001cc6b0(s->b, s->c);
    }
    if (s->e != 0) {
        if (flag != 0) {
            for (i = 0; i < s->n; i++) {
                if (s->e[i].p != 0) {
                    func_001cc9b0(s->e[i].p);
                    s->e[i].p = 0;
                }
            }
        }
        ((struct G*)D_0032A620)->fn(s->e);
        s->e = 0;
    }
    ((struct G*)D_0032A620)->fn(s);
    return 1;
}
