struct E { int a; int pad[4]; };
struct S { struct E e[7]; int pad[2]; };
extern struct S tbl[];
void func(int i, int j) {
    tbl[i].e[j].a = 0;
}
