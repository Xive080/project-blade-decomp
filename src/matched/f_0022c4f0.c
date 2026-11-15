struct V { float x, y, z; };
struct O {
    char p00[0x14]; struct V cur; char p0[0x3c - 0x20]; int mode;
    char p1[0x420 - 0x40]; int h;
    struct V pos[240];
    int q[240];
    float d[240];
    int head; int cnt; int tot; float tm; float tm2;
    struct V last; float dist;
    char sub[0x74]; char sub2[0x74]; char sub3[0x74];
};
extern int f22d320(struct V *, int, float *);
extern float f1ce240(struct V *);
extern void f22c900(void *, int);
extern void f1a8600(void *, void *, int);
extern void f1a8e80(void *);
extern int f234ff0(void);
void func(struct O *o) {
    struct V a;
    struct V b;
    float t;
    int k;
    char *s;
    int i, n;
    switch (o->mode) {
    case 2:
        break;
    case 4:
        if (o->cnt < 240 && o->cnt < o->tot && !(*(float *)0x70003FB0 <= o->tm)) {
            o->cnt = o->cnt + 1;
            o->tm = o->tm2 + *(float *)0x70003FB0;
        }
        f22d320(&a, o->h, &t);
        b.x = a.x - o->last.x;
        b.y = a.y - o->last.y;
        b.z = a.z - o->last.z;
        o->dist = f1ce240(&b);
        if (!(o->dist <= 0.25f)) {
            int h = o->head;
            float t2 = t;
            o->pos[h] = a;
            o->last = o->pos[h];
            o->d[o->head] = t2;
            f22c900(&o->q[o->head], o->h + 128);
            o->head = o->head + 1;
            o->head = o->head % 240;
            o->tot = o->tot + 1;
        }
        o->cur = a;
        n = o->cnt;
        i = (o->head - n + 240) % 240;
        {
            while (n-- != 0) {
                if (o->pos[i].y < o->d[i]) {
                    { float t = 1.5f * *(float *)0x70003FA8; o->pos[i].y += t; }
                    if (o->pos[i].y > o->d[i]) o->pos[i].y = o->d[i];
                } else if (o->pos[i].y > o->d[i]) {
                    { float t = 1.5f * *(float *)0x70003FA8; o->pos[i].y -= t; }
                    if (o->pos[i].y < o->d[i]) o->pos[i].y = o->d[i];
                }
                i++;
                i = i % 240;
            }
        }
        f1a8600(o->sub, &o->pos[(o->head - o->cnt + 240) % 240], 0);
        if (o->cnt > 6 && (f234ff0() % 100) < 15) {
            k = (o->head - (f234ff0() % (o->cnt / 3)) + 240) % 240;
            if (f234ff0() & 1) s = o->sub2;
            else s = o->sub3;
            f1a8600(s, &o->pos[k], 0);
            f1a8e80(s);
        }
        break;
    case 0:
        break;
    }
}
