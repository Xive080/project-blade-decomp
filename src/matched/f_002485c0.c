struct S { u16 n; s16 h; void *a; void *b; char c[128]; s32 x; s32 y; s32 z; s32 w; };
extern s32 off;
extern void ms(void *, s32, s32);
void f(s32 i) {
    struct S *s = *(struct S **)(i + off);
    if (s->a) ms(s->a, 0, s->n * 16);
    if (s->b) ms(s->b, 0, s->n * 16);
    ms(s->c, 0, 128);
    s->h = 0;
    s->x = 0;
    s->y = 0;
    s->w = 0;
}
