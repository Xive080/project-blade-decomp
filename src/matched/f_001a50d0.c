extern void f11eac8(void *, void *, int);
unsigned char *f(unsigned char *p, int *o) {
    int go;
    *o = 254;
    do {
        unsigned char t = *p;
        go = 0;
        if (t == 255) {
            p += 1;
            break;
        } else if (t == 253) {
            *o = t;
            f11eac8(o + 1, p + 1, 48);
            p += 49;
            go = 1;
        } else if (t == 252) {
            *o = t;
            p += 1;
            while ((int)p & 3) p += 1;
            f11eac8(o + 1, p, 28);
            p += 28;
            go = 1;
        } else if (t == 251) {
            *o = t;
            f11eac8(o + 1, p + 1, 12);
            p += 13;
            go = 1;
        }
    } while (go);
    return p;
}
