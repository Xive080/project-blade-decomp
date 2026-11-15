extern void a(void *, s32);
extern void b(f32);
extern void c(void);
extern void d(void *, f32);
struct S { char pad[8]; s32 p; f32 x; s32 y; };
s32 f(struct S *s, f32 t) {
    if (!(t < 0.0f)) {
        if (s->y == 0) {
            f32 v = s->x + t;
            a(s, s->p);
            d(s, v);
        } else {
            c();
        }
    } else {
        b(-t);
    }
    return 1;
}
