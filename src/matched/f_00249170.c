struct O { char pad[0x48]; void (*fn)(struct O *); };
extern void func_001c5eb0(s32, s32);
extern struct O *G_89D4[1];
void func(void) {
    u32 i;
    struct O **pp;
    func_001c5eb0(0xA, 5);
    func_001c5eb0(0xB, 2);
    func_001c5eb0(9, 2);
    func_001c5eb0(6, 1);
    func_001c5eb0(8, 0);
    pp = G_89D4;
    for (i = 0; i < 1; i++) {
        (*pp)->fn(*pp);
        pp++;
    }
    func_001c5eb0(6, 1);
    func_001c5eb0(8, 1);
    func_001c5eb0(0xB, 6);
}
