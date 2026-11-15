struct O {
    char p0[16]; int fl; char p1[40]; int st; char p2[112]; int f176; char p3[8]; int f188; int f192; int f196; int f200;
    char p4[8]; float f212; char p5[660]; int f876; int f880; int f884;
};
extern void func_0017a2c0(struct O *);
extern void func_00179a00(struct O *, int, int, int);
extern void func_00221a70(int);
int f(struct O *o0) {
    struct O *o = (struct O *)((int)o0);
    int a = 0;
    int b = 0;
    int x;
    if (o->fl & 4) {
        o0->fl = o->fl & ~4;
        func_0017a2c0(o);
    }
    x = o->f188;
    if (o->st == 2) {
        a = o->f192;
        b = o->f876;
    } else if (o->st == 4) {
        a = o->f196;
        b = o->f880;
    } else if (o->st == 1) {
        a = o->f200;
        b = o->f884;
        {float g = *(float *)0x70003fb0; o->f212 = 2.0f + g;}
    }
    if (x) func_00179a00(o, x, a, o->f176);
    if (b) func_00221a70(b);
    return 1;
}
