extern char A[];
extern char Bb[];
extern int cnt[];
void func(void) {
    int i;
    int j; int *p; int *q; float *r; int *s; int *t; int k;
    s = (int *)A;
    t = (int *)Bb;
    for (i = 0; i < cnt[0]; i++) {
        j = 0;
        p = s;
        do { p[100] = 0; p++; j++; } while (j < 16);
        k = 0;
        q = s;
        r = (float *)t;
        do {
            q[116] = 0;
            ((float *)q)[120] = r[264];
            q++;
            r++;
            k++;
        } while (k < 4);
        s += 112;
        t += 112;
    }
}
