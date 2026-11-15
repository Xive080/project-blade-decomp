typedef void (*F)(void *, int, int);
extern void F1ec0(void *, int, int);
extern void F1880(void *, int, int);
extern void F0c10(void *, int, int);
extern void F0a90(void *, int, int);
extern void F0ef0(void *, int, int);
extern void F10e0(void *, int, int);
extern void F1480(void *, int, int);
extern void F1bd0(void *, int, int);
extern void F0df0(void *, int, int);
extern int G;
void func(void *a, int b) {
    F f = 0; G = b; if (a == 0) return;
    switch (b) {
    case 0: f = F1ec0; break;
    case 1: case 2: case 4: return;
    case 3: f = F1880; break;
    case 9: f = F0c10; break;
    case 10: return;
    case 11: f = F0a90; break;
    case 8: f = F0ef0; break;
    case 5: f = F10e0; break;
    case 7: f = F1480; break;
    case 6: f = F1bd0; break;
    case 12: f = F0df0; break;
    }
    f(a, 1, 0);

}
