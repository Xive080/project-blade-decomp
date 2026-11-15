struct M { f32 r0[4]; f32 r1[4]; f32 r2[4]; f32 r3[4]; };
struct O { s32 p0; f32 a[3]; f32 b[3]; char pad[0x10]; f32 s1; f32 s2; s32 pad2; struct M *m; s32 f60; s32 pad3; s32 f68; };
struct A { s32 type; char pad[0xc8]; struct D *d; };
struct D2 { char pad[0x30]; s32 f48; };
extern struct { struct A *cur; struct O *obj; } gpv;
extern f32 U[];
extern void func_001297c0(char *, void *, char *, s32);
extern void func_001ce160(f32 *, f32 *);
extern void func_00180400(struct O *, f32 *, f32 *);
extern char D_00181B10[];
struct V { f32 x, y, z; };
extern struct V Uv;
struct BX { struct V lo, hi; };
#define BOX() { \
  bx.lo = *(struct V *)o->m->r3; \
  bx.hi = *(struct V *)o->m->r3; \
  bx.lo.x += 5.0f; bx.lo.y += 5.0f; bx.lo.z += 5.0f; bx.hi.x -= 5.0f; bx.hi.y -= 5.0f; bx.hi.z -= 5.0f; \
  gpv.obj = o; \
  func_001297c0(*(char **)0x70003FD8, &bx, D_00181B10, 0); }

void func(struct A *a0, struct O *o) {
    f32 d0, d1, d2, a0f, a1f, a2f, sg, k, w;
    f32 v[3];
    struct BX bx;
    struct M *m;
    gpv.cur = a0;
    if (o->f60 != 0) {
        if (a0->type == 0x80000) {
            struct D2 *dd = (struct D2 *)a0->d;
            s32 *q = &dd->f48;
            if (dd->f48 != 0) {
                *q = 0;
                BOX();
            }
        } else {
            BOX();
        }
    }
    if (o->f68 != 0) {
        m = o->m;
        d0 = m->r0[0] * U[0] + m->r0[1] * U[1] + m->r0[2] * U[2];
        d1 = m->r1[0] * U[0] + m->r1[1] * U[1] + m->r1[2] * U[2];
        d2 = m->r2[0] * U[0] + m->r2[1] * U[1] + m->r2[2] * U[2];
        a0f = d0 >= 0.0f ? d0 : -d0;
        a1f = d1 >= 0.0f ? d1 : -d1;
        a2f = d2 >= 0.0f ? d2 : -d2;
        o->a[0] = o->a[0] * o->s1;
        o->a[1] = o->a[1] * o->s1;
        o->a[2] = o->a[2] * o->s1;
        o->b[0] = o->b[0] * o->s2;
        o->b[1] = o->b[1] * o->s2;
        o->b[2] = o->b[2] * o->s2;
        if (a0f > 0.95f || a1f > 0.95f || a2f > 0.95f) {
            o->b[0] = U[0] * (U[0] * o->b[0] + U[1] * o->b[1] + U[2] * o->b[2]);
            o->b[1] = U[1] * (U[0] * o->b[0] + U[1] * o->b[1] + U[2] * o->b[2]);
            o->b[2] = U[2] * (U[0] * o->b[0] + U[1] * o->b[1] + U[2] * o->b[2]);
            if (a0f > 0.95f) {
                *(struct V *)o->m->r0 = *(struct V *)U;
                sg = d0 > 0.0f ? 1.0f : -1.0f;
                o->m->r0[0] *= sg; o->m->r0[1] *= sg; o->m->r0[2] *= sg;
                o->m->r2[0] = o->m->r0[1] * o->m->r1[2] - o->m->r0[2] * o->m->r1[1];
                o->m->r2[1] = o->m->r0[2] * o->m->r1[0] - o->m->r0[0] * o->m->r1[2];
                o->m->r2[2] = o->m->r0[0] * o->m->r1[1] - o->m->r0[1] * o->m->r1[0];
                func_001ce160(o->m->r2, o->m->r2);
                o->m->r1[0] = o->m->r2[1] * o->m->r0[2] - o->m->r2[2] * o->m->r0[1];
                o->m->r1[1] = o->m->r2[2] * o->m->r0[0] - o->m->r2[0] * o->m->r0[2];
                o->m->r1[2] = o->m->r2[0] * o->m->r0[1] - o->m->r2[1] * o->m->r0[0];
            } else if (a1f > 0.95f) {
                *(struct V *)o->m->r1 = Uv;
                sg = d1 > 0.0f ? 1.0f : -1.0f;
                o->m->r1[0] *= sg; o->m->r1[1] *= sg; o->m->r1[2] *= sg;
                o->m->r2[0] = o->m->r0[1] * o->m->r1[2] - o->m->r0[2] * o->m->r1[1];
                o->m->r2[1] = o->m->r0[2] * o->m->r1[0] - o->m->r0[0] * o->m->r1[2];
                o->m->r2[2] = o->m->r0[0] * o->m->r1[1] - o->m->r0[1] * o->m->r1[0];
                func_001ce160(o->m->r2, o->m->r2);
                o->m->r0[0] = o->m->r1[1] * o->m->r2[2] - o->m->r1[2] * o->m->r2[1];
                o->m->r0[1] = o->m->r1[2] * o->m->r2[0] - o->m->r1[0] * o->m->r2[2];
                o->m->r0[2] = o->m->r1[0] * o->m->r2[1] - o->m->r1[1] * o->m->r2[0];
            } else {
                *(struct V *)o->m->r2 = Uv;
                sg = d2 > 0.0f ? 1.0f : -1.0f;
                o->m->r2[0] *= sg; o->m->r2[1] *= sg; o->m->r2[2] *= sg;
                o->m->r1[0] = o->m->r2[1] * o->m->r0[2] - o->m->r2[2] * o->m->r0[1];
                o->m->r1[1] = o->m->r2[2] * o->m->r0[0] - o->m->r2[0] * o->m->r0[2];
                o->m->r1[2] = o->m->r2[0] * o->m->r0[1] - o->m->r2[1] * o->m->r0[0];
                func_001ce160(o->m->r1, o->m->r1);
                o->m->r0[0] = o->m->r1[1] * o->m->r2[2] - o->m->r1[2] * o->m->r2[1];
                o->m->r0[1] = o->m->r1[2] * o->m->r2[0] - o->m->r1[0] * o->m->r2[2];
                o->m->r0[2] = o->m->r1[0] * o->m->r2[1] - o->m->r1[1] * o->m->r2[0];
            }
        } else {
            f32 c0, c1, c2, dd;
            dd = o->a[0] * U[0] + o->a[1] * U[1] + o->a[2] * U[2];
            if (a0f > a1f) {
                if (a0f > a2f) {
                    m = o->m;
                    c0 = m->r0[1] * U[2] - m->r0[2] * U[1];
                    c1 = m->r0[2] * U[0] - m->r0[0] * U[2];
                    c2 = m->r0[0] * U[1] - m->r0[1] * U[0];
                    if (d0 > 0.0f) k = 1.0f; else k = -1.0f; dd = dd * k;
                } else {
                    m = o->m;
                    c0 = m->r2[1] * U[2] - m->r2[2] * U[1];
                    c1 = m->r2[2] * U[0] - m->r2[0] * U[2];
                    c2 = m->r2[0] * U[1] - m->r2[1] * U[0];
                    if (d2 > 0.0f) k = 1.0f; else k = -1.0f; dd = dd * k;
                }
            } else {
                if (a1f > a2f) {
                    m = o->m;
                    c0 = m->r1[1] * U[2] - m->r1[2] * U[1];
                    c1 = m->r1[2] * U[0] - m->r1[0] * U[2];
                    c2 = m->r1[0] * U[1] - m->r1[1] * U[0];
                    if (d1 > 0.0f) k = 1.0f; else k = -1.0f; dd = dd * k;
                } else {
                    m = o->m;
                    c0 = m->r2[1] * U[2] - m->r2[2] * U[1];
                    c1 = m->r2[2] * U[0] - m->r2[0] * U[2];
                    c2 = m->r2[0] * U[1] - m->r2[1] * U[0];
                    if (d2 > 0.0f) k = 1.0f; else k = -1.0f; dd = dd * k;
                }
            }
            dd *= 3.0f;
            c0 = c0 * dd;
            o->b[0] = o->b[0] + c0;
            c1 = c1 * dd;
            o->b[1] = o->b[1] + c1;
            c2 = c2 * dd;
            o->b[2] = o->b[2] + c2;
            v[0] = c1 * U[2] - c2 * U[1];
            v[1] = c2 * U[0] - c0 * U[2];
            v[2] = c0 * U[1] - c1 * U[0];
            v[0] = 0.5f * v[0];
            v[1] = 0.5f * v[1];
            v[2] = 0.5f * v[2];
            func_00180400(o, &v[0], &v[2]);
        }
    }
}
