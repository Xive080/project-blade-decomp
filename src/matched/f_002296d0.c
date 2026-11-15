typedef int s32;
typedef float f32;
struct A { char p0[56]; s32 x38; s32 x3c; char p1[4]; s32 x44; };
struct B { char p0[8]; s32 id; char p1[324]; f32 f; };
struct C { char p0[4]; f32 v; };
extern s32 f22bd00(s32);
extern void f243290(struct A *, struct B *, s32, struct C *);
void func(struct A *a, struct B *b, s32 m, struct C *c) {
    s32 r;
    if (a->x38 != 0) {
        if (m == 1) {
            r = f22bd00(a->x3c);
            if (r != b->id) {
                b->f -= c->v;
            } else if (a->x44 != 0) {
                b->f += c->v;
            }
        }
    } else if (m == 1) {
        b->f -= c->v;
    }
    f243290(a, b, m, c);
}
