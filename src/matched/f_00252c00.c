void func(void *p){
    *(int*)((char*)p + 0x84) = 0;
}
