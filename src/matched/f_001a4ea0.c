extern volatile int g_0x2E3240;
extern volatile int g_0x2E361C;
extern int g_0x2E3620;
extern float g_0x2E3624;
extern float g_0x2E3628;
extern int g_0x2E362C;
extern float g_0x2E3264;
extern int f_0x1F79F0();
int func(void) {
    if ((unsigned)(g_0x2E3240 - 4) < 2U) {
        g_0x2E361C = 1;
        g_0x2E3620 = g_0x2E3240;
        g_0x2E3624 = *(float*)0x70003FB0;
        g_0x2E3628 = *(float*)0x70003FB4;
        g_0x2E362C = f_0x1F79F0();
        g_0x2E3264 = *(float*)0x70003FB0 ;
    }
    g_0x2E3240 = 2;
    return 1;
}
