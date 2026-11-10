void func(void *p, int a1, int a2){
    *(int*)((char*)p + 0x8c) = a1;
    *(int*)((char*)p + 0x90) = a2;
}
