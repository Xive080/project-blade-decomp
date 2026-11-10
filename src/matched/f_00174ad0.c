struct S { int a[13]; };
extern struct S tbl[];
int func(int i) {
    return tbl[i].a[0];
}
