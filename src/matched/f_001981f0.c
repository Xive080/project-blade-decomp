typedef void (*Fn)(void *, int, int);
struct E { Fn fn; unsigned flags; char pad[24]; };
extern struct E tbl[];
extern Fn src[];
extern int lst[];
void clr(void *, int, int);
int func(int a) {
    unsigned i;
    int *p;
    struct E *e;
    Fn *s;
    clr(tbl, 0, 2324);
    e = tbl;
    s = src;
    for (i = 0; i < 72; i++) {
        e->fn = *s;
        e->fn(e, 0, a);
        e++;
        s++;
    }
    for (p = lst; *p != 72; p++) {
        tbl[*p].flags |= 0x20;
    }
    return 1;
}
