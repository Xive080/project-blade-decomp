extern void func_0015dc60();
extern void func_0012b7e0();
struct V { int pad[2]; void (*fn)(void *, int); };
struct O { int type; int id; int pad[1]; struct V *vt; unsigned flags; };
struct L { int pad; int busy; int pad2[1]; int e[5]; unsigned n; };
int func(struct O *o, struct L *l) {
    int found;
    if (l != 0) {
        if (l->busy == 0) {
            unsigned i;
            int *e = (int *)l;
            for (i = 0; i < l->n; e++, i++) {
                if (o->id == e[3]) { found = 1; goto out; }
            }
        }
    }
    found = 0;
out:
    if (found) {
        if (o->type == 0x40000) {
            func_0015dc60(o);
        } else {
            o->vt->fn(o, 0);
            o->flags &= ~1;
            func_0012b7e0(*(int *)0x70003fd8, o, 0);
        }
    }
    return 1;
}
