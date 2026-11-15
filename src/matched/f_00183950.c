#pragma mpwc_relax on
void func_00186970(float *);
struct V { char pad[0x3c]; char pad2[0x44]; void (*fn)(void *, float *, char *); };
struct A { char pad[8]; float f8; float fC; char pad2[0x1c]; unsigned n; };

void func(struct A *arg0, float *arg1, char *arg2) {
    float tmp[33];
    int k;
    int *dst, *src;
    unsigned n;
    float s, a, b;
    float *t1;
    dst = (int *)tmp;
    k = 33;
    src = (int *)arg1;
    t1 = arg1;
    do {
        k -= 1;
        *dst = *src;
        src += 1;
        dst += 1;
    } while (k > 0);
    n = arg0->n;
    if (n != 0) {
        do {
            s = (float)n;
            a = arg0->f8 * s;
            b = arg0->fC * s;
            tmp[1] = t1[1] + a;
            tmp[2] = t1[2] + b;
            tmp[9] = t1[9] + a;
            tmp[10] = t1[10] + b;
            tmp[17] = t1[17] + a;
            tmp[18] = t1[18] + b;
            tmp[25] = t1[25] + a;
            tmp[26] = t1[26] + b;
            {
                struct V *v = *(struct V **)arg2;
                if (v == 0) func_00186970(tmp);
                else v->fn((char *)v + 0x3c, tmp, arg2 + 4);
            }
            n -= 1;
        } while (n != 0);
    }
    {
        struct V *v = *(struct V **)arg2;
        if (v == 0) {
            func_00186970(t1);
            return;
        }
        v->fn((char *)v + 0x3c, t1, arg2 + 4);
    }
}
