struct T { char b0[20]; int f20; char b1[256]; };

struct U { int a; int b; };
extern int G_8328;
extern int G_851C;
extern long long G_84D8;
extern struct T D_002E2EB0;
extern char D_00315AC0[];
extern int f13b550(int, int);
extern void f195a90(void*, int);
extern void f1a3ac0(int*, int, int);
extern int f1b4c00(unsigned);
extern void f24b540(int, int, void*);

void func(int *arg0, int arg1, int arg2) {
    switch (arg1) {
    case 0: {
        arg0[2] = f13b550(G_8328, 219);
        arg0[3] = 0;
        arg0[5] = (int)D_00315AC0;
        arg0[4] = 1;
        arg0[6] = 0;
        arg0[1] = 0;
        f195a90(D_00315AC0, 219);
        arg0[1] = arg0[1] | 0x12;
            break;
    }
    case 3: {
        struct T t = D_002E2EB0;
        unsigned s0;
        char *s1;
        struct U u;
        G_851C = 0;
        t.f20 = f13b550(G_8328, 219);
        s1 = t.b0;
        for (s0 = 0; s0 < 7; s0++) {
            *(int*)(s1 + 48) = f13b550(G_8328, s0 + 220);
            if (f1b4c00(s0) != 0) {
                *(int*)(s1 + 52) = f13b550(G_8328, s0 + 227);
            } else {
                *(int*)(s1 + 52) = f13b550(G_8328, 234);
                *(int*)(s1 + 28) = 28;
            }
            s1 += 28;
        }
        *(long long*)&u = G_84D8;
        u.a = 10;
        u.b = (int)t.b0;
        f24b540(10, 0, &u);
        break;
    }
    }
    f1a3ac0(arg0, arg1, arg2);
}
