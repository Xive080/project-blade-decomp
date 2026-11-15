extern void func_001297c0(void);
extern void func_0013bf20(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    .word 0x7fbf0010
    .word 0x7fb00000
    .word 0x8ca20024
    .word 0x70808628
    .word 0x70a02628
    .word 0x70003628
    addiu a1,sp,32
    jal func_0013bf20
    .word 0xafa2003c
    .word 0x3c020013
    addiu a3,sp,60
    addiu a1,sp,32
    addiu a2,v0,-18528
    jal func_001297c0
    .word 0x72002628
    .word 0x7bbf0010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,64
}
