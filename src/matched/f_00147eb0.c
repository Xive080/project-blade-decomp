extern int f147e20(void);
extern int f147b70(int, int);
extern void f147f30(int, int);
int func(int a) {
    int s, t;
    if (a == 0) return 0;
    s = f147e20();
    if (s != 0) {
        do { t = s; s = f147b70(a, s); f147f30(a, t); } while (s != 0);
    }
    return 1;
}
