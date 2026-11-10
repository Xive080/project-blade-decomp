void func(int p0, int p1){
    unsigned char t0;
    unsigned char t1;
    t0 = *(unsigned char *)(p1 + 0x0);
    *(unsigned char *)(p0 + 0xc) = t0;
    t1 = *(unsigned char *)(p1 + 0x1);
    *(unsigned char *)(p0 + 0xd) = t1;
}
