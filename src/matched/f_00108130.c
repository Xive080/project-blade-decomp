void func(void *p, int a1, int a2){
    *(int*)((char*)p + 0xc) = a1;
    *(int*)((char*)p + 4) = a2;
    *(int*)p = a1;
    *(int*)((char*)p + 8) = a1;
}
