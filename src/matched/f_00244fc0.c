struct E { int a; int b; };
struct G { int p0; int p1; int cur; int z; struct E e[1]; };
struct O { int p0; int fl; char p[48]; int n; int pad; int i; };
extern struct G g_332c40;
extern char g_329770[];
extern void func_00131d00(void);
extern void func_00133120(int);
extern void func_00170ce0(int);
extern void func_001ba140(char *, int);
void func(struct O *o)
{
    int n;
    struct E *e;
    int i;
    o->i = -1;
    n = o->n;
    if (n-- != 0) do {
        switch (g_332c40.e[n].b) {
        case 4:
        case 1:
            g_332c40.e[n].b = 0;
            break;
        case 2:
            g_332c40.e[n].b = 3;
            break;
        }
        g_332c40.e[n].a = 0;
    } while (n-- != 0);
    func_00131d00();
    func_00170ce0(-17);
    func_001ba140(g_329770, 7);
    do {
        o->i = o->i + 1;
        i = o->i;
        if (!(i < o->n)) break;
    } while (g_332c40.e[i].b != 0);
    g_332c40.cur = i;
    g_332c40.z = 0;
    o->fl = o->fl & ~4;
    func_00133120(7);
}
