void func(void *p, int a1, int a2){
    *(int*)((char*)p + 0x3c) = a1;
    *(int*)((char*)p + 0x40) = a2;
}
