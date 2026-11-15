extern void sub(char *);
extern int g1;
extern int g2;
extern int tE[][11];
extern int tF[][11];
extern int tG[][11];
extern int tI[][11];
extern int tS[][11];

int f(int a, int b, int c) {
    char buf[16];
    sub(buf);
    if (a == 99) a = g1;
    if (b == 99) b = g2;
    if (c != 0) b += 6;
    switch (buf[0]) {
    case 'f': return tF[b][a];
    case 's': return tS[b][a];
    case 'g': return tG[b][a];
    case 'i': return tI[b][a];
    case 'e':
    default: return tE[b][a];
    }
}
