struct S { char pad[0x40]; void (*fn)(void *, int); int arg; int cnt; };
extern void sub(void *, void *);
void f(void *a, struct S *b, int c) {
    int t;
    void (*fn)(void *, int);
    b->cnt = b->cnt + 1;
    if (c != 0) {
        fn = b->fn;
        if (fn != 0) {
            t = b->arg;
            sub(a, (char *)b - 8);
            fn(a, t);
            return;
        }
    }
    sub(a, (char *)b - 8);
}
