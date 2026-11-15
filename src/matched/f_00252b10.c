typedef int s32;
typedef float f32;
struct V { f32 a, b, c, d; };
struct L { s32 a, b, c, d, e; f32 f; s32 g; struct V v; s32 pad[8]; };
struct O { char pad[0x28]; s32 x; s32 y; char p2[0x54]; s32 r; };
extern f32 *G;
extern char D[];
void func_0024b410(void *, s32, f32, f32);
void func_0024b3c0(void *, f32, f32, f32, f32, f32);
s32 func_00189050(struct L *, s32, s32, s32);
void func(struct O *o) {
    struct L l;
    f32 *q = (f32 *)((char *)G + 0x98);
    f32 t;
    func_0024b410(o, 1, 0.0f, 0.0f);
    func_0024b3c0(o, 0.5f, 0.5f, 0.0f, 640.0f / q[2], 1.0f);
    t = q[2];
    l.a = 7; l.b = 0; l.c = 0; l.d = 0; l.e = 0;
    l.f = t;
    l.g = 0x43E00000;
    l.v = *(struct V *)D;
    o->r = func_00189050(&l, *(s32 *)G, o->x, o->y);
}
