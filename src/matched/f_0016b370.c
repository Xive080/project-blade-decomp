extern int off;
int f(int a,int b){ *(int*)(a+off)=b; return a; }
