struct T { char pad[0x20]; s32 n; s32 base; };
struct S { struct T *t; };
extern s32 f215c50();
void func(struct S *a, char *b) {
    s32 *base;
    s32 n;
    if (f215c50() && (*(s32*)(b + 8) & 6)) {
        struct T *t = a->t;
        base = (s32 *)t->base;
        n = t->n;
        base[n * 3 - 2] = 1;
    }
}
