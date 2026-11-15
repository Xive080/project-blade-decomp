struct M { char pad[12]; char *t; };
struct S { s32 k; char p0[224]; struct M *o; s32 e; s32 f; char a[12]; char b[12]; char c[12]; char d[12]; };
extern f32 sub1(struct M *, char *, f32 *, s32 *);
extern f32 sub2(char *, char *, char *, char *, f32 *, s32 *);
f32 func(struct S *p, f32 *v, s32 *r) {
    s32 ok;
    f32 x = v[1];
    if (p->k == 1) {
        x = sub1(p->o, p->o->t + (*(s32*)((char*)p + 324) << 5), v, &ok);
        if (ok) { if (r) { *r = 1; } return x; }
    }
    if (p->f) {
        x = sub2(p->a, p->b, p->c, p->d, v, &ok);
        if (ok) { if (r) { *r = 1; } return x; }
    }
    if (r) *r = 0;
    return x;
}
