extern struct E { int p0,p1,p2,p3; int fl; char pad[56]; } D_002FA360[];
f32 func_001ce240(f32 *);
void func(char *o) {
    f32 v[3];
    int i;
    struct E *e;
    f32 *w;
    char *d;
    if (*(int*)0x70003FC8 == 6 || *(int*)0x70003FC8 == 8) {
        v[0] = *(f32*)(o + 80) - *(f32*)0x70003F90;
        v[1] = *(f32*)(o + 84) - *(f32*)0x70003F94;
        v[2] = *(f32*)(o + 88) - *(f32*)0x70003F98;
        *(f32*)(o + 92) = func_001ce240(v);
    } else {
        e = D_002FA360;
        i = 0;
        w = (f32*)0x70003ED0;
        d = o;
        for (; i < 2; i++) {
            if (e->fl & 1) {
                v[0] = *(f32*)(o + 80) - w[48];
                v[1] = *(f32*)(o + 84) - w[49];
                v[2] = *(f32*)(o + 88) - w[50];
                *(f32*)(d + 92) = func_001ce240(v);
            }
            e++;
            w += 3;
            d += 4;
        }
    }
}
