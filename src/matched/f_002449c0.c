struct O {
    struct OV *vt;
    int f4;
    int pad8;
    int fc;
    char pad10[0x28];
    int i38;
    char pad3c[4];
    int i40;
};
struct OV { char pad[0x18]; void (*m18)(struct O *, int); };
struct E { float a; int b; };
extern void func_00133120(int);
extern int func_001b5050(int, int);
extern int func_00242b20(struct O *, int, int);
extern int func_00244cf0(struct O *);
extern void func_00244fc0(void);
extern int D_002FA42C[];
extern unsigned char D_002FA61F[];
extern volatile int D_00306F84[];
extern volatile int D_00307534[];
extern int D_00332C40[];
extern int D_00332C44[];
extern int D_00332C48[];
extern int D_00332C4C[];
extern struct E D_00332C50[];
extern float D_003070D0[];
extern int D_70003FC8[];

int func(struct O *o, int a1, int a2)
{
    int t;
    switch (a1) {
    case 3:
        if (o->fc == 3) {
            if (D_70003FC8[0] == 7) {
                o->vt->m18(o, 8);
            } else {
                func_00244fc0();
            }
        }
            break;
    case 4:
        D_00332C50[o->i40].a = D_003070D0[0];
        D_00332C50[o->i40].b = 1;
        D_00332C44[0] = o->i40;
        do {
            o->i40 = o->i40 + 1;
        } while (o->i40 < o->i38 && D_00332C40[o->i40 * 2 + 5] != 0);
        D_00332C48[0] = o->i40;
        t = o->i40 < o->i38;
        if (t) t = D_00332C50[o->i40].b == 0;
        if (t) {
            D_00332C4C[0] = 1;
            o->f4 &= ~4;
            func_00133120(7);
            break;
        }
        if (func_00244cf0(o) != 0) {
            D_00332C4C[0] = 3;
            o->f4 &= ~4;
            func_00133120(7);
            break;
        }
        D_00332C4C[0] = 2;
        D_002FA42C[0] = 1;
        do {
            D_002FA61F[0] += 1;
            D_002FA61F[0] = (unsigned char)((unsigned char)D_002FA61F[0] % 7U);
        } while (func_001b5050(D_002FA61F[0], 11) != 2);
        o->f4 |= 4;
        func_00133120(7);
        o->vt->m18(o, 3);
        D_00306F84[0] = D_00306F84[0] & ~4;
        D_00307534[0] = D_00307534[0] & ~4;
        return 1;
        }
    return func_00242b20(o, a1, a2);
}
