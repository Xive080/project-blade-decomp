struct Vtx { f32 x, y; f32 c[4]; f32 u, v; };
struct Quad { void *self; struct Vtx v[4]; };
struct V2 { f32 a, b; };
struct C4 { f32 r, g, b, a; };
struct Obj { char pad[60]; char pad2[0]; };
struct Vt { char pad[128]; void (*fn)(void *, void *, void *); };
struct Sub { struct Vt *vt; int x; };
struct Wnd { struct Vt *vt; int data; };
extern struct { char pad[9432]; struct Wnd *w; } G;
extern void func_00186970(void *);
void f(void *a0, f32 *r, f32 *t) {
    struct Quad q;
    struct Wnd *w;
    q.self = a0;
    *(struct V2 *)&q.v[0].x = *(struct V2 *)&r[0];
    q.v[1].x = r[0] + r[2]; q.v[1].y = r[1] + r[3];
    q.v[2].x = q.v[1].x + r[4]; q.v[2].y = q.v[1].y + r[5];
    q.v[3].x = r[0] + r[4]; q.v[3].y = r[1] + r[5];
    *(struct C4 *)q.v[0].c = *(struct C4 *)&r[6];
    *(struct C4 *)q.v[1].c = *(struct C4 *)&r[6];
    *(struct C4 *)q.v[2].c = *(struct C4 *)&r[6];
    *(struct C4 *)q.v[3].c = *(struct C4 *)&r[6];
    if (a0) {
        *(struct V2 *)&q.v[0].u = *(struct V2 *)&t[0];
        q.v[1].u = t[2]; q.v[1].v = t[1];
        *(struct V2 *)&q.v[2].u = *(struct V2 *)&t[2];
        q.v[3].u = t[0]; q.v[3].v = t[3];
    }
    w = G.w;
    if (w == 0) {
        func_00186970(&q);
    } else if (w->vt == 0) {
        func_00186970(&q);
    } else {
        w->vt->fn((char *)w->vt + 60, &q, &w->data);
    }
}
