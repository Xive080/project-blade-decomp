struct V3 { float x, y, z; };
struct L { struct V3 a; int p0; struct V3 b; int p1; int c; int d; };
extern char g[]; extern void func_00129300(void *, void *, void *, char *, void *);
void *f(void *o, int d, struct V3 *a, struct V3 *b, int c) {
    struct L l;
    l.a = *a; l.b = *b; l.d = d; l.c = c;
    func_00129300(o, a, b, g, &l.a);
    return o;
}