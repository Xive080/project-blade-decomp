struct S { char pad[0xc4]; char n1[0x20]; char n2[0x100]; };
void func_00121f90(char *, char *, s32);
void func_00121de0(char *, char *, s32);
s32 func_00121b70(char *);
char *func_00122150(char *, s32);
char *func_001221a0(char *, char *, s32);
extern char D_002EFDF8[];
void func(struct S *o, char *path, char *out1, char *out2, char *out3) {
    char buf[320];
    char *p;
    char *q;
    s32 i;
    func_00121f90(buf, path, 320);
    p = buf;
    for (i = 0; p != 0 && i < 320; i++) {
        if (*p == 92) *p = 47;
        p++;
    }
    switch (buf[0]) {
    case 47: {
        func_00121f90(out1, o->n1, 32);
        func_00121de0(out1, buf, 288);
        q = func_00122150(buf, 47);
        if (q) {
            func_00121f90(out3, q + 1, 32);
        } else {
            *out3 = 0;
            *out2 = 0;
            return;
        }
        {
            func_00121f90(out2, buf, 256);
            if (out2[func_00121b70(out2)] == 47) *out3 = 0;
            q = func_00122150(out2, 47);
            if (q) *q = 0;
        }
        break;
    }
    case 46: {
        func_00121f90(out1, o->n1, 32);
        func_00121de0(out1, o->n2, 256);
        func_00121de0(out1, buf + 2, 288);
        q = func_00122150(buf, 47);
        if (q) {
            func_00121f90(out3, q + 1, 32);
        } else {
            *out3 = 0;
            *out2 = 0;
            return;
        }
        {
            func_00121f90(out2, o->n2, 256);
            func_00121de0(out2, buf + 2, 288);
            if (out2[func_00121b70(out2)] == 47) *out3 = 0;
            q = func_00122150(out2, 47);
            if (q) *q = 0;
        }
        break;
    }
    default: {
        q = func_001221a0(buf, D_002EFDF8, i);
        if (q) {
            func(o, q, out1, out2, out3);
            return;
        }
        func_00121f90(out1, o->n1, 32);
        func_00121de0(out1, o->n2, 256);
        func_00121de0(out1, buf, 288);
        q = func_00122150(buf, 47);
        if (q) func_00121f90(out3, q + 1, 32);
        else func_00121f90(out3, buf, 32);
        func_00121f90(out2, o->n2, 256);
        func_00121de0(out2, buf, 288);
        if (out2[func_00121b70(out2)] == 47) *out3 = 0;
        q = func_00122150(out2, 47);
        if (q) *q = 0;
    }
    }
}
