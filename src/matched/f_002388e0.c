struct S { s32 a; s32 b; };
extern struct S g_s;
extern struct S *g_ptr;
struct S *func(void) {
    if (g_ptr == 0) {
        struct S *p;
        g_ptr = &g_s;
        p = g_ptr;
        p->a = 19;
        p->b = 0;
    }
    return g_ptr;
}
