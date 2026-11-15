struct L { struct L *next; };
struct S { int flags; short pad; short n; char pad2[16]; struct L l; };
struct E { char pad[16]; };
struct F { char pad[40]; };
struct E *f(struct S *a) {
    struct E *r;
    if (a == 0) {
        r = 0;
    } else if (a->flags & 8) {
        if (a->n > 0) r = (struct E *)&a->l;
        else r = 0;
    } else if (a->flags & 1) {
        r = (struct E *)((char *)a->l.next - 16);
        if (r == (struct E *)((char *)&a->l - 16)) r = 0;
    } else {
        r = (struct E *)((char *)a->l.next - 40);
        if (r == (struct E *)((char *)&a->l - 40)) r = 0;
    }
    return r;
}
