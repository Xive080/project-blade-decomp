struct S{int a;int b;int c;int d;};
extern struct S tab[];
void func(int i,int v){ tab[i].a=v; }
