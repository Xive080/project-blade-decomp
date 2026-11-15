struct E { void (*fn)(void); s32 x; };
struct S { char p0[20]; u32 n; struct E *t; };
void f(struct S *s, u32 i) {
    if (i < s->n) {
        s->t[i].fn();
    }
}
