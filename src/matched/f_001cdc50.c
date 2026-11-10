void func(void *p){
    int v1 = *(int*)((char*)p + 4);
    if (v1 != 0) {
        int a1 = *(int*)((char*)p + 8);
        v1 = *(int*)((char*)p + 0xc);
        *(int*)v1 = a1;
        a1 = *(int*)((char*)p + 0xc);
        v1 = *(int*)((char*)p + 8);
        *(int*)((char*)v1 + 4) = a1;
    }
}
