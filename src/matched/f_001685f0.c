struct Ent { int first; char pad[0x48]; };
struct Obj { char p0[0x3c]; int kind; char p1[0x24]; int idx; char p2[0x10]; float scale; };
extern struct Ent D_002FA374[];
extern int D_002FA55C;
extern int D_70003FFC;
extern float D_70003FAC;
extern void func_00130eb0(int, float, float);
int func(struct Obj *o) {
    switch (o->kind) {
    case 0:
        break;
    case 0x10000:
    case 0x100000:
    case 0x20000:
    case 0x40000:
    case 0x80000:
    case 0x80:
    case 0x2000:
    case 0x100:
    case 0x400:
    case 0x800:
    case 0x1000:
    case 0x200:
    case 0x40:
    case 0x8000:
    case 0x400000:
    case 0x4000:
    case 0x200000:
        o->scale = 80.0f;
        if (o->idx != -1) func_00130eb0(D_002FA374[o->idx].first, o->scale, 1.3333334f);
        D_002FA55C = 0x3f800000;
        if (D_70003FFC == 0xAFBFCFDF) D_70003FAC = *(float *)0x2FA55C;
        break;
    }
    return 1;
}
