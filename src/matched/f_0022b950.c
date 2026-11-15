typedef int s32;
typedef float f32;
struct F { f32 a[10]; };
extern char D_0022C4F0[], D_0022CA10[], D_0022CCC0[], D_0022CD50[], D_0022CEA0[], D_0022CF20[], D_0022D310[];
extern struct F D_00331920;
extern char *D_00331924, *D_00331928, *D_0033192C, *D_00331930, *D_00331934, *D_00331940;
extern s32 D_0033193C;
extern char *D_00331920p;
extern struct F *func_0017a3c0(void);
extern void func_00170690(s32, void *, s32, s32);
s32 func(void) {
    D_00331920 = *func_0017a3c0();
    D_00331920p = D_0022CF20;
    D_00331924 = D_0022CEA0;
    D_00331928 = D_0022CD50;
    D_00331930 = D_0022CCC0;
    D_00331934 = D_0022CA10;
    D_0033192C = D_0022C4F0;
    D_0033193C = 0;
    D_00331940 = D_0022D310;
    func_00170690(0x400000, &D_00331920, 0x18F0, 0x84);
    return 1;
}
