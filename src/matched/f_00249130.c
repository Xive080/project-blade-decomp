extern int off;
int f(int a) { *(int*)(a+off) = 0; return a; }
