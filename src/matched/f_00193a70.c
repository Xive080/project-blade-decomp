struct S { s32 (*f0)(struct S *, s32, s32); void (*f4)(struct S *, s32); char pad[0x1dc]; s32 x; };
extern s32 on;
s32 func(struct S *s, s32 b) {
    s32 v;
    if (on == 0 || s->x == 0) return 0;
    v = s->f0(s, b, 5);
    if (v != 0) { s->f4(s, v); return 1; }
    return 0;
}
