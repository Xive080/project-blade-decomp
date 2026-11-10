extern volatile int gA; extern volatile int gB; extern volatile int gC; extern volatile int gD; extern volatile int gE; extern volatile int gF;
void func(int a, int b) {
    gA = a;
    gB = b;
    gC = 1;
    gD = 0xBF800000;
    gE = 0;
    gF = 0;
}
