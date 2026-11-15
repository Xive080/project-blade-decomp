struct F10 { f32 a[10]; };
struct P { int type; int pad; struct F10 f; f32 x; };
extern char D_002E0700[];
extern char *G_gp;
extern void func_00189320(struct P *, void *, char *, char *, int, int);
void f(char *o, char *b) {
    struct P p;
    struct F10 *d;
    char *q;
    d = &p.f;
    q = b + *(u16*)(o + 28);
    *d = *(struct F10*)D_002E0700;
    p.x = 1.0f;
    p.type = 1;
    p.f.a[2] = 0.8f;
    p.f.a[3] = 0.0f;
    p.f.a[4] = 0.0f;
    p.f.a[5] = 0.8f;
    func_00189320(&p, *(void**)(G_gp + 20), q, q, -1, 0);
}
