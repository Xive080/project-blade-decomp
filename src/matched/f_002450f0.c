struct O;
struct V { char pad[0x18]; void (*fn)(struct O *, s32); };
struct O { struct V *vt; char pad[0x34]; s32 a; s32 b; s32 c; };
struct E { s32 x; s32 y; };
extern struct { s32 on; char pad[12]; struct E e[8]; } G;
extern unsigned char D_2FA61E;
void f243090(void);
void f(struct O *o) {
    u32 n;
    G.on = 1;
    f243090();
    o->a = D_2FA61E;
    o->b = o->a;
    o->c = 0;
    n = 8;
    while (n--) {
        G.e[n].y = 4;
    }
    o->vt->fn(o, 1);
}
