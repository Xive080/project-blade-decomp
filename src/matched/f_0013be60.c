struct N { s32 a; struct P *b; s32 c; };
struct P { char pad[0x20]; f32 r; struct N *s; struct N *e; };
struct G { char pad[0x130]; void *(*alloc)(s32); };
extern char D[];
extern s32 conv(f32);
void func(struct P *p) {
    s32 t = conv((2.0f * p->r) / 10.0f) + 2;
    s32 sz = t * t * 12;
    struct N *q;
    p->s = (struct N *)((struct G*)D)->alloc(sz);
    p->e = (struct N *)((char *)p->s + sz);
    for (q = p->s; q < p->e; q++) {
        q->a = 0;
        q->b = p;
        q->c = 0;
    }
}
