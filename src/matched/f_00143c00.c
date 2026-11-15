typedef float f32;
typedef int s32;
struct B8 { int a, b; };
extern struct B8 G_8028;
extern s32 G_8350;
extern s32 G_8360;
extern s32 D_002FA43C[];
s32 func_001c2580();
s32 func_001c35a0();
s32 func_001c2510(s32);
void func_001c36f0(s32);
void func_001c24e0(s32, s32);
void func_001c2520(s32);
void func_001c2190(s32, s32);
void func_001c21b0(s32, s32);
void func_001c2220(s32, f32);
void func_001c21d0(s32, f32);
void func_001c2420(s32, void *);


#define MK(var, loc, G) \
    { struct B8 *ps = &loc; *ps = G_8028; \
    if ((var = func_001c2580()) == 0) { var = 0; } else { \
        s32 r = func_001c35a0(); \
        if (r == 0) { \
            if (var != 0) { s32 t = func_001c2510(var); \
                if (t != 0) { func_001c36f0(t); func_001c24e0(var, 0); } \
                func_001c2520(var); } \
            var = 0; \
        } else { \
            func_001c24e0(var, r); func_001c2190(var, 0); func_001c21b0(var, 0); \
            func_001c2220(var, 30.0f); func_001c21d0(var, 0.1f); func_001c2420(var, &loc); \
        } } \
    G = var; }
void func_001c2390(s32, s32);
s32 func(void) {
    struct B8 a, b;
    s32 s;
    MK(s, a, G_8350)
    if (s == 0) return 0;
    MK(s, b, G_8360)
    if (s == 0) return 0;
    func_001c2390(G_8350, 2);
    func_001c2390(G_8360, 2);
    func_001c2190(G_8350, D_002FA43C[0]);
    return 1;
}
