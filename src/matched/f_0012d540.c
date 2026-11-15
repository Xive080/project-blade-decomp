struct Q { char pad[0x14]; int f14; char pad2[0xc]; int f24; };
struct S {
    char p0[0xc];
    int f0c;
    char p10[0x24];
    struct Q * f34;
    int f38;
    char p3c[0x74];
    struct Q * fb0;
    char pb4[0x18];
    int fcc;
    char pd0[0x308];
    int f3d8;
    int f3dc;
    int f3e0;
    char p3e4[0x78];
    int f45c;
};
extern void func_0013be20(void*);
extern void func_00143600(void*);
extern void func_00148830(int);
extern void func_0016bb20(int, int);
extern struct { int a; void (*f)(void*); } *func_0017a3c0();
extern void func_0017b570(int);
extern void func_0017f4b0(void*);
extern void func_00180450(int);
extern void func_001c36f0(int);
extern void func_00201c00(int);
void func(struct S *s) {
    if (s->f45c != 0) { func_001c36f0(s->f45c); s->f45c = 0; }
    if (s->f38 != 0) { func_00180450(s->f38); s->f38 = 0; }
    if (s->f34 != 0) {
        func_0017b570(s->f34->f24);
        s->f34->f24 = 0;
        func_0017f4b0(s->f34);
        s->f34 = 0;
    }
    if (s->fcc == 0) {
        if (s->f3d8 != 0) { func_00148830(s->f3d8); s->f3d8 = 0; }
        if (s->f3dc != 0) { func_00148830(s->f3dc); s->f3dc = 0; }
    }
    if (s->f3e0 != 0) { func_0016bb20(s->f3e0, 0); s->f3e0 = 0; }
    if (s->fcc != 0) s->fcc = 0;
    if (s->fb0 != 0) {
        if (s->fb0->f14 != 0) func_00201c00(s->fb0->f14);
        func_00143600(s->fb0);
        s->fb0 = 0;
    }
    func_0013be20(s);
    func_0017a3c0()->f(s);
    s->f0c = 0;
}
