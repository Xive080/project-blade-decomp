typedef struct { float x, y, z; } V3;
extern int func_0016f240(int, int, int);
extern void func_00141300(void *, int *, float *, float *);
extern float D_70003FA8;

int func(char *self) {
    struct { int a30; int p[3]; V3 v40; float q0; V3 v50; float q1; V3 v60; float q2; V3 v70; float q3; int a80; } L;
    char *s0;
    int r;
    if (*(int*)(self + 4) & 0x400000) return 0;
    if (*(float*)(*(char**)(self + 12) + 28) < *(float*)(*(char**)0x70003FD8 + 144)) {
        *(float*)(self + 616) = *(float*)(self + 616) + D_70003FA8;
    } else {
        *(float*)(self + 616) = 0.0f;
        return 0;
    }
    if (!(*(float*)(self + 616) <= 2.0f)) {
    r = func_0016f240(16, -1, 0);
    s0 = *(char**)0x70003FDC;
    if (*(int*)(self + 8) == r) {
        L.a80 = r;
        L.v70 = *(V3*)(s0 + 40);
        L.v50 = *(V3*)(s0 + 16);
        L.v40 = *(V3*)(s0 + 4);
        L.v60 = *(V3*)(s0 + 28);
    } else {
        L.a80 = func_0016f240(16, -1, 1);
        L.v70 = *(V3*)(s0 + 812);
        L.v50 = *(V3*)(s0 + 788);
        L.v40 = *(V3*)(s0 + 776);
        L.v60 = *(V3*)(s0 + 800);
    }
    L.v70.x = L.v70.x + *(float*)(*(char* volatile*)0x70003FD8);
    L.v70.y = L.v70.y + *(float*)(*(char* volatile*)0x70003FD8 + 4);
    L.v70.z = L.v70.z + *(float*)(*(char* volatile*)0x70003FD8 + 8);
    L.a30 = 0;
    func_00141300(self, &L.a30, &L.v70.y, &L.v70.z);
    }
    return 1;
}
