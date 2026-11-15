struct E { char pad[52]; int v; };
struct G { int f; int a; int b; };
extern char D[];
extern struct G g;
int f(int a, int b) {
    char *r = D + a * 1668;
    struct E *p = (struct E *)(r + b * 20);
    if (p->v == 0) return 0;
    g.f = 1;
    g.a = a;
    g.b = b;
    return 1;
}
