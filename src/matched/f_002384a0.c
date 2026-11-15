struct S { s32 on; char a[28]; char b[22248]; char c[168]; char d[10152]; char e[4]; char f[0xcbdc - 32604]; s32 x; };
extern char G_8278[8];
extern s32 f23ac50(s32, s32, char *, char *, char *, char *, char *, char *, char *);
extern s32 f238f10(s32, char *);
extern s32 f238c10(char *, s32);
s32 func(struct S *p, s32 a, s32 b) {
    if (p->on == 1) return 1;
    if (f23ac50(a, b, G_8278, p->a, p->b, p->c, p->d, p->e, p->f) != 0) { p->x = f238f10(0, p->c); if (p->x != 0) { if (f238c10(p->a, p->x) != 0) { p->on = 1; return 1; } } }
    return 0;
}
