struct Q { int pad[4]; char *buf; };
struct T { struct Q *q[3]; unsigned short idx; unsigned short cnt; };
extern struct T D[];
void f(void) {
    struct T *t = D;
    unsigned short i;
    for (i = 0; i < 2; i++, t++) {
        int n = t->cnt;
        if (n > 0) {
            unsigned short k;
            char *p = t->q[t->idx]->buf + (unsigned short)n * 16;
            for (k = 118 - n; k != 0; k--, p += 16)
                *(int *)(p + 4) = 0;
        }
    }
}
