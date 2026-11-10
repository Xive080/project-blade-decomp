int func(int p, int idx){ int addr = *(int *)(p + 0x10) + (idx * 4); return *(int *)addr; }
