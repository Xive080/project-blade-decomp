void func(void *p){
    *(int*)((char*)p + 0xc) = 0;
}
