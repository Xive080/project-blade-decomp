typedef unsigned __int128 Q;
struct P { int a; int f4; char pad[8]; int fl; char rest[56]; };
struct E { long long q[8]; int pad[8]; int w[6]; char rest[3576 - 120]; };
struct C { char pad[196]; int m; };
struct R { char pad[80]; Q a, b, c; };
extern struct P players[2];
extern int busy;
extern struct E ents[2];
extern char da[], db[], dc[];
extern struct R *func_00203d70(int, struct E *);
extern void func_00127740(int, int);
extern void func_001a7130(void *);
extern char tail[];
void f(void) {
    int i, n;
    struct P *p;
    struct E *e;
    struct R *v;
    if (busy == 0 && (players[0].f4 & 0x10)) {
        n = 0;
        for (i = 0, p = players, e = ents; i < 2; i++, p++, e++) {
            if (p->fl & 1) {
                e->q[0] = 0; e->q[1] = 0; e->q[2] = 0; e->q[3] = 0;
                e->q[4] = 0; e->q[5] = 0; e->q[6] = 0; e->q[7] = 0;
                e->w[0] = 0; e->w[1] = 0; e->w[2] = 0;
                e->w[3] = 0; e->w[4] = 0; e->w[5] = 0;
            }
        }
        for (i = 0, p = players; i < 2; i++, p++) {
            if (p->fl & 1) n++;
        }
        v = func_00203d70((*(struct C **)0x70003FD8)->m, e);
        *(Q *)da = v->a;
        *(Q *)db = v->b;
        *(Q *)dc = v->c;
        func_00127740(*(int *)0x70003FD8, n);
        func_001a7130(tail);
    }
}
