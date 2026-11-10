void func(void *p, int a1, int a2){
    *(int*)((char*)p + 0x44) = a1;
    *(int*)((char*)p + 0x48) = a2;
}
