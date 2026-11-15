struct V { float x, y, z; };
extern void func_00165190(char *, float *, char *, char *, float, float, float *);
extern void func_001c7610(void *, float *, int, float);
extern void func_001ce410(void *, void *, int, void *);
extern char *func_001c3b70(int);
void func(char *o, float z, float a, float b) {
    float t[16];
    float c[3];
    float e;
    float s;
    func_00165190(o, t, o + 148, o + 160, a, b, &e);
    a = (3.0f - 2.0f * a) * (a * a);
    *(int *)(o + 172) = 0;
    *(int *)(o + 176) = 0x3f800000;
    *(int *)(o + 180) = 0;
    *(int *)0x70003EF8 = 0x3f800000;
    *(int *)0x70003EE4 = 0x3f800000;
    *(int *)0x70003ED0 = 0x3f800000;
    *(int *)0x70003EE0 = 0;
    *(int *)0x70003ED8 = 0;
    *(int *)0x70003ED4 = 0;
    *(int *)0x70003EF4 = 0;
    *(int *)0x70003EF0 = 0;
    *(int *)0x70003EE8 = 0;
    *(int *)0x70003F08 = 0;
    *(int *)0x70003F04 = 0;
    *(int *)0x70003F00 = 0;
    *(int *)0x70003EDC |= 0x20003;
    c[0] = *(float *)(o + 148) - *(float *)(o + 160);
    c[1] = *(float *)(o + 152) - *(float *)(o + 164);
    c[2] = *(float *)(o + 156) - *(float *)(o + 168);
    func_001c7610((void *)0x70003ED0, c, 0, 60.0f * (a - 0.5f));
    func_001ce410(o + 172, o + 172, 1, (void *)0x70003ED0);
    {
        char *p = func_001c3b70(*(int *)(o + 104));
        *(struct V *)(p + 48) = *(struct V *)(o + 148);
    }
}
