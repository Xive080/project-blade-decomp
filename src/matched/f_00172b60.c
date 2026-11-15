void F172c00(void);
void F172c10(void);
void F173110(void);
void F1731b0(void);
extern void * volatile D8190;
extern void * volatile D8194;
extern void * volatile D8198;
extern volatile s32 D819c;
extern void * volatile D81a0;
extern void * volatile D81b0;
extern volatile s32 D81b4;
extern volatile s32 D81c0;
extern volatile s32 D81c4;
void f1332c0(s32, void *);
void *f(void) {
    D8190 = F1731b0;
    D8194 = F173110;
    D8198 = F172c10;
    D819c = 0;
    D81a0 = F172c00;
    D81b0 = (void*)&D8190;
    D81b4 = 0;
    D81c0 = -1;
    D81c4 = -1;
    f1332c0(4, (void*)&D81b0);
    return (void*)&D81b0;
}
