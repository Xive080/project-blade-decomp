struct S{char pad[0x134]; void (*fn)(int);};
struct A{int t; char p[12]; int x;};
extern char base[];
void f(struct A*a){ switch(a->t){ case 1: ((struct S*)base)->fn(a->x); break; default: break; } }
