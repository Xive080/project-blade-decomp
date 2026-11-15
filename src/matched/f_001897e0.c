struct O { f32 e[6]; int mode; f32 a28; f32 a32; f32 (*fn36)(f32); int i40; f32 a44; f32 a48; f32 (*fn52)(f32); int i56; void (*fn60)(struct O *, int, f32, int); int x64; int x68; };
struct V6 { f32 a, b, c, d, e, f; };
struct S { int type; f32 e[6]; int c28; f32 a32; f32 a36; int idx; int i44; f32 a48; f32 a52; int idx2; int i60; };
extern void *TA[];
extern void *TB[];
extern char *get(void *);
struct O *f_001897e0(void *a0, int a1, struct S *s, int a3, int t0, int t1) {
    struct O loc;
    struct O *o;
    char *r = get(a0);
    f32 f20;
    if (r == 0) o = &loc; else o = (struct O *)(r + 8);
    o->a32 = 1.0f / s->a32;
    o->a28 = -s->a36 * o->a32;
    o->fn36 = TA[s->idx];
    o->i40 = s->i44;
    if (s->a48 != 0.0f) {
        o->mode = 2;
        o->a48 = 1.0f / s->a48;
        o->a44 = -s->a52 * o->a48;
        o->fn52 = TA[s->idx2];
        o->i56 = s->i60;
    } else o->mode = 1;
    o->fn60 = TB[s->type];
    *(struct V6 *)o = *(struct V6 *)s->e;
    if (s->c28 == 0) {
        f20 = o->fn36(0.0f);
        if (o->mode == 2) f20 = f20 * o->fn52(0.0f);
        o->fn60(o, a1, f20, t1);
        switch (s->type) {
    case 0:
        o->e[0] *= -1.0f;
        o->e[1] *= -1.0f;
        break;
    case 1:
        o->e[0] *= -1.0f;
        break;
    case 2:
        o->e[0] *= -1.0f;
        break;
    case 3:
        o->e[0] = 1.0f / o->e[0];
        o->e[1] = 1.0f / o->e[1];
        break;
    case 4:
        o->e[0] = 1.0f / o->e[0];
        o->e[1] = 1.0f / o->e[1];
        o->e[2] = 1.0f / o->e[2];
        o->e[3] = 1.0f / o->e[3];
        break;
    case 5:
        o->e[0] = 1.0f / o->e[0];
        break;
    case 6:
        o->e[2] = 1.0f / o->e[2];
        o->e[3] = 1.0f / o->e[3];
        o->e[4] = 1.0f / o->e[4];
        break;
    case 7:
        o->e[0] *= -1.0f;
        o->e[1] *= -1.0f;
        o->e[2] = 1.0f / o->e[2];
        o->e[3] = 1.0f / o->e[3];
        break;
    case 8:
        o->e[0] *= -1.0f;
        o->e[1] *= -1.0f;
        o->e[2] = 1.0f / o->e[2];
        o->e[3] = 1.0f / o->e[3];
        o->e[4] = 1.0f / o->e[4];
        o->e[5] = 1.0f / o->e[5];
        break;
    case 9:
        o->e[0] *= -1.0f;
        o->e[1] *= -1.0f;
        o->e[4] = 1.0f / o->e[4];
        break;
    case 10:
        o->e[0] *= -1.0f;
        o->e[1] *= -1.0f;
        o->e[2] = 1.0f / o->e[2];
        o->e[3] = 1.0f / o->e[3];
        o->e[4] = 1.0f / o->e[4];
        break;
    case 11:
        o->e[0] *= -1.0f;
        o->e[1] *= -1.0f;
        o->e[2] *= -1.0f;
        break;
    case 12:
        o->e[0] *= -1.0f;
        o->e[1] *= -1.0f;
        o->e[2] *= -1.0f;
        o->e[3] = 1.0f / o->e[3];
        break;
    case 13:
        o->e[0] *= -1.0f;
        o->e[1] *= -1.0f;
        o->e[2] = 1.0f / o->e[2];
        o->e[3] = 1.0f / o->e[3];
        o->e[4] *= -1.0f;
        o->e[5] = 1.0f / o->e[5];
        break;
    case 14:
        o->e[0] *= -1.0f;
        break;
    case 15:
        o->e[0] *= -1.0f;
        break;
    case 16:
        o->e[0] *= -1.0f;
        o->e[1] *= -1.0f;
        break;
    case 17:
        o->e[0] = 1.0f / o->e[0];
        o->e[1] = 1.0f / o->e[1];
        break;
    case 18:
        o->e[0] *= -1.0f;
        o->e[1] *= -1.0f;
        o->e[2] = 1.0f / o->e[2];
        o->e[3] = 1.0f / o->e[3];
        break;
    case 19:
        o->e[0] = 1.0f / o->e[0];
        o->e[1] = 1.0f / o->e[1];
        o->e[2] = 1.0f / o->e[2];
        o->e[3] = 1.0f / o->e[3];
        break;
    case 20:
        o->e[0] = 1.0f / o->e[0];
        break;
    case 21:
        o->e[2] = 1.0f / o->e[2];
        o->e[3] = 1.0f / o->e[3];
        o->e[4] = 1.0f / o->e[4];
        break;
    case 22:
        o->e[0] *= -1.0f;
        o->e[1] *= -1.0f;
        break;
    case 23:
        o->e[0] *= -1.0f;
        break;
    case 24:
        o->e[0] = 1.0f / o->e[0];
        o->e[1] = 1.0f / o->e[1];
        break;
    case 25:
        o->e[0] = 1.0f / o->e[0];
        break;
    case 26:
        o->e[0] = 1.0f / o->e[0];
        o->e[1] = 1.0f / o->e[1];
        o->e[2] *= -1.0f;
        break;
        }
    }
    if (o == &loc) return 0;
    o->x64 = a3;
    o->x68 = t0;
    return o;
}
