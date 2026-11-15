struct VT { char p0[8]; void (*m2)(void *, int); void *m3; int (*m4)(void *, int); void (*m5)(void *, int, int); };
struct Obj { char p0[12]; struct VT *vt; unsigned fl; char p1[40]; int x60; };
struct Hdr { char p0[60]; int n; };
extern char D_00329770[];
extern char D_00306070[];
extern unsigned short D_00306322;
#define LOCKP (*(int *)0x70003fd8)
int func_001b9240(void *, void *);
void func_0012b7e0(int, void *, int);
void func(struct Hdr *h, int k) {
    char *b;
    int i;
    struct Obj *o;
    struct Obj **p;
    b = D_00329770;
    p = (struct Obj **)D_00306070;
    h->n = 0;
    for (i = 0; i < D_00306322; p++, i++) {
        o = p[325];
        if (o) {
            if (func_001b9240(b, o)) {
                if (h->n == k) {
                    o->vt->m2(o, 0);
                    o->fl &= ~1;
                    func_0012b7e0(LOCKP, o, 0);
                } else {
                    if (o->x60 && !(o->fl & 2)) {
                        if (o->vt->m4(o, 0)) {
                            o->vt->m5(o, 0, 0);
                        }
                    }
                    o->fl |= 1;
                }
                h->n++;
            }
        }
    }
}
