extern s32 gh;
extern char *f13b550(s32, s32);
extern void f24b540(s32, s32, void *);
extern void f24b470(s32, s32);
extern void f1785a0(s32);
extern s32 f121b70(char *);
extern s32 f256438(f32);
struct E { u16 n; u16 m; char *s[8]; };
struct L { char *p; char a; char b; };
struct T { s32 a; u8 n; u8 i; u8 j; f32 f; struct E *e; void (*fn)(void *); };
struct O { char pad[12]; struct T t; };
extern struct E ents[];
extern char buf[];
extern char chars[];
s32 f(struct O *o, s32 c) {
    struct T *t = &o->t;
    struct E *e;
    struct L l, l2, l3;
    switch (c) {
    case 0: {
        char *s = f13b550(gh, 157);
        struct E *q = ents;
        char *ch;
        buf[0] = 0;
        l.p = (char *)t->a; l.a = 0; l.b = 1;
        f24b540(24, 0, &l);
        t->e = ents;
        t->n = 0;
        t->i = 0;
        ents[0].n = 2;
        ents[0].m = 2;
        ents[0].s[0] = f13b550(gh, 158);
        ents[0].s[1] = f13b550(gh, 159);
        t->j = 1;
        t->f = (f32)t->j / (f32)ents[0].n;
        ch = chars;
        do {
            t->n++;
            q++;
            q->n = 0;
            q->m = 8;
            do {
                q->s[q->n] = ch;
                ch[0] = *s;
                ch[1] = 0;
                q->n++;
                s++;
                ch += 2;
            } while (*s != 0 && *s != 92 && q->n < 8);
            if (*s == 92) s++;
        } while (*s != 0);
        f24b540(23, 1, t);
        break;
    }
    case 4:
        e = t->e + t->i;
        if (t->j == 0) t->j = (s8)e->n - 1; else t->j = t->j - 1;
        t->f = (0.05f + (f32)t->j) / (f32)e->m;
        f1785a0(3);
        f24b470(23, 0);
        break;
    case 5:
        e = t->e + t->i;
        if (t->j == e->n - 1) t->j = 0; else t->j = t->j + 1;
        t->f = (0.05f + (f32)t->j) / (f32)e->m;
        f1785a0(3);
        f24b470(23, 0);
        break;
    case 2:
        if (t->i == 0) t->i = t->n - 1; else t->i = t->i - 1;
        e = t->e + t->i;
        t->j = f256438(t->f * (f32)e->m);
        if (t->j >= e->n) t->j = e->n - 1;
        f1785a0(3);
        f24b470(23, -1);
        return 0;
    case 3:
        if (t->i == t->n - 1) t->i = 0; else t->i = t->i + 1;
        e = t->e + t->i;
        t->j = f256438(t->f * (f32)e->m);
        if (t->j >= e->n) t->j = e->n - 1;
        f1785a0(3);
        f24b470(23, 1);
        return 0;
    case 6:
        e = t->e + t->i;
        if (t->i == 0) {
            switch (t->j) {
            case 0: {
                s32 n = f121b70(buf);
                if (n != 0) buf[n - 1] = 0;
                l2.p = buf; l2.a = 0; l2.b = 1;
                f24b470(24, (s32)&l2);
                f1785a0(2);
                break;
            }
            case 1:
                if (buf[0] == 0) { t->fn((void *)t->a); return 0; }
                t->fn(buf);
                return 0;
            }
        } else {
            s32 n = f121b70(buf);
            char ch = e->s[t->j][0];
            if (n >= 8 || (n == 0 && ch == 32)) {
                f1785a0(5);
            } else {
                s32 k = n + 1;
                buf[n] = ch;
                buf[k] = 0;
                f1785a0(2);
                l3.p = buf; l3.a = 0; l3.b = 1;
                f24b470(24, (s32)&l3);
            }
        }
        break;
    }
    return 1;
}
