extern unsigned char D_2FA61F;
extern float D_3070D0;
extern void func_1b57b0(unsigned char, int, float);
extern char D_3170A0[];
extern struct G { int a; int b; char *c; int d; } g;
void f(int a) {
    func_1b57b0(D_2FA61F, a, D_3070D0);
    g.b = 1;
    g.c = D_3170A0;
    g.d = g.a;
}
