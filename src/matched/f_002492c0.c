extern struct { s32 v; char pad[12]; } D_;
#define D_002FA360 (D_.v)
struct T { u16 a; f32 b; s32 c; };
extern struct T D_002E87B8[];
extern s32 G[2];
void func_00131b70(s32);
s32 *func_00170070(s32);
void func_001c2170(s32);
void func_00248660(s32);
s32 func_002486c0(u16, s32, f32);
void func(void) {
    u32 i;
    struct T *t;
    s32 *g;
    func_00131b70(D_002FA360);
    t = D_002E87B8;
    g = G;
    for (i = 0; i < 1; i++) {
        *g = func_002486c0(t->a, *func_00170070(t->c), t->b);
        func_00248660(*g);
        t++;
        g++;
    }
    func_001c2170(D_002FA360);
}
