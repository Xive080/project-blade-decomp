extern int G_8328;
extern char V[];
int f1(int);
int f2(int);
struct S { int *vt; int a; int b; int c; unsigned char d0, d1, d2, d3; int e; };
void func(struct S *s, int x, int arg2, int arg3, int t0, int t1) {
    s->a = f1(G_8328);
    s->vt = (int*)V;
    s->b = 0;
    s->c = arg2;
    s->d0 = arg3;
    s->d1 = arg3;
    s->d2 = t0;
    s->d3 = 255;
    s->e = f2(t1);
}
