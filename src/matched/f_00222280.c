typedef unsigned int u32; typedef int s32; typedef float f32; typedef unsigned char u8;
struct H { u32 n; char *p4, *p8, *pc, *p10; };
struct Src { u8 c[4]; f32 p[3]; f32 d[3]; f32 a; f32 q[3]; s32 f; f32 g; f32 h; };
struct G { char pad[0x130]; struct H *(*alloc)(s32); };
extern char D_0032A620[];
extern char D_002FAA88[];
extern void func_001bf2b0(s32, void *);
extern void func_001ca2d0(s32, void *, s32);
extern f32 func_00119ff8(f32);

char *func(s32 arg0) {
    s32 sp[4];
    u32 n; s32 sz; s32 cnt; struct Src *s; char *s4; char *s5; char *s6; char *s7; struct H *r;
    func_001bf2b0(arg0, sp);
    n = (u32)sp[1] / 56;
    if (n == 0) return 0;
    sz = n * 16;
    r = ((struct G *)D_0032A620)->alloc(sz + (sz + (sz + (sz + 20))));
    r->n = n;
    r->p4 = (char *)r + 20;
    r->p8 = r->p4 + sz;
    r->p10 = r->p8 + sz;
    r->pc = r->p10 + sz;
    s4 = r->p4;
    s5 = r->p8;
    s6 = r->p10;
    s7 = r->pc;
    if (n != 0) {
        do {
            if (n > 292) { cnt = 16352; n -= 292; } else { cnt = n * 56; n = 0; }
            s = (struct Src *)D_002FAA88;
            func_001ca2d0(arg0, s, cnt);
            do {
                f32 t;
                ((f32*)s4)[0] = s->p[0]; ((f32*)s4)[1] = s->p[1]; ((f32*)s4)[2] = s->p[2];
                ((f32*)s5)[0] = 1.5f * s->q[2];
                ((f32*)s5)[1] = s->q[0]; ((f32*)s5)[2] = s->q[1];
                t = 0.49803922f * ((f32)(u32)s->c[3] / 255.0f);
                ((f32*)s7)[0] = (f32)(u32)s->c[0] * t;
                ((f32*)s7)[1] = (f32)(u32)s->c[1] * t;
                ((f32*)s7)[2] = (f32)(u32)s->c[2] * t;
                if (!(s->a <= 0.0f)) {
                    ((f32*)s6)[0] = -s->d[0]; ((f32*)s6)[1] = -s->d[1]; ((f32*)s6)[2] = -s->d[2];
                    ((f32*)s6)[3] = 1.0f - func_00119ff8(0.017453292f * s->a);
                } else {
                    ((f32*)s6)[0] = 0; ((f32*)s6)[1] = 0; ((f32*)s6)[2] = 0; ((f32*)s6)[3] = 0;
                }
                if (s->f != 0) {
                    ((s32*)s4)[3] = s->f;
                    ((f32*)s5)[3] = 1.0f / s->g;
                    ((f32*)s7)[3] = s->h;
                } else {
                    ((s32*)s4)[3] = 0; ((s32*)s5)[3] = 0; ((s32*)s7)[3] = 0;
                }
                cnt -= 56; s4 += 16; s5 += 16; s6 += 16; s7 += 16; s++;
            } while (cnt != 0);
        } while (n != 0);
    }
    return (char *)r;
}
