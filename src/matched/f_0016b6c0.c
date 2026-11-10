struct S { char pad[20]; f32 v; };
extern f32 sub(struct S *);

f32 func(struct S *p, f32 x) {
    if (p == 0) {
        return 0.0f;
    }
    p->v = p->v + x;
    return sub(p);
}
