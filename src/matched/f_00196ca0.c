extern float func_001b5ca0();
extern float func_001b5cc0();
extern void func_001b5cd0(float);
extern void func_001785a0(int);
extern void func_00178520(int);
extern void func_00197540(int, int);
extern void func_00197e40(int, int, float, float);
extern void func_00197de0(int, int);
extern void func_0024b470(int, void*);
extern void func_0024b4b0(int, int);
extern void func_0024b540(int, int, int*);

int func(int a0, int a1, int a2) {
    struct { int z; float f2; } s;
    float f;
    switch (a1) {
    case 4:
    case 5: {
        float d;
        f = func_001b5cc0();
        d = func_001b5ca0() / 0.8f;
        f = f / d;
        if (a1 == 4) {
            f = f - 0.01f;
            if (f < 0.0f) {
                f = 0.0f;
                func_00197540(a2, 2);
                func_001785a0(8);
            }
        } else {
            f += 0.01f;
            if (!(f <= 1.0f)) {
                f = 1.0f;
                func_00197540(a2, 3);
                func_001785a0(8);
            }
        }
        func_0024b470(12, &f);
        func_001b5cd0(f * d);
        break;
    }
    case 0: {
        float t;
        s.z = 0;
        t = func_001b5cc0();
        s.f2 = 0.8f * (t / func_001b5ca0());
        func_001785a0(6);
        func_00197e40(0, 2, 0.25f, 0.025f);
        func_00197e40(0, 3, 0.25f, 0.025f);
        func_00197e40(1, 2, 0.25f, 0.025f);
        func_00197e40(1, 3, 0.25f, 0.025f);
        func_0024b540(12, 0, (int*)&s);
        break;
    }
    case 1:
        func_00178520(6);
        func_00197de0(0, 2);
        func_00197de0(0, 3);
        func_00197de0(1, 2);
        func_00197de0(1, 3);
        func_0024b4b0(12, 0);
        break;
    }
    return 1;
}
