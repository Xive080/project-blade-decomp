void func(void *dst, f32 *src) {
    *(f32*)((char*)dst + 0x20) = *src;
    *(int*)((char*)dst + 0x24) = 0;
}
