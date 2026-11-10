void func(void *dst, f32 *src){
    *(f32*)((char*)dst + 0x1c) = src[0];
    *(f32*)((char*)dst + 0x20) = src[1];
    *(f32*)((char*)dst + 0x24) = src[2];
    *(int*)((char*)dst + 0x28) = 0x437f0000;
    *(int*)((char*)dst + 0x18) = 0x3e800000;
}
