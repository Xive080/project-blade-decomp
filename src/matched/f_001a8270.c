struct V3 { float x, y, z; };
struct M { float m[16]; };
extern char D_F[];
extern char D_M[];
extern char D_P0[];
extern char D_P1[];
extern char D_P2[];
extern char D_V0[];
extern char D_V1[];
extern char D_V2[];
extern float D_S;

int f_001a8270(int i, struct M *m, float *v) {
    unsigned fl;
    int k;
    if (v != 0) {
        *(struct V3 *)(D_V0 + i * 96) = *(struct V3 *)v;
    } else {
        k = i * 96;
        if (*(unsigned *)(D_F + k) & 1) {
            *(float *)(D_V0 + k) = D_S * (m->m[12] - *(float *)(D_P0 + k));
            *(float *)(D_V1 + k) = D_S * (m->m[13] - *(float *)(D_P1 + k));
            *(float *)(D_V2 + k) = D_S * (m->m[14] - *(float *)(D_P2 + k));
        } else {
            *(int *)(D_V0 + k) = 0;
            *(int *)(D_V1 + k) = 0;
            *(int *)(D_V2 + k) = 0;
        }
    }
    k = i * 96;
    *(struct M *)(D_M + k) = *m;
    fl = *(unsigned *)(D_F + k);
    if (!(fl & 1)) {
        *(unsigned *)(D_F + k) = fl | 1;
    }
    return 1;
}
