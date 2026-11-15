extern char D[];
extern int G;
extern int sz(int);
extern void h(int, int, int, int);
int f(int a, int b, int c) {
  if (G) G = G + (sz(G) + 1); else G = (int)D;
  h(G, a, b, c);
  return G;
}
