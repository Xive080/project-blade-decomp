struct T { int a; char *b; int c; int d; };
void func_00170690(int, struct T*, int, int);
extern char D_00177A40[];
extern struct T g;
void func(void) {
    g.a = 0;
    g.b = D_00177A40;
    g.c = 0;
    g.d = 0;
    func_00170690(2, &g, 0, 0);
    func_00170690(4, &g, 0, 0);
    func_00170690(8, &g, 0, 0);
    func_00170690(16, &g, 0, 0);
    func_00170690(32, &g, 0, 0);
}
