extern void sub_1b9c00(void*, void*, int, void*);
int f_1b98d0(char *a0, int *a1, int a2, int *a3) {
    int r = 0;
    switch (a2) {
    case 4:
        if (*(int*)((char*)a3 + 8)) {
            float t;
            a1[0] |= 1;
            t = ((float*)a1)[4] + ((float*)a3)[0];
            ((float*)a1)[4] = t;
            if (!(t < *(float*)(a0 + 40))) r = 1;
        } else {
            a1[4] = 0;
        }
        break;
    default:
        break;
    }
    sub_1b9c00(a0, a1, a2, a3);
    return r;
}
