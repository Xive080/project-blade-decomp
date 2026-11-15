extern void f14a4d0(int, float);
extern void f173cb0(void *);
struct S { char pad[8]; int x; };
int f(struct S *p) { f14a4d0(p->x, 1.0f); f173cb0(p); return 1; }
