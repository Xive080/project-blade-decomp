extern s32 G_8338;
extern s32 D_002FED10[];
struct T { char pad[4]; s32 **x; };
struct S { char pad[0xe4]; s32 f; char pad2[0x68]; struct T *n150; s32 **n154; };
void func(s32 a, struct S *s) {
    s->f = 0;
    *s->n154 = (s32 *)s->n150;
    s->n150->x = s->n154;
    D_002FED10[(a - G_8338) / 68] -= 1;
}
