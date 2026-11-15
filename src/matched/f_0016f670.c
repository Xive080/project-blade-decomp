extern void F(char *);
extern int D0[]; extern int D1[]; extern int D2[]; extern int D3[]; extern int D4[];
int func(int a) {
    char c[16];
    F(c);
    switch (c[0]) {
    case 'f': return D1[a];
    case 's': return D4[a];
    case 'g': return D2[a];
    case 'i': return D3[a];
    case 'e':
    default: return D0[a];
    }
}
