struct N { struct N *a; struct N *b; };
struct L { char pad[0x14]; struct N n14; };
struct V3 { f32 x, y, z; };
struct M { f32 f[16]; };
struct Q { int p0; void *p4; };
struct S {
    char pad0[0x30]; struct Q *p30; char pad1[0x3d8];
    struct N node; struct M *m; int p418; struct L *l; s32 a420; s32 a424; s32 p428;
    f32 g[3]; f32 h[3];
};
extern s32 D_70003FD8;
extern s32 func_001f79f0();
extern void func_00190740(struct S *);
extern void func_001ce160(void *, void *);
extern void func_001c3b80(void *);
extern void func_001c3b00(void *);
extern void func_0012b7e0(s32, struct S *, struct M *);
void func(struct S *s, s32 arg1) {
    struct N *t = &s->node;
    s->node.a = s->l->n14.a;
    s->node.b = &s->l->n14;
    s->l->n14.a->b = t;
    s->l->n14.a = t;
    s->a420 = arg1;
    s->a424 = (func_001f79f0() & 1) == 0;
    func_00190740(s);
    { struct M *m = s->m;
    *(struct V3 *)&m->f[12] = *(struct V3 *)&s->g[0]; }
    { struct M *m = s->m;
    *(struct V3 *)&m->f[8] = *(struct V3 *)&s->h[0]; }
    { struct M *m = s->m;
    m->f[0] = m->f[5] * m->f[10] - m->f[6] * m->f[9]; }
    { struct M *m = s->m;
    m->f[1] = m->f[6] * m->f[8] - m->f[4] * m->f[10]; }
    { struct M *m = s->m;
    m->f[2] = m->f[4] * m->f[9] - m->f[5] * m->f[8]; }
    { struct M *m = s->m; func_001ce160(m, m); }
    func_001c3b80(s->p30->p4);
    func_001c3b00(s->p30->p4);
    func_0012b7e0(D_70003FD8, s, s->m);
    func_00190740(s);
}
