extern void g186290(void*, void*, int*);
void f(void *a, void *b, int *c) {
    char *o = *(char**)c;
    if (o == 0) {
        g186290(b, b, c);
    } else {
        ((void(*)(void*, void*, int*))*(int*)(o + 136))(o + 60, b, c + 1);
    }
}
