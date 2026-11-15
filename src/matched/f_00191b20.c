void *func(int *a){
    int *n = (int*)a[0];
    if (n == a) return 0;
    *(int*)n[1] = n[0];
    ((int*)n[0])[1] = n[1];
    return n + 2;
}
