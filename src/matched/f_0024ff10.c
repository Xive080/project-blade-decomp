extern int func_00234ff0();
struct V { float x,y,z; };
struct S { char pad[0xe4]; struct V *t; struct V a, d; float g,h, i, j, k; };
void func(struct S *p, int n) {
    int r = func_00234ff0();
    p->a = p->d;
    p->d = p->t[n+1];
    p->g = 0; p->h = 0;
    p->i = (float)(r & 0x3ff) / 1023.0f;
    p->i = 0.2f + 0.6f * p->i;
    p->i = 1.0f / p->i;
    p->j = (float)(r & 0xfff) / 4095.0f;
    p->j = 0.125f + 0.675f * p->j;
    p->j = 1.0f / p->j;
    p->k = (float)(r & 0x3fff) / 16383.0f;
    p->k = 0.25f + 0.55f * p->k;
}
