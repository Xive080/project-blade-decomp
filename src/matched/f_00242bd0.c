struct VT { char p0[12]; void (*f0c)(void); int (*f10)(void *, int); void (*f14)(void *, int, int); void (*f18)(void *, int); };
struct S { struct VT *vt; int f4; int f8; int st; int f10; char p[0x18]; int tbl[1]; };
struct E { char p[0xc]; struct VT *vt; int f10; char q[0x28]; int f3c; };
struct R2 { int a; int fl; struct E *e; };
extern volatile int D_00306F84;
extern volatile int D_00307534;
void func_0013c4c0(void *);
void func_0016d1d0(int, int, int, int);
void func_00133120(int);
int func(struct S *a, int m, struct R2 *r) {
    switch (m) {
    case 0:
        a->vt->f0c();
        a->vt->f18(a, 4);
        return 1;
    case 1:
        if (!(r->fl & 0x10000)) {
            a->tbl[r->a] = 0;
            func_0013c4c0(r);
        }
        break;
    case 2: {
        struct E *e;
        void *q = r;
        func_0016d1d0(*(int *)0x70003FDC, r->a, 0, 0);
        q = ((struct R2 *)q)->e;
        e = q;
        if (e->f3c != 8 && !(e->f10 & 2) && e->vt->f10(e, 8) != 0) e->vt->f14(e, 8, 0);
        break;
    }
    case 4:
        a->vt->f18(a, 6);
        D_00306F84 &= ~4;
        D_00307534 &= ~4;
        break;
    case 5:
        if (a->st == 5) { func_00133120(5); return 1; }
        if (a->st == 4) {
            int t = D_00306F84 & 4;
            if (t != 0 && (*(int *)0x70003FC0 & 1)) goto yes;
            if (t == 0) goto no;
            if (!(D_00307534 & 4) || !(*(int *)0x70003FC0 & 2)) goto no;
        yes:
            a->f4 |= 8;
            goto z;
        no:
            func_00133120(5);
            return 1;
        }
    z:
        return 0;
    }
    return 1;
}
