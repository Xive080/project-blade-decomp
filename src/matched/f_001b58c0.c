struct E { float f[7]; };
extern char base[];
int f(int a, float x) {
    unsigned i;
    for (i = 0; i < 8; i++) { if (!(x <= ((struct E *)(base + a * 224) + i)->f[23])) return i; }
    return i; }
