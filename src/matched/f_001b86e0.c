typedef int s32;
typedef unsigned int u32;
extern void f1214b8(void *, char *, char *, char *);
extern s32 *f177390(s32, void *);
extern void f177480(s32 *, s32, void (*)(void), void (*)(void));
extern void f1b87d0(void);
extern void f177790(void);
extern s32 gHandle;
extern char S1[], S2[], S3[];
extern s32 *gA[];
extern s32 gB[];
extern volatile s32 gCount[];
struct E { char pad[36]; u32 sz; };
extern struct E gTab[];
s32 func(s32 a) {
    char buf[16];
    s32 *p;
    u32 i;
    f177480(&gHandle, a, f1b87d0, f177790);
    if (gHandle == 0) return 0;
    f1214b8(buf, S1, S2, S3);
    p = f177390(gHandle, buf);
    gA[0] = (s32 *)*p;
    gA[1] = p + 1;
    gCount[0] = 2;
    gCount[0] += 3;
    for (i = 0; i < 6; i++) gCount[0] += (gTab[i].sz + 1023) >> 10;
    return 1;
}
