struct C4 { f32 r, g, b, a; };
struct Ent { struct C4 col; char pad[0x4c - 16]; };
struct P { char pad0[0x64]; s32 sel; char pad1[0x170 - 0x68]; f32 t; s32 flag; };
struct G { char pad[12]; void (*f)(void *); };
extern struct Ent D_002FA38C[];
extern struct P *D_002FA590[];
extern struct G *G_84AC;
extern s32 func_001a4b70();
extern void func_0024af70(s32);
s32 func(void) {
    s32 s;
    s32 sel;
    f32 t;
    if (func_001a4b70() == 3) s = 0; else s = 1;
    if (s != 0 && G_84AC != 0) G_84AC->f(G_84AC);
    sel = D_002FA590[0]->sel;
    if (sel != -1) {
        t = D_002FA590[0]->t;
        if (!(t <= 0.0f)) {
            struct C4 c;
            if (t < 0.15f) t = t / 0.15f;
            else t = (0.4f - t) / 0.25f;
            c.r = 255.0f; c.g = 255.0f; c.b = 255.0f;
            t *= 255.0f;
            c.a = t;
            D_002FA38C[sel].col = c;
        } else if (D_002FA590[0]->flag != 0) {
            struct C4 c;
            c.r = 0; c.g = 0; c.b = 0; c.a = 0;
            D_002FA38C[sel].col = c;
            D_002FA590[0]->flag = 0;
        }
    }
    if (s != 0) func_0024af70(sel);
    return 1;
}
