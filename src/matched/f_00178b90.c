extern void func_0011ec80();
extern void func_00197cf0();
extern void func_00178d60();
extern void func_0024cff0();
extern void func_001981f0();
extern void func_00172270();
extern int func_001a3fb0();
extern void func_00198120();
struct V { float v[7]; };
extern struct GG { union { struct V a; struct { int h; int pad[3]; int p; float f5; float f6; } w; } u; char buf[8]; int z[3]; } D_00309DE8;
int f(struct V *src) {
    float t;
    int u;
    D_00309DE8.u.a = *src;
    func_0011ec80(D_00309DE8.buf, 0, 8);
    t = D_00309DE8.u.w.f5;
    func_00197cf0(&t);
    func_00178d60();
    func_0024cff0();
    u = 0;
    func_001981f0(&u);
    D_00309DE8.z[0] = 0;
    D_00309DE8.z[1] = 0;
    D_00309DE8.z[2] = 0;
    if (D_00309DE8.u.w.p) func_00172270(D_00309DE8.u.w.p, 1);
    func_00198120(func_001a3fb0(D_00309DE8.u.w.h), 0);
    return 1;
}
