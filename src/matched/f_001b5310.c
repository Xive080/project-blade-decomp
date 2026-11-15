struct E { char pad[20]; char v; char pad2[3]; };
struct T { int a, b, c, d, e; };
struct S { int a; char pad[28]; struct T t[3]; };
extern struct E D[];
extern struct S D3;
extern char D74[];
extern int D7c[];
extern int G1, G2;
extern void f11ec80(void *, int, int);
extern void f1b6120(void *);
void func(void) {
    unsigned i;
    f11ec80(D, 0, 168);
    for (i = 0; i < 7; i++) {
        D[i].v = 5;
    }
    f11ec80(D74, 0, 8);
    D7c[0] = 3;
    for (i = 0; i < 3; i++) {
        D3.t[i].a = 0;
    }
    D3.a = 2;
    if (G2 == 0) {
        f1b6120(&D3);
        G2 = 1;
    }
    G1 = -1;
}
