struct B{int a;int b;};
struct A{char p[20];struct B*q;};
void f(struct A*a,int x){ a->q->b=x; }
