struct O { void (*fn)(struct O*, int, int); };
extern struct O *g1; extern int g2;
void f(int a) { struct O *o = g1; if (g2 == 0) o->fn(o, 15, a); }
