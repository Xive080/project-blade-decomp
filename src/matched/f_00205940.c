int func(int p, int idx){ int val1 = *(unsigned short *)(p + 4); int val2 = *(int *)(p + 8); val1 = (val1 * 8) + 12; val2 = val2 * 4; return val1 + val2; }
