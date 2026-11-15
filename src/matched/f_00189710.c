struct D { float a,b,c,d,e,f,g,h,i,j; };
struct R { char p0[20]; int k; struct D v; char p2[48]; char *o; int s; };
extern struct D D_002E0700;
char *func_0018bad0(char *);
void func_0018bb30(char *, int);
char *func(char *a) {
    int s0;
    struct R *r;
    char *s1;
    s0 = *(int *)(a + 108);
    r = (struct R *)func_0018bad0(a + 96);
    r->k = 11;
    s1 = (char *)r + 8;
    r->v = D_002E0700;
    r->o = a;
    r->s = s0;
    func_0018bb30(s1 + 96, *(int *)(a + 96));
    func_0018bb30(s1, *(int *)a);
    return s1;
}
