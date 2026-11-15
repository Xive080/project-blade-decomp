extern void func_001625b0(void *, int, int);
typedef struct S { unsigned short flags; } S;
typedef struct T { char p[20]; void *h; } T;
void f(S *s, int b, int c, int d, T *t) {
    if (c == 0) {
        if (s->flags & 8) {
            func_001625b0(t->h, d, 16384);
        }
    }
}
