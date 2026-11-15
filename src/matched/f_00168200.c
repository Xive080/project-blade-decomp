struct E { s32 h; char p[12]; f32 a; f32 b; char q[52]; };
struct P { char pad[0x20]; f32 f20; f32 f24; char pad2[0x5c0]; f32 f5e8; f32 f5ec; };
struct O { char pad[204]; struct P *x; };
extern struct E D[];
extern volatile f32 G;
extern u32 V;
extern f32 H;
extern void sub(f32, f32, s32);
void func(char *p) {
    f32 f12, f20, f21, f0;
    s32 m, a0, i;
    s32 *fl = (s32*)(p + 16);
    *fl = *fl & ~0x200;
    *fl = *fl | 0x40;
    *fl = *fl | 0x400;
    m = *(s32*)(p + 60);
    switch (m) {
    case 0x200000:
    case 0x400000:
        *(f32*)(p+396) = 2.0f; *(f32*)(p+400) = 0.4f; *(f32*)(p+404) = 3.5f;
        *(f32*)(p+408) = 2.0f; *(f32*)(p+412) = 0.4f; *(f32*)(p+416) = -3.5f;
        break;
    case 0x10000:
        *(s32*)(p+396) = 0xC0EE147B; *(f32*)(p+400) = 2.0f; *(f32*)(p+404) = 0.0f;
        *(f32*)(p+408) = -1.7f; *(f32*)(p+412) = 0.0f; *(f32*)(p+416) = 0.0f;
        break;
    case 0x20000:
        *(f32*)(p+396) = -1.7f; *(f32*)(p+400) = 0.0f; *(f32*)(p+404) = 3.5f;
        *(f32*)(p+408) = -1.7f; *(f32*)(p+412) = 0.0f; *(f32*)(p+416) = -3.5f;
        break;
    case 0x40000:
        *(f32*)(p+396) = 3.5f; *(f32*)(p+400) = 0.0f; *(f32*)(p+404) = -1.7f;
        *(f32*)(p+408) = -3.5f; *(f32*)(p+412) = 0.0f; *(f32*)(p+416) = -1.7f;
        break;
    }
    if (*(s32*)(p + 60) == 0x200) {
        *(f32*)(p+328) = *(f32*)(p+380);
    }
    switch (*(s32*)(p + 60)) {
    case 0x10000:
    case 0x20000:
    case 0x40000:
        f12 = 100.0f; break;
    case 0x8000:
    case 0x4000:
        f12 = 57.29578f * (*(struct O**)(p+116))->x->f5e8; break;
    case 0x400000:
    case 0x200000:
        f12 = 100.0f; break;
    case 0x200:
        f12 = 0.0f; break;
    default:
        f12 = 80.0f; break;
    }
    *(f32*)(p+120) = f12;
    if (f12 > 0.0f) {
        i = *(s32*)(p + 100);
        if (i != -1) sub(f12, 1.3333334f, D[i].h);
    }
    i = *(s32*)(p + 100);
    if (i != -1) {
        switch (*(s32*)(p + 60)) {
        case 0x400000:
        case 0x200000:
            f21 = 0.5f; f20 = 0.75f; a0 = 1; break;
        case 0x8000:
        case 0x4000:
            f21 = (*(struct O**)(p+116))->x->f20; f20 = (*(struct O**)(p+116))->x->f5ec; a0 = 1; break;
        default:
            a0 = 0; break;
        }
        if (a0) {
            D[i].a = 255.0f * f21;
            D[i].b = f20;
        }
    }
    switch (*(s32*)(p + 60)) {
    case 0x400000:
    case 0x200000:
        f0 = 0.333f; break;
    case 0x8000:
    case 0x4000:
        f0 = (*(struct O**)(p+116))->x->f24; break;
    default:
        f0 = 1.0f; break;
    }
    G = f0;
    if (V == 0xAFBFCFDF) H = G;
}
