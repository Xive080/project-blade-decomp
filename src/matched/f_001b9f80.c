struct E { u16 fl; char p[2]; s32 b; char r[104]; };
extern char D_001BA030[];
void func_0016f130(s32, char *, struct E *);

void func(char *o, s32 m) {
    u32 i;
    struct E *p;
    u32 n;
    p = (struct E *)o;
    n = (u8)o[0xE08] + (u8)o[0xE09] + (u8)o[0xE0A] + (u8)o[0xE0B];
    for (i = 0; i < n; i++, p++) {
        if (p->b == 0) {
            if (p->fl & m) func_0016f130(0xAC0000, D_001BA030, p);
        }
    }
}
