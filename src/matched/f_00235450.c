typedef struct { float x, y, z, w; } V;
void f_00235450(char *d, char *s) {
    *(V*)(d + 32) = *(V*)s;
}
