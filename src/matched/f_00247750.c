extern int off;
int f(int a,int b){ *(int*)(a+off)=*(int*)(b+off); return a; }
