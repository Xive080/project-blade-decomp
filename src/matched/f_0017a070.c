extern void f1a8e80(char *);
extern int f234ff0(void);
int func(char *o, int t) {
    char *a = o;
    switch (t) {
    case 1: a = o + 336; break;
    case 2: a = o + 220; break;
    case 3: a = o + 568; break;
    }
    f1a8e80(a);
    if (t != 2) {
        float x = (float)(f234ff0() & 0x7fff) / 32768.0f; float y = 5.0f; x = x * y; *(float *)(o + 800) = 10.0f + (x + *(float *)0x70003fb0);
    }
    return 1;
}
