extern void func_001625b0(int *a, int b, int c);
struct A { unsigned short g; unsigned short h; };
struct B { int p0; int k; };
struct T { int w[5]; int *x; };
void f(struct A *a, struct B *b, int c, int d, struct T *t) {
    int k;
    if (c == 0) {
        k = b->k;
        if (k == 1 || k == a->h) {
            func_001625b0(t->x, d, 16384);
        }
    }
}
