struct E;
struct VT { char p[16]; int (*f10)(struct E *, int); void (*f14)(struct E *, int, int); };
struct E { char p[12]; struct VT *vt; int fl; char q[40]; int k; };
struct S { char p[12]; float x, y, z; char q[48]; int h; };
struct O { char p[8]; struct E *e; struct S *s; };
struct V { float x, y, z; };
extern void f149e70(void *, int);
extern int f1c3b70(int);
extern void f15d760(int, struct V *, char *);

void func(struct O *o, struct V *v, int a, float t)
{
    struct E *e;
    if (a != 0) {
        e = o->e;
        if (e->k != 0x40000 && !(e->fl & 2) && e->vt->f10(e, 0x40000) != 0) {
            e->vt->f14(e, 0x40000, 0);
        }
        f149e70(o->e, 2);
    } else {
        f149e70(o->e, 1);
    }
    o->s->x = v->x * t;
    o->s->y = v->y * t;
    o->s->z = v->z * t;
    f15d760(f1c3b70(o->s->h), v, (char *)o->e + 0xEAA4);
}
