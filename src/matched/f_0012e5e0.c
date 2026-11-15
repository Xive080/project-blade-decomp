extern int f1d8470(void);
extern int f1d99e0(int);
extern int *f21a020(void);
extern int f1d9c00(int, int, int *, int);
extern int f1d97c0(int);
extern int f1d9af0(int, int, int, int);
extern void f219f70(int, int, int);
extern void f219fe0(int, int);
int f(int a,int b,int c){ int s0; int s1; int *p; p = (int*)0; s0 = f1d99e0(f1d8470()); p = f21a020(); s1 = f1d9c00(s0,0,p,0); s1 = f1d97c0(s1); s0 = f1d9af0(s1,*p,0,0); f219f70(s0,1,b); f219f70(s0,2,c); f219fe0(s0,a); return s1; }
