extern char D_00140000[];
extern void func_001c42c0(void*, char*, char*);
int func(void *a){ int x; x = 0; func_001c42c0(a, D_00140000 + 10848, (char*)&x); return x; }
