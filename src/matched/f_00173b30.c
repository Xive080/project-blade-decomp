#pragma mpwc_relax on
#pragma opt_propagation off
void func_001327d0(s32, f32, f32, f32);
void func_00133120(s32);
s32 func_001a4b40(void);
f32 func_001b5c30();
extern s32 G_844C, G_843C, G_8434;

void func(s32 a, s32 b) {
    G_844C = 1;
    switch (a) {
    case 0:
        if (b) { func_001327d0(0, -1.0f, 0.0f, 0.25f); } else { G_843C = a; }
        break;
    case 3:
        if (b) { func_001327d0(0, -1.0f, 0.0f, 0.25f); } else { G_843C = a; }
        break;
    case 5:
        if (b) { f32 k = -1.0f; f32 r = func_001b5c30(); func_001327d0(0, k, r, 1.0f); } else {
        if (func_001a4b40() == 4) { G_8434 = 1; } else { G_8434 = 0; }
        func_00133120(2); }
        break;
    }
}
