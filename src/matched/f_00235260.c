#pragma mpwc_relax on
struct T4 { f32 a, b, c, d; };
void func_00235480(void *, s32, s32);
struct V { char pad[0x3c]; f32 a, b, c, d; };
struct O { char pad0[0x31]; u8 f; char pad1[14]; struct V *v; char pad2[12]; s32 en; char pad3[28]; f32 a0, a1, a2, a3, b0, b1, b2, b3; f32 t; s32 pp; s32 x; };
void func(struct O *o, f32 dt) {
    if (o->en == 0) {
        s32 x = o->x;
        if (x != 0) func_00235480(o, x, 1);
    } else {
        f32 t = o->t - dt;
        o->t = t;
        if (t <= 0.0f) {
            { f32 k = 0.06f; o->t = o->t + k; }
            if (o->f == 0) {
                o->f = 1;
                *(struct T4 *)&o->v->a = *(struct T4 *)&o->a0;
            } else {
                o->f = 0;
                *(struct T4 *)&o->v->a = *(struct T4 *)&o->b0;
            }
        }
    }
}
