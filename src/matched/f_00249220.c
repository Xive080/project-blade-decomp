extern int tbl[2];
extern void f2485c0(int);
void f(void) { unsigned i; int *p = tbl; for (i = 0; i < 1U; i++, p += 1) f2485c0(*p); }
