typedef struct E { float f[7]; } E;
int func_00121910(E *, E *);

static inline int same(unsigned char *a, unsigned char *b) {
    if (a[21] == b[21]) {
        if (a[22] == b[22] && a[23] == b[23] && a[25] == b[25] && a[26] == b[26] && a[27] == b[27]) return 1;
    }
    return 0;
}

void func(E *arr, E *n) {
    unsigned int i;
    unsigned int k;
    E *p;
    E *q;
    i = 0;
    p = arr;
    do {
        if (p->f[4] == n->f[4] && func_00121910(p, n) == 0) {
            if (same((unsigned char *)p, (unsigned char *)n)) break;
        }
        if (p->f[4] < n->f[4]) {
            k = 7;
            if (i < 7) {
                q = arr + 7;
                do {
                    k--;
                    *q = q[-1];
                    q--;
                } while (i < k);
            }
            *p = *n;
            return;
        }
        i++;
        p++;
    } while (i < 8);
}
