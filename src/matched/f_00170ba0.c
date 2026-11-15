struct V { char pad[16]; s32 (*f10)(void*, s32); s32 (*f14)(void*, s32, s32); };
struct I { struct V *vt; s32 fl; };
struct O2 { s32 id; char pad[8]; struct I i; char pad2[40]; s32 f3c; };
extern s32 D[];
extern u32 N;
void func(void) {
    u32 i;
    struct O2 *e;
    s32 *p;
    struct I *q;
    s32 a0;
    p = D;
    for (i = 0; i < N; p++, i++) {
        e = (struct O2 *)p[952];
        a0 = e->id;
        if (a0 >= 0x10000 && a0 < 0x800001 && *(s32*)((char*)e+60) != 0 && !(e->i.fl & 2) && (q = &e->i)->vt->f10(e, 0) != 0) {
            q->vt->f14(e, 0, 0);
        }
    }
}
