typedef int s32;
typedef float f32;
extern void f1(s32);
extern f32 f2(void);
extern s32 D638;
extern volatile s32 D644, D650, D668, D674, D680, D68C, D6C8;
extern volatile f32 D6B0;
void func(s32 a0, s32 a1) {
    if (D638 != -1) {
        f1(D638);
        D680 = 1;
        D644 = -1;
        D650 = -1;
        D68C = 0;
        D674 = 0;
        D668 = 0;
    }
    D650 = a1;
    D644 = a0;
    D6B0 = f2();
    D68C = 0;
    D674 = 1;
    D668 = 0;
    D6C8 = 0;
}
