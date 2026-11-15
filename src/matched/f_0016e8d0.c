extern void f0(void); extern void f1(void); extern void f2(void);
struct T { void *a; void *b; void *c; s32 d; };
extern void sub(s32, struct T *, s32, s32);
extern struct T g;
s32 func(void) {
    g.a = f2;
    g.b = f0;
    g.c = f1;
    g.d = 0;
    sub(0x100, &g, 0x8a4, 0);
    return 1;
}
