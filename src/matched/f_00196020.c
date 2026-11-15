extern void f1981a0(int, int);
struct S { char pad[8]; int fl; };
int f(struct S *a, int b) { switch (b) { case 6: if (!(a->fl & 1)) f1981a0(10, 0); break; default: break; } return 1; }
