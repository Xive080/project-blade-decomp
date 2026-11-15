struct V { int x, y, z; int pad[4]; };
struct C { char p[16]; void (*fn)(struct C *, int, void *); };
extern struct { unsigned char v; char pad[12]; } B_;
#define B61F (B_.v)
extern struct C *G84AC; extern int G8328;
extern void fa(void *, void *); extern void fb(void *); extern void fc(int); extern char *fd(void); extern float *fe(int, int); extern void ff(int);
struct O { int p0; int fl; float f8; };
void f(struct O *a) {
    struct V v; float tt; float *t;
    if (a->fl & 2) { v.z = 0; v.y = 0; v.x = 0; }
    else { v.z = 0x437f0000; v.y = 0x437f0000; v.x = 0x437f0000; }
    fa(a, &v);
    fb(a);
    a->f8 = 120.0f;
    fc(1);
    { struct C *c;
    char *q = fd(); int i = B61F; c = G84AC;
    tt = *(float *)(q + i * 224 + 92);
    if (c) c->fn(c, 17, &tt); }
    t = fe(G8328, 520);
    if (G84AC) G84AC->fn(G84AC, 8, t);
    ff(2);
}
