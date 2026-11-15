struct S { int p0; int z4; int a8; int b12; int c16; int d20; int e24; };
extern int g;
extern char s1[];
extern char s2[];
extern void *alloc(int, int);
extern void reg(void*, int, int);
extern int sub(void*, int, int);
int f(struct S *p, int a, int b) {
    struct S *q;
    if (a != 0) { q = p; } else {
        p->a8 = (int)alloc(g, 56);
        p->b12 = (int)alloc(g, 72);
        p->d20 = (int)s1;
        p->c16 = 2;
        p->e24 = 0;
        p->z4 = 0;
        reg(s1, 73, 23);
        reg(s2, 74, 24);
        q = p;
    }
    return sub(q, a, b);
}
