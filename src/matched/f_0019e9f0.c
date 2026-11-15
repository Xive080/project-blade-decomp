struct E { char pad[20]; int a; int b; char pad2[0]; };
struct En { char q[20]; int a; int b; };
struct Big { char p0[20]; int v20; char p1[24]; int v48; char p2[4]; struct En e[8]; char p3[56]; };
struct Sm { int n; void *p; };
extern int G8328;
extern struct Big D2E2370;
extern unsigned char D2FA61F[];
extern char D5FA0[];
extern char D6900[];
extern char D2EFEB8[];
extern char *G851C;
extern struct Sm G84D8;
extern int f13b550(int, int);
extern void f195a30(char *, int, int);
extern void f1214b8(char *, char *, int, char *);
extern int f121b70(char *);
extern int f1a3ac0(char *, int, int);
extern char *f1b54e0(void);
extern int f1b5470(void);
extern int f1b4ee0(void);
extern int f1b6240(void);
extern void f24b540(int, int, struct Sm *);

int func(char *a, int b, int c)
{
    switch (b) {
    case 0:
        *(int *)(a + 8) = f13b550(G8328, 0);
        *(int *)(a + 12) = 0;
        *(char **)(a + 20) = D5FA0;
        *(int *)(a + 16) = 1;
        *(int *)(a + 24) = 0;
        *(int *)(a + 4) = 0;
        f195a30(D5FA0, 7, 43);
        *(int *)(a + 4) |= 10;
        break;
    case 9:
        if (f1b6240() == 0) return 1;
        break;
    case 3: {
        unsigned i;
        char *s1 = f1b54e0() + D2FA61F[0] * 224 + 76;
        struct Big l = D2E2370;
        struct En *e;
        char loc[24];
        struct Sm sm;
        if (f1b4ee0() < 7) {
            f195a30(D5FA0, 0, 46);
        } else if (f1b5470() >= 0) {
            f195a30(D5FA0, 0, 48);
        } else {
            f195a30(D5FA0, 0, 43);
        }
        G851C = 0;
        l.v20 = f13b550(G8328, 58);
        l.v48 = f13b550(G8328, D2FA61F[0] + 22);
        e = l.e;
        for (i = 0; i < 8; i++) {
            f1214b8(loc, D2EFEB8, i + 1, s1);
            if (G851C) G851C += f121b70(G851C) + 1;
            else G851C = D6900;
            f1214b8(G851C, s1, 0, 0);
            e->a = (int)G851C;
            e->b = (int)(s1 + 16);
            s1 += 28;
            e++;
        }
        sm = G84D8;
        sm.n = 12;
        sm.p = &l;
        f24b540(10, 0, &sm);
        break;
    }
    }
    return f1a3ac0(a, b, c);
}
