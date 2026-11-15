struct T { void *a; void *b; int c; int d; };
extern void f170690(int, struct T *, int, int);
extern void f107ae8(void);
extern char D172410[], D172360[];
extern struct T G;
extern int g1, g2;
void f(void) {
    G.a = D172410;
    G.b = D172360;
    G.c = 0;
    g1 = 0;
    g2 = 0;
    G.d = 0;
    f170690(4096, &G, 16, 0);
    f107ae8();
}
