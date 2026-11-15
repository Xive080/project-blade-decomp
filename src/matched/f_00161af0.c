struct P { int f0, f4, f8, fc, f10, f14, f18, f1c, f20, f24, f28, f2c, f30, f34, f38; };
struct O { char pad[0x3f4]; float f3f4; char pad2[0x570 - 0x3f8]; struct P *p; int pad3; int act; float dur; float t; float amp; };
extern float D_gp;
float func_0011a398(float);
void func_001c7610(void *, int, int, float);
void func_001c7ac0(void *, float *, int);
int func(struct O *o) {
    float v[3];
    float t, r, k;
    if (o->act == 0) return 0;
    t = o->t - *(float *)0x70003FA8;
    o->t = t;
    if (t <= 0.0f) {
        o->act = 0;
        o->p->f28 = 0x3F800000;
        o->p->f14 = 0x3F800000;
        o->p->f0 = 0x3F800000;
        o->p->f10 = 0;
        o->p->f8 = 0;
        o->p->f4 = 0;
        o->p->f24 = 0;
        o->p->f20 = 0;
        o->p->f18 = 0;
        o->p->f38 = 0;
        o->p->f34 = 0;
        o->p->f30 = 0;
        o->p->fc |= 0x20003;
        return 1;
    }
    t = t / o->dur;
    if (t < 0.25f) {
        k = 2.0f * t;
        r = o->amp * k * func_0011a398(0.017453292f * (180.0f * k));
    } else {
        k = (4.0f * (t - 0.25f)) / 3.0f;
        t = 0.5f * o->amp;
        r = t + (-t * k);
    }
    v[0] = 0.0f;
    v[1] = 0.0f;
    v[2] = -o->f3f4 * D_gp;
    func_001c7ac0(o->p, v, 0);
    func_001c7610(o->p, *(int *)((char *)o + 0x56c) + 16, 2, r);
    v[0] = -1.0f * v[0];
    v[1] = -1.0f * v[1];
    v[2] = -1.0f * v[2];
    func_001c7ac0(o->p, v, 2);
    return 1;
}
