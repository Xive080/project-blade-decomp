struct Q { int p0; float f; int p8; int pc; };
struct A { char pad[116]; struct Q q; float s; };
struct B { char pad[8]; float x; float y; };
extern int func_00256438(float);
extern void func_00182660(int, int, int, int, struct B *);
void f(struct A *a, struct B *b) {
    struct Q *q = &a->q;
    float inv = 1.0f / a->s;
    b->x = b->x * inv;
    b->y = b->y * inv;
    func_00182660(q->p0, func_00256438(0.5f + q->f), q->p8, q->pc, b);
}
