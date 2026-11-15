struct E { char p[44]; };
struct S { char pad[24]; s32 w; char pad2[4]; s32 h; char pad3[144]; struct E *e; };
s32 func(struct S *s, s32 (*cb)(struct E *, s32, s32, s32), s32 arg) {
    s32 n = 0;
    s32 y, x;
    for (y = 0; y < s->w; y++) {
        for (x = 0; x < s->h; x++) {
            if (cb(&s->e[y + x * s->w], y, x, arg) != 0) n++;
            else return n;
        }
    }
    return n;
}
