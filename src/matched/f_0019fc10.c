extern int G8328;
extern int G8574;
extern char D_00316240[], D_00316260[], D_00316280[], D_003162A0[], D_003162C0[];
int f13b550(int, int);
void f1956b0(void *, int, int);
void f195a30(void *, int, int);
void f1a3ac0(void *, int, void *);
int f1b4c00(int);
int f1b4fb0(int);
struct A { int a0, a4, a8, aC, a10; void *a14; int a18; };
struct B { int b0, b4, b8; char bC, bD, bE, bF; };
void func(struct A *p, int op, struct B *q) {
    switch (op) {
    case 2:
    case 0:
        f195a30(D_00316260, 7, 10);
        f195a30(D_00316280, 6, 9);
        f1956b0(D_003162A0, 5, 0);
        f195a30(D_003162C0, 4, 8);
        if ((G8574 & 1) || f1b4fb0(1) != 0) f195a30(D_00316240, 3, 13);
        else f1956b0(D_00316240, 3, 0);
        if ((G8574 & 4) || f1b4c00(2) != 0) {
            p->a8 = f13b550(G8328, 29);
            p->aC = f13b550(G8328, 30);
            p->a14 = D_00316240; p->a10 = 5; p->a18 = 0; p->a4 = 0;
        } else {
            p->a8 = f13b550(G8328, 29);
            p->aC = f13b550(G8328, 30);
            p->a14 = D_00316240; p->a10 = 4; p->a18 = 0; p->a4 = 0;
        }
        break;
    case 12: {
        int t = p->a18;
        switch (t) {
        case 0:
            q->b4 = 0; q->bC = 0; q->b0 = 3;
            if (!(G8574 & 1) && f1b4fb0(1) == 0) q->bF = 1;
            break;
        case 1: q->b0 = 5; break;
        case 2: q->b0 = 4; break;
        case 3: q->b0 = 2; q->b4 = 0; q->bC = 0; q->bF = 0; break;
        case 4: q->b0 = 6; break;
        }
        break; }
    }
    f1a3ac0(p, op, q);
}
