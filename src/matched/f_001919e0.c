struct T { void *a; void *b; int c; int d; };
extern void f170690(int, struct T *, int, int);
extern char D191A90[], D191A50[];
extern struct T G;
extern int g1, g2, g3;
int f(void) {
    G.a = D191A90;
    G.b = D191A50;
    G.c = 0;
    g1 = 0;
    g2 = 0;
    g3 = 0;
    G.d = 0;
    f170690(64, &G, 0, 0);
    return 1;
}
