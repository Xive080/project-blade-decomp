struct T { s32 a, b, c, d; };
struct S { s32 a, b; struct T *t; };
extern struct G { char pad[0x6b8]; s32 v; } g;
s32 func(struct S *p) {
    p->t->d = g.v;
    return 1;
}
