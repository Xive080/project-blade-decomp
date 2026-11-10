struct S { char pad[0x9c]; int a; int b; };
extern struct S g;
struct S *func(void) {
    g.a = 0;
    g.b = 0;
    return &g;
}
