typedef struct { float x, y, z, w; } V;
void f_00233d10(char *d, char *s) {
    *(V*)(d + 32) = *(V*)s;
    *(float*)(d + 48) = *(float*)(s + 16);
    *(int*)(d + 52) = 0; *(int*)(d + 56) = 0; *(int*)(d + 60) = 0; *(int*)(d + 64) = 0;
}
