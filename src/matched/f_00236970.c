extern char V[];
extern void cb(void);
struct V4 { float a, b, c, d; };
struct Q { int kind; struct V4 v; int pad[2]; int z; float s; int e[4]; };
struct O { char pad[36]; void *h; int r; };
extern int func_00188f00(void *, struct Q *, void *, struct O *);
int f(int u, struct O *o) {
    struct Q q;
    q.s = 0.75f;
    q.e[0] = 0; q.e[1] = 0; q.e[2] = 0; q.e[3] = 0;
    q.kind = 19;
    q.v = *(struct V4 *)V;
    q.z = 0;
    o->r = func_00188f00(o->h, &q, cb, o);
}
