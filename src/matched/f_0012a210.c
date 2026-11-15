extern void func_00129210(void *, void *, int);
extern void func_001a8d50(void *);
extern void func_001a9780(void *);
extern void func_001c36f0(int);
extern void func_00201c00(int);
extern int func_00203d70(int);
extern void func_00203d90(int);
extern void func_00222260(int);
extern char D_0012A390[];
struct G { char p[308]; void (*fr)(int); };
extern char D_0032A620[];
struct O {
    char p0[0x78]; int a78; int a7c; char p1[0x30]; int ab0; int ab4; char p2[0x0c]; int ac4; char p3[0x2f20]; int a2fe8;
};
void func(struct O *o) {
    int i, j;
    char *p, *q;
    func_00129210(o, D_0012A390, 0);
    if (o->ab4) { ((struct G *)D_0032A620)->fr(o->ab4); o->ab4 = 0; }
    if (o->ab0) { ((struct G *)D_0032A620)->fr(o->ab0); o->ab0 = 0; }
    if (o->a7c) { func_00201c00(o->a7c); o->a7c = 0; }
    if (o->a78) { func_00201c00(o->a78); o->a78 = 0; }
    i = 0;
    q = (char *)o;
    for (; i < 13; i++) {
        j = 0;
        p = q;
        for (; j < 2; j++) {
            func_001a8d50(p + 200);
            func_001a9780(p + 200);
            func_001a8d50(p + 9248);
            func_001a9780(p + 9248);
            func_001a8d50(p + 3216);
            func_001a9780(p + 3216);
            func_001a8d50(p + 6232);
            func_001a9780(p + 6232);
            p += 116;
        }
        q += 232;
    }
    if (o->a2fe8) { func_00222260(o->a2fe8); o->a2fe8 = 0; }
    if (o->ac4) { func_001c36f0(func_00203d70(o->ac4)); func_00203d90(o->ac4); o->ac4 = 0; }
}
