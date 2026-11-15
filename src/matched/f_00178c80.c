extern void f11ec80(void*, int, int);
extern void f24d520(void);
extern int f170690(int, void * volatile *, int, int);
extern char A[], B[];
extern void *volatile D0[], *volatile D1[];
extern volatile int D2[], D3[];
extern char Buf[];
extern int G;
int func(void) {
    f11ec80(Buf, 0, 6600);
    G = 0;
    f24d520();
    D0[0] = A; D1[0] = B; D2[0] = 0; D3[0] = 0;
    f170690(0x2000, D0, 0, 0);
    return 1;
}
