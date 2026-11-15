struct O { char pad[116]; void *h; char b[8]; };
struct V { float x, y; };
struct P { float x, y; struct V b; struct V c; };
extern void func_001860d0(void *, struct P *, void *);
void f(struct O *o, struct P *p) {
    struct V t;
    p->x += p->c.x;
    p->y += p->c.y;
    t = p->b;
    p->b.x = -p->c.x;
    p->b.y = -p->c.y;
    p->c = t;
    func_001860d0(o->h, p, o->b);
}
