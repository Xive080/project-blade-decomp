typedef int s32;
typedef float f32;
struct O { char pad[0x3c]; void (*f)(struct O *, char *, char *, f32); void (*g)(char *, s32); s32 a; s32 n; };
void h(char *, char *);
void func(char *p, struct O *o, s32 c) {
    s32 a;
    void (*g)(char *, s32);
    o->f(o, p + 56, p + 12, 0.0f);
    o->n = o->n + 1;
    if (c) {
        g = o->g;
        if (g) {
            a = o->a;
            h(p, (char *)o - 8);
            g(p, a);
            return;
        }
    }
    h(p, (char *)o - 8);
}
