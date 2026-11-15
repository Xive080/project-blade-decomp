extern int off2;
int f(int a,int b){ *(int*)(a+off2)=*(int*)(b+off2); return a; }
