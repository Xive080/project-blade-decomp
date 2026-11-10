struct B{int a;int x;int b;};
struct A{char p[12];struct B*q;};
int f(struct A*a){ return a->q->b!=0; }
