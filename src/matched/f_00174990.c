extern char D0[], D8[], D10[], D1C[], D2C[], D30[];
extern void F(int, int, void *);
int func(int i, int v, float t) {
    int o;
    int *s0;
    if (!(t <= 0.0f)) {
        *(float *)(D1C + i * 0x34) = t + *(float *)0x70003FB0;
    } else {
        *(int *)(D1C + i * 0x34) = 0;
    }
    o = i * 0x34;
    s0 = (int *)(D10 + o);
    if (v != *s0) {
        if (*(int *)(D8 + o) != 0) {
            *(int *)(D2C + o) = 1;
            if (v != 0) *(int *)(D30 + o) = 1; else *(int *)(D30 + o) = 0;
            F(i, 3, D0 + o + 0x2c);
        }
        *s0 = v;
    }
    return 1;
}
