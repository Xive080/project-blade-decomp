extern void g(int);
void f(int a, int b) {
  int v;
  int s0;
  switch (b) {
  case 1: v = a + 336; s0 = a + 452; break;
  case 2: v = a + 220; s0 = 0; break;
  case 3: v = a + 568; s0 = a + 684; break;
  }
  g(v);
  if (s0) g(s0);
}
