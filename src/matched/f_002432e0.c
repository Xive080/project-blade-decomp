struct O;
struct V { s32 p; void (*fn)(struct O *, s32, s32); };
struct O { struct V *v; char p[8]; s32 m; };
extern s32 chk(void);
extern void other(void);
s32 f(struct O *o) {
    switch (o->m) {
    case 2: case 1: case 3:
        if (chk() == 0) o->v->fn(o, 3, 0);
        break;
    default:
        other();
        break;
    }
    return 0;
}
