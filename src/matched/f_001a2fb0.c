extern char D[];
extern int sub(void *, int, int, void *);
extern void sub2(void *, int);
struct E { char pad[16]; unsigned char c; char pad2[15]; };
struct A { char pad[20]; char *p; int x; char *q; };
struct B { char pad[20]; char *t; int i; };
int f(struct A *a, int b, int c) {
    struct B *q;
    if (sub(a, b, c, D) == 0) return 0;
    if (b == 2) {
        int o;
        q = (struct B *)a->q;
        o = q->i << 5;
        sub2(a->p + o, *(unsigned char *)((char *)o + (int)q->t + 16));
    }
    return 1;
}
