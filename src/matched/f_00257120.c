struct O { char p[132]; int a[7]; int b[3]; int c[4]; int d; };
void f257120(struct O *o) {
    unsigned int i;
    o->a[0] = 0; o->a[1] = 0; o->a[2] = 0; o->a[3] = 0; o->a[4] = 0; o->a[5] = 0; o->a[6] = 0;
    o->c[0] = 0; o->c[1] = 0; o->c[2] = 0; o->c[3] = 0;
    for (i = 0; i < 3; i++) o->b[i] = 0;
    o->d = 0;
}
