int func(int p, int idx){ int addr = *(int *)p + (idx * 4); return *(int *)addr; }
