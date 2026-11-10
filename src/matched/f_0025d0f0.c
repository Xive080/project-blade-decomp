struct S { char pad[0x84]; int field; };
void func(struct S *arg0) {
    arg0->field = 0;
}
