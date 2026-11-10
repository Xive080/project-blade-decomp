void func(void *p){
    *(int*)((char*)p + 0x20) = 0;
    *(int*)((char*)p + 0x24) = 0;
    *(int*)((char*)p + 0x28) = 0;
}
