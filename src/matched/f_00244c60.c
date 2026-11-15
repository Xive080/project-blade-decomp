struct O { char pad[0x10]; void (*fn)(struct O *, s32, s32); };
struct A { char pad[0xc]; s32 c; char pad2[0x30]; s32 x; };
extern void func_00131d00(void);
extern void func_00132950(f32);
extern void func_00132c50(u8);
extern void func_00170ce0(s32);
extern f32 func_001b5c30(void);
extern void func_001ba140(char *, s32);
extern void func_00242e00(void);
extern u8 D_002FA61F[];
extern char D_00329770[];
extern struct O *G_84AC;
s32 func(struct A *a, s32 b) {
    s32 x;
    if (b == 5) {
        a->c = b;
        func_00131d00();
        func_00170ce0(-17);
        func_001ba140(D_00329770, 7);
        func_00132950(func_001b5c30());
        func_00132c50(D_002FA61F[0]);
        x = a->x;
        if (G_84AC != 0) {
            G_84AC->fn(G_84AC, 16, x);
        }
    } else {
        func_00242e00();
    }
    return 1;
}
