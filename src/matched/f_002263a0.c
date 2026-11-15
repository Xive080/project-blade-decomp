struct O;
struct V { char pad[0x18]; void (*fn)(struct O *, s32); };
struct O { struct V *vt; s32 a; s32 b; s32 k; };
void f131d00(void);
void f242b20(void);
s32 f(struct O *o, s32 b) {
    switch (o->k) {
    case 3:
        if (b == 3) { f131d00(); o->vt->fn(o, 8); }
        break;
    case 8:
        if (b == 3) o->vt->fn(o, 9);
        break;
    default:
        f242b20();
        break;
    }
    return 0;
}
