extern int D_002FA6D0, D_00327D48, D_00327D4C, D_00327D54, D_00327D58, D_00327D5C;
extern int func_001a8010(int, float);
extern void func_00132950(float);
extern void func_001aa020(int);
extern void func_001b5920(int);
extern int func_00249e50(int);
extern int func_00249fa0(int);
void func(void) {
    if (func_001a8010(1, 0.8f) != 0) {
        D_00327D48 = 0x3F4CCCCD;
    }
    func_00132950(0.55f);
    D_00327D4C = 0x3F0CCCCD;
    func_001aa020(1);
    D_002FA6D0 = 1;
    D_00327D5C = 1;
    D_00327D54 = func_00249fa0(0);
    D_00327D58 = func_00249e50(0);
    func_001b5920(3);
}
