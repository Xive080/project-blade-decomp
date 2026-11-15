extern int func_001c3b70(int);
extern int func_0016bd40(int);
struct S { int a; int b; };
struct T { struct S *a[4]; int b[4]; int c[4]; };
struct S *f(struct S *p, struct T *tab) {
int *t = (int*)tab; int b = p->b; int s2 = func_001c3b70(b); int k = func_0016bd40(b); if (k >= 30000 && k < 30004) { int *q = t + (k-30000); q[0]=(int)p; q[4]=b; q[8]=s2; } else t = 0; return p;
}
