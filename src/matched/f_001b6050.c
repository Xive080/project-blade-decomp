struct E { char pad[20]; char v; char pad2[3]; };
struct F { float f[6]; };
struct S { struct E e[7]; struct F g; };
extern struct F G;
extern void f11ec80(void *, int, int);
void func(struct S *p) {
    unsigned i;
    f11ec80(p, 0, 168);
    for (i = 0; i < 7; i++) {
        p->e[i].v = 5;
    }
    p->g = G;
}
