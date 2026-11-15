struct E { int off; int type; };
struct O { char pad[28]; struct E *tbl; char pad2[8]; char *data; };
extern void func_0011eac8(int *, char *, int);
int f(struct O *o, int i, int *out) {
    int off = o->tbl[i].off;
    int t = o->tbl[i].type;
    char *p = o->data + off;
    if (t == 4) *out = *(int *)p; else func_0011eac8(out, p, t);
    return 1;
}
