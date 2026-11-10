int func(int p, int idx){ int addr = *(int *)(p + 4) + (idx * 4); return *(int *)addr; }
