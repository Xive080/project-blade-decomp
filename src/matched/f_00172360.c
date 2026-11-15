struct S { char pad[0x3a8a10]; char a[0x48]; char b[0x88]; int c[1]; };
extern struct S *G;
extern int G2;
extern void f1(char *);
extern void f2(char *);
extern void f3(int);
void f_00172360(void) {
    int off; unsigned i; unsigned j; int *p;
    f1(G->a + 0x48);
    f2(G->a);
    j = 0; off = 0;
    do {
        i = 0;
        p = (int *)((char *)G + off + 0x3a8ae0);
        do {
            f3(*p);
            i++;
            p++;
        } while (i < 40);
        j++;
        off += 168;
    } while (j < 2);
    G = 0;
    G2 = 0;
}
