struct O { int a; void (*fn)(struct O *); };
struct M { int first; char pad[36]; unsigned int count; };
struct T { char pad[308]; void (*fn)(struct M *); };
extern void func_00188020(int);
extern struct M *g;
extern char tbl[];
void f(void) {
    unsigned int i = 0;
    int off = 0;
    while (i < g->count) {
        struct O *o = *(struct O **)((int)g + off + 44);
        if (o->fn) o->fn(o);
        off += 4;
        i++;
    }
    func_00188020(g->first);
    ((struct T *)tbl)->fn(g);
    g = 0;
}
