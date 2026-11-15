struct S { float f[10]; };
struct O { char pad[12]; int fl; struct S s; };
extern char D[];
void f(struct O *o) {
    o->s = *(struct S *)D;
    o->fl |= 0xb;
}
