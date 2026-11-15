struct S { int k; char pad[20]; int v; };
extern void f1442d0(struct S *, int, int);
extern void f143e00(struct S *, int, int);
void func(struct S *p, int b) {
    switch (p->k) {
    case 0: f1442d0(p, p->v, b); break;
    case 1: f143e00(p, p->v, b); break;
    default: break;
    }
}
