struct S { char pad[32]; int n; };
extern int h(struct S*, int, int);
extern void p(void); extern void q(void);
void f(struct S *a, int b, int c) {
  int r;
  for (r = h(a, b, c); r == 0 && a->n != 0; r = h(a, b, c)) { p(); q(); }
}
