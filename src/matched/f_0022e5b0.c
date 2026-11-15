extern u32 tbl[];
extern char D_307530[];
extern char D_306f80[];
extern char D_2f0d68[];
extern s32 *f_170070(char *);
struct V { f32 a,b,c,d; };
struct S { char p[0x20]; struct V v; f32 e; char *f; s32 g; };
struct I { struct V v; f32 e; };
void func(struct S *s, struct I *in) {
    u32 i=0; while (i < 7) { tbl[i] = (i + 1) & 3; i++; }
    s->v = in->v;
    s->e = in->e;
    if (*(s32*)&s->v.d & 2) s->f = D_307530; else s->f = D_306f80;
    s->g = *f_170070(D_2f0d68);
}
