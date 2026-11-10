void func(void *p){
    *(int*)((char*)p + 0x84) = 0;
    *(int*)((char*)p + 0x88) = 0;
}
