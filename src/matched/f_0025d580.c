extern void f109d10(int);
extern struct S { int a[5]; int on; int cb; } D[];
extern int G;
void func(unsigned char *p) {
    struct S *s = &D[p[12]];
    s->on = 1;
    if (s->cb != 0) f109d10(G);
}
