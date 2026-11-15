extern int G8574;
extern int G8328;
extern int f13b550(int, int);
extern void f1785a0(int);
extern void f24b470(int, int);
extern void f24b4b0(int, int);
extern void f24b540(int, int, void *);
struct S { char p[12]; int a; int m; };
int func(struct S *s, int b) {
    int l[8];
    switch (b) {
    case 4:
    case 5:
        if (s->a != 0) {
            s->a = 0;
            G8574 = G8574 | s->m;
        } else {
            s->a = 1;
            G8574 = G8574 & ~s->m;
        }
        f1785a0(2);
        f24b470(13, s->a);
        break;
    case 0:
        l[0] = 2;
        l[1] = f13b550(G8328, 0x111);
        l[2] = f13b550(G8328, 0x112);
        f24b540(13, 0, l);
        if (G8574 & s->m) s->a = 0; else s->a = 1;
        f24b470(13, s->a);
        break;
    case 1:
        f24b4b0(13, 0);
        break;
    }
    return 1;
}
