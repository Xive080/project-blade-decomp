struct O { char pad[0x28]; f32 f; s32 w; };
struct V { char pad[0x3c]; };
struct T { char pad[0x80]; };
struct S { s32 x; char a[4]; };
extern s32 f183c40(char *, s32, s32, struct O *, f32, s32, void *);
extern void f186970(struct S *);
struct M { char pad[0x3c]; };
struct P { char pad[0x3c]; char b[4]; };
struct Q { char pad[0x80]; void (*fn)(void *, void *, void *); };
struct R { s32 x; char a[4]; };
void func(struct O *o, struct S *s, struct R *r) {
    struct Q *v;
    if (f183c40(s->a, 4, o->w, o, o->f, s->x, r) == 0) {
        v = *(struct Q **)r;
        if (v == 0) {
            f186970(s);
            return;
        }
        v->fn((char *)v + 60, s, r->a);
    }
}
