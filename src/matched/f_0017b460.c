struct A { char pad[0x13c]; void *(*alloc)(int, int); };
extern char base[];
#define tbl (*(struct A *)base)
struct O { int type; char pad[0x18]; void *p1c; char pad2[0xc]; void *p2c; void *p30; void *p34; int p38; };
struct O *f(int type, int *cnt) {
    struct O *o;
    void *(**fp)(int, int);
    if (type == 2) {
        fp = &tbl.alloc;
        o = (struct O *)tbl.alloc(1, 60);
        if (o) {
            o->p38 = *cnt;
            o->p1c = (*fp)(*cnt, 12);
            o->p2c = (*fp)(*cnt, 12);
            o->p30 = (*fp)(*cnt, 4);
            o->p34 = (*fp)(*cnt, 4);
        }
    } else if (type == 1) {
        o = (struct O *)tbl.alloc(1, 44);
    } else {
        return 0;
    }
    o->type = type;
    return o;
}
