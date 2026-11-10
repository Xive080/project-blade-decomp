f32 func(int p){
    int v1;
    int v0;
    f32 f0;
    f32 f1;
    v1 = *(int *)((char *)p + 0x474);
    v0 = *(int *)(v1 + 8);
    f0 = *(f32 *)(v1 + 0xc);
    f1 = *(f32 *)(v0 + 0xc);
    return f1 - f0;
}
