extern int func_0013b550(int, int);
extern void func_001956b0(void *, int, int);
extern void func_001a3ac0(void *, int, void *);
extern int G_8328;
extern char D0[], D1[], D2[], D3[], D4[], D5[], D6[];

struct A { char pad[24]; u8 v; };
struct C { char pad[14]; u8 v; };
void func(struct A *a, int b, struct C *c) {
    switch (b) {
    case 0:
        *(int *)((char *)a + 8) = func_0013b550(G_8328, 44);
        *(int *)((char *)a + 12) = func_0013b550(G_8328, 45);
        *(char **)((char *)a + 20) = D0;
        *(int *)((char *)a + 16) = 7;
        *(int *)((char *)a + 24) = 0;
        *(int *)((char *)a + 4) = 0;
        func_001956b0(D0, 46, 0);
        func_001956b0(D1, 47, 0);
        func_001956b0(D2, 48, 0);
        func_001956b0(D3, 49, 0);
        func_001956b0(D4, 50, 0);
        func_001956b0(D5, 51, 0);
        func_001956b0(D6, 52, 0);
        break;
    case 12:
        { u32 t = a->v; c->v = t + 2; }
        break;
    }
    func_001a3ac0(a, b, c);
}
