struct O { int pad[8]; void (*fn)(void); };
struct S { struct O *o; int pad[2]; s32 c; };
extern s32 func_00242e00(void);
s32 func(struct S *a, s32 b) {
    s32 r;
    if (b == 5) {
        a->c = b;
        a->o->fn();
        r = 1;
    } else {
        r = func_00242e00();
    }
    return r;
}
