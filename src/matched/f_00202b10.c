int func(int p, int idx){ int val = *(int *)(p + 0x48) + (((idx * 8) - idx) * 4); return val; }
