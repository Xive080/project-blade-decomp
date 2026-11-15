extern int off;
extern char tbl[];
int f(int a){ return *(int*)(*(int*)(a+off)+0x94) != 5; }
