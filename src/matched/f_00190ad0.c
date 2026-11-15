extern void *func_001c3b70(int);
extern float func_001ce240(void *);
extern void func_001ce160(float *, float *);
extern void func_0013c530(void *, float *, int, float);
extern void func_0014a940(void *);
extern void func_0014abc0(void *);
struct O { char p0[0x32c]; int mode; char p1[0x5bc-0x330]; struct I *i; };
struct I { char p[8]; void *o; int c[1]; };
void func(struct O *self, int arg1) {
    float v[3];
    float *s;
    float f;
    void *a0 = ((struct I*)self->i)->o;
    s = (float*)func_001c3b70(((int (**)(void*))(*(int**)((char*)a0+12)))[6](a0));
    f = 0.8f * func_001ce240((char*)*(void**)((char*)self->i+12) + 12);
    if (f < 3.0f) f = 3.0f;
    if (self->mode == 4) {
        v[0] = s[8] + s[0];
        v[1] = s[9] + s[1];
        v[2] = s[10] + s[2];
    } else {
        v[0] = s[8] - s[0];
        v[1] = s[9] - s[1];
        v[2] = s[10] - s[2];
    }
    if (arg1 == 0) {
        if (self->mode == 4) func_0014a940(self->i->o);
        else func_0014abc0(self->i->o);
    }
    v[1] = 0.0f;
    func_001ce160(v, v);
    func_0013c530(self->i, v, arg1, f);
}
