struct T { s32 r; s32 b; };
s32 g2(s32);
void g3(s32, s32 (*)(s32, struct T *), struct T *);
s32 G(s32, struct T *);
s32 func(s32 a, struct T *t) {
    if (t->b == g2(a)) {
        t->r = a;
        return 0;
    }
    g3(a, G, t);
    if (t->r != 0) return 0;
    return a;
}
