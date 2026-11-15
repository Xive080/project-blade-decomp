struct O { char pad[0x140]; int a; int b; int c; };
extern struct O *G6c;
extern int G60;
extern void sub1(int, int);
extern void sub2(void);
void f(void) {
    struct O *o = G6c;
    int i;
    if (o != 0) {
        for (i = 0; i < G60; i++) {
            if (o->c != 0) sub1(o->a, o->b);
        }
        sub2();
        G6c = 0;
    }
}
