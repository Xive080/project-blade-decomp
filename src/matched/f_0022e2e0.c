struct E { char pad[0x40]; s32 p40; s32 p44; s32 p48; s32 q[1]; char pad2[0x160 - 0x50]; s32 p160; };
void a1(void *);
void a2(s32);
void a3(void *);
void a4(s32);
void f(s32 x, struct E *e) {
    u32 i;
    char *p;
    s32 *q;
    i = 0;
    p = (char *)e;
    do {
        a1(p + 0x54);
        i++;
        p += 0x28;
    } while (i < 4U);
    a3(e);
    q = e->q;
    if (*q != 0) {
        a2(*q);
        *q = 0;
        e->p48 = 0;
    }
    a4(e->p40);
    e->p40 = 0;
    e->p44 = 0;
    e->p160 = 0;
}
