extern void f1dee30();
struct S { char pad[24]; int n[1]; };
void f(struct S *p) { int *q = p->n; while (*q) f1dee30(); }
