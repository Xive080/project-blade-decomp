struct Tb { char pad[308]; s32 (*fn)(s32); };
extern char base[];
struct H { s32 a; s32 b; s32 c; s32 d; };
extern struct H h;
s32 func(void) {
    struct Tb *t = (struct Tb *)base;
    s32 (**pf)(s32) = &t->fn;
    t->fn(h.b);
    h.b = 0;
    (*pf)(h.a);
    h.a = 0;
    (*pf)(h.c);
    h.c = 0;
    (*pf)(h.d);
    h.d = 0;
    return 1;
}
