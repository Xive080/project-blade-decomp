typedef struct { float x, y; } V2;
typedef struct { float x, y, z, w; } V4;
typedef struct { int z; V2 p; V4 q; int pa[2]; float s0, s1; V4 r; int pb[2]; float s2, s3; V4 u; int pc[2]; float s4, s5; V4 v; int pd[4]; } L;
extern void g186970(void*);
extern struct { char pad[9432]; int *o; } g_obj;
void f(float *a, V4 *b, int n) {
    L l;
    int *o;
    l.z = 0;
    l.p = *(V2*)a;
    l.s0 = a[0] + a[2];
    l.s1 = a[1] + a[3];
    l.s2 = l.s0 + a[4];
    l.s3 = l.s1 + a[5];
    l.s4 = a[0] + a[4];
    l.s5 = a[1] + a[5];
    l.q = *(V4*)(a + 6);
    l.u = *b;
    if (n) {
        l.r = *b;
        l.v = *(V4*)(a + 6);
    } else {
        l.r = *(V4*)(a + 6);
        l.v = *b;
    }
    o = g_obj.o;
    if (o == 0) {
        g186970(&l);
    } else {
        char *t = *(char**)o;
        if (t == 0) g186970(&l);
        else ((void(*)(void*, void*, int*))*(int*)(t + 128))(t + 60, &l, o + 1);
    }
}
