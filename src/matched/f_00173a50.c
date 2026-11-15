#pragma mpwc_relax on
struct P { s32 a, b, c, d, e, f; void *g; };
void func_00131540(s32, void*);
void func_001a9a40(s32, s32);
void func_00178b90(struct P*);
void func_001744d0(s32, s32);
void func_001a7240(s32, f32);
extern char D_00173B30[];
extern char D_00173C50[];
extern s32 D_002FA6DC[];
extern s32 G_8438, G_843C, G_8440, G_8444, G_844C;

s32 func(void) {
    struct P p;
    G_843C = 9;
    func_00131540(0, D_00173C50);
    func_001a9a40(-1, 1);
    G_8438 = 0;
    G_8440 = 0;
    G_844C = 0;
    D_002FA6DC[0] = 0;
    if (G_8444 == 1 || G_8444 == 3) p.a = 70; else p.a = 63;
    p.b = 0;
    p.c = 1;
    p.d = 2;
    p.e = 0;
    p.f = 0;
    p.g = D_00173B30;
    func_00178b90(&p);
    func_001744d0(0, 1);
    func_001744d0(1, 1);
    func_001a7240(0, 0.0f);
    func_001a7240(1, 0.0f);
    return 1;
}
