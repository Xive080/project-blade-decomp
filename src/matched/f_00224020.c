typedef struct Key { float pad; float time; float val[3]; float in[3]; float out[3]; } Key;
typedef struct Res { float pad; float time; float val[3]; } Res;
#define L(a,b,t) ((a) + (t) * ((b) - (a)))
void f(Res *r, Key *a, Key *b, float x) {
    float t, p0, o0, n0, e0, q00, q01, q02, s00, s01, p1, o1, n1, e1, q10, q11, q12, s10, s11, p2, o2, n2, e2, q20, q21, q22, s20, s21;

    t = (x - a->time) / (b->time - a->time);
    r->time = x;
    q00=L(a->val[0],a->out[0],t); q01=L(a->out[0],b->in[0],t); q02=L(b->in[0],b->val[0],t);
    q10=L(a->val[1],a->out[1],t); q11=L(a->out[1],b->in[1],t); q12=L(b->in[1],b->val[1],t);
    q20=L(a->val[2],a->out[2],t); q21=L(a->out[2],b->in[2],t); q22=L(b->in[2],b->val[2],t);
    s00=L(q00,q01,t); s01=L(q01,q02,t);
    s10=L(q10,q11,t); s11=L(q11,q12,t);
    s20=L(q20,q21,t); s21=L(q21,q22,t);
    r->val[0]=L(s00,s01,t);
    r->val[1]=L(s10,s11,t);
    r->val[2]=L(s20,s21,t);
}
