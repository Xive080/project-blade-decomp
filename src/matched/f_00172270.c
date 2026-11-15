struct S { char pad[0x3a8abc]; char a[0xc4]; int w80; char p2[0xa4]; int w28; char p3[0x10]; int w3c; int w40; int w44; };
extern struct S *G;
extern void sub(char *, int);
void f(int a, int b) {
    sub(G->a, a);
    G->w44 = b;
    G->w3c = 0;
    G->w80 = 0;
    G->w28 = 0;
}
