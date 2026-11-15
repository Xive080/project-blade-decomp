extern void f1785a0(int);
extern void f198120(int, int);
struct S { int a; int b; int fl; int c; };
int f(struct S *p, int b) {
    switch (b) {
    case 6:
        if (p->fl & 1) {
            f1785a0(5);
        } else {
            f198120(p->c, 1);
            f1785a0(0);
        }
        break;
    default:
        break;
    }
    return 1;
}
