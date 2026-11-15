extern void *func_0011ec80(void *, int, int);
extern int func_00230bf0(void *, int);
struct E { unsigned f; int pad[4]; };
struct T { char p0[0x84]; struct E *e; };
struct R { char p0[0x14]; struct T *t; };
struct Gt { char p0[0x14]; struct T *t; int *tbl; int pp; unsigned short n; };
extern struct Gt *G_84B0;
struct S {
    int p0, p4, f8; char pc[0x10]; unsigned f18; unsigned short f1c; char p1e[0xe];
    unsigned f2c; unsigned f30; char p34[8]; int f3c, f40, f44, f48, f4c, f50;
    char p54[0x28*4]; int pf4;
};
void func(char *a) {
    unsigned i;
    char *q;
    i = 0;
    q = a;
    do {
        func_0011ec80(q + 0x54, 0, 0x28);
        i += 1;
        q += 0x28;
    } while (i < 4);
    *(int*)(a + 0xf4) = 0;
    func_0011ec80(a + 0xf8, 0, 0x1c);
    func_0011ec80(a + 0x114, 0, 0x4c);
    *(int*)(a + 0x40) = 0;
    *(int*)(a + 0x44) = 0;
    *(int*)(a + 0x4c) = 0;
    *(int*)(a + 0x48) = 0;
    *(int*)(a + 0x160) = 0;
    G_84B0->t->e[*(unsigned short*)(a + 0x1c)].f |= 2;
    { struct T *t = G_84B0->t; int k = *(unsigned short*)(a + 0x1c) + 3; t->e[k].f |= 2; }
    if (!(*(int*)(a + 0x2c) & 4)) {
        unsigned x = *(unsigned*)(a + 0x30);
        *(int*)(a + 0x3c) = x < G_84B0->n ? G_84B0->tbl[x] : 0;
    }
    *(int*)(a + 0x18) &= ~0x16;
    *(int*)(a + 8) = 0;
    *(int*)(a + 0x50) = func_00230bf0(a, 5);
}
