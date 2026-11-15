extern void func_00178800(void);
struct VT { int pad[2]; void (*fn)(void *, int); };
struct Obj { struct VT *vt; };
int f(void) {
    struct Obj *o;
    func_00178800();
    o = *(struct Obj **)0x70003fd4;
    if (o != 0) {
        o->vt->fn(o, -1);
    }
    return 1;
}
