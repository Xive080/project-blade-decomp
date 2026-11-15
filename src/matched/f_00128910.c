extern void func_001297c0(char *, float *, char *, void *);
extern void func_0012e8d0(s32, s32, s32);
extern void func_0013bf20(char *, float *, s32);
extern float func_00179cf0(s32);
extern char D_00128DD0[];
extern s32 D_002FA368;

struct N { char pad[4]; char *o; char *next; };

void func(char *a0, s32 a1, s32 a2, u8 a3) {
    s32 f;
    float v[4];
    float d0, d1, t, u, t2, u2;
    char *o;
    s32 i;
    struct N *n;
    char *g;
    u8 *p;
    s32 m1;
    s32 m2;
    float r;
    g = *(char **)0x70003FD8;
    m1 = a3 & 1;
    f = 0;
    if (m1 != 0) {
        f |= 1;
        t = (0.5f + (float)a1) * *(float *)0x70000010 - *(float *)0x70000020;
        u = (0.5f + (float)a2) * *(float *)0x70000014 - *(float *)0x70000024;
        if (*(float *)0x70000030 != 0.0f || *(float *)0x70000034 != 0.0f) {
            d0 = t * *(float *)0x70000030 + u * *(float *)0x70000034;
            d0 = d0 * d0;
        } else {
            d0 = t * t + u * u;
        }
        if (d0 <= *(float *)0x70000018) f |= 2;
        if (!(d0 < *(float *)0x7000001C)) f |= 4;
    }
    m2 = a3 & 2;
    if (m2 != 0) {
        f |= 8;
        t2 = (0.5f + (float)a1) * *(float *)0x70000010 - *(float *)0x70000028;
        u2 = (0.5f + (float)a2) * *(float *)0x70000014 - *(float *)0x7000002C;
        if (*(float *)0x70000038 != 0.0f || *(float *)0x7000003C != 0.0f) {
            d1 = t2 * *(float *)0x70000038 + u2 * *(float *)0x7000003C;
            d1 = d1 * d1;
        } else {
            d1 = t2 * t2 + u2 * u2;
        }
        if (d1 <= *(float *)0x70000018) f |= 0x10;
        if (!(d1 < *(float *)0x7000001C)) f |= 0x20;
    }
    D_002FA368 = f;
    o = *(char **)(a0 + 0x28);
    if (o != 0 && (*(s32 *)o != *(s32 *)0x70003FB8 || (f & 0x12))) {
        *(s32 *)o = *(s32 *)0x70003FB8;
        p = (u8 *)(*(char **)(a0 + 0x28) + 16);
        for (i = 0; i < *(s32 *)(*(char **)(a0 + 0x28) + 4); p++, i++)
            func_0012e8d0(1, *p, 0);
        for (i = 0; i < *(s32 *)(*(char **)(a0 + 0x28) + 8); p++, i++)
            func_0012e8d0(6, *(s32 *)(*(char **)(g + 172) + *p * 4), 0);
    }
    n = *(struct N **)(a0 + 0xC);
    if (n != 0) {
        do {
            o = n->o;
            if (*(s32 *)(o + 0x48) != *(s32 *)0x70003FB8 && *(s32 *)(*(char **)(o + 12) + 28) != 0 && !(*(s32 *)(o + 16) & 1)) {
                f = 0;
                if (*(char **)(o + 204) != 0) r = func_00179cf0(*(s32 *)(*(char **)(o + 204) + 20));
                else r = func_00179cf0(12);
                r = r * r;
                if (m1 != 0 && d0 < r) f |= 1;
                if (m2 != 0 && d1 < r) f |= 8;
                if (f != 0) {
                    if (*(char **)(o + 204) != 0 && (*(s32 *)(*(char **)(o + 204) + 20) & 2)) {
                        func_0013bf20(o, v, 0);
                        func_001297c0(g, v, D_00128DD0, &f);
                    }
                    if (*(s32 *)(o + 16) & 8) {
                        if (f & 1) f |= 2; else f |= 0x10;
                    }
                    D_002FA368 = f;
                    (*(void (**)(char *))(*(char **)(o + 12) + 28))(o);
                    *(s32 *)(o + 72) = *(s32 *)0x70003FB8;
                }
            }
            n = (struct N *)n->next;
        } while (n != 0);
    }
}
