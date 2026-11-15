struct O;
struct V { s32 p; void (*fn)(struct O *, s32, s32); };
struct O { struct V *v; char p[8]; s32 m; };
extern s32 chk(void);
extern s32 cmp(char *, char *, char *);
extern char A[], B[], C[];
extern s32 g1, g2;
s32 f(struct O *o) {
    chk();
    switch (o->m) {
    case 4: case 6: case 5:
        if (cmp(A, B, C) != 0 && g1 == g2) o->v->fn(o, 7, 0);
        break;
    default:
        break;
    }
    return 1;
}
