extern void f1d84f0(void*);
struct S { void *p[6]; char pad[8]; int z[1]; };
struct T { void *p[6]; int z[69]; };
extern char base[];
int func(void) {
    struct T *s = (struct T*)base;
    if (s->p[0]) { f1d84f0(s->p[0]); s->p[0] = 0; }
    if (s->p[2]) { f1d84f0(s->p[2]); s->p[2] = 0; }
    if (s->p[1]) { f1d84f0(s->p[1]); s->p[1] = 0; }
    if (s->p[3]) { f1d84f0(s->p[3]); s->p[3] = 0; }
    if (s->p[4]) { f1d84f0(s->p[4]); s->p[4] = 0; }
    if (s->p[5]) { f1d84f0(s->p[5]); s->p[5] = 0; }
    s->z[2] = 0; s->z[14] = 0; s->z[26] = 0; s->z[38] = 0; s->z[50] = 0; s->z[62] = 0;
    return 1;
}
