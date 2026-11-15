struct E { int a; char p[16]; int b; int pad; };
struct P { struct E *e; char pad[1408]; };
struct L { int a; int one; int z; int w; int w2; };
struct Q { int a, b, c, d; };
struct S2 { int a; int b; };
extern struct E tab[3];
extern struct P pt[3];
extern int g1c;
extern int g18;
extern struct S2 g10;
extern char D550[];
extern int D574[4];
extern char Dq[];
extern int D540[4];
extern char D580[];
extern char C580[];
extern int f1(struct L *);
extern void f2(void);
extern void f3(struct S2 *, int);
extern void f4(int, char *, int);
extern void f5(void);
extern void f6(char *, int, int);
extern void f7(char *, int, int, struct Q *, int, char *, int, int, long long);
extern void f8(int *, char *, int);
extern void f9(int);
int func(struct Q *s) {
    struct L l;
    int i;
    {
        struct E *e = tab;
        struct P *p = pt;
        i = 0;
        do {
            p->e = e;
            e->a = -1;
            e->b = 0;
            e++;
            p++;
            i++;
        } while (i < 3);
    }
    {
    int *z = &l.z;
    *z = 0;
    l.one = 1;
    g1c = f1(&l);
    *z = 1;
    g18 = f1(&l);
    }
    f2();
    f3(&g10, 1);
    f4(0, C580, 0);
    f5();
    do {
        int t, n;
        f6(D550, 0x475453, 0);
        n = 10000;
        do {
            t = n;
            n--;
            asm { nop } asm { nop } asm { nop }
            if (t == 0) break;
        } while (1);
    } while (D574[0] == 0);
    f9(0);
    {
    struct Q *q = (struct Q *)Dq;
    if (s) {
        q->a = s->a; q->b = s->b; q->c = s->c; q->d = s->d;
    } else {
        q->a = 3; q->b = 3; q->c = 48; q->d = 16;
    }
    {
        struct Q *x3 = (struct Q *)Dq;
        char *x1 = D580;
        f7(D550, 1, 0, x3, 16, x1, 16, 0, 0);
    }
    }
    f8(D540, D580, 16);
    return D540[0] != 0;
}
