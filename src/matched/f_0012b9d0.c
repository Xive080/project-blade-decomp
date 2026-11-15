struct T { void *a; void *b; int c; int d; };
extern void f170690(int, struct T *, int, int);
extern char D12a5b0[], D12a210[];
extern struct T G;
int f(void) {
    G.a = D12a5b0;
    G.b = D12a210;
    G.c = 0;
    G.d = 0;
    f170690(512, &G, 12268, 0);
    return 1;
}
