struct O { int p0; int p1; };
extern char D_00140000[];
extern int func_001c3bc0(int, int);
extern int func_0016bd40(int);
extern void func_001c3f40(int, char*, char*);
int func(struct O *o, int b){ int r[2]; int s; s = func_001c3bc0(o->p1, b); r[0]=0; r[1]=b; if (s) { if (b == func_0016bd40(s)) return s; func_001c3f40(s, D_00140000+10720, (char*)r); return r[0]; } return 0; }
