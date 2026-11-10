struct B{char p[12]; int v;}; struct A{char p[28]; struct B *b;};
int f(struct A *a){ return a->b->v; }
