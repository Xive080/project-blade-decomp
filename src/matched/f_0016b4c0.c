extern void func_001bf040(void);
extern void func_001ca470(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    .word 0x7fbf0010
    .word 0x7fb00000
    .word 0x8f828390
    .word 0x70808628
    addiu a0,sp,44
    addiu a1,zero,4
    addu v0,a2,v0
    .word 0xc4400000
    jal func_001bf040
    .word 0xe4800000
    addiu a1,sp,44
    addiu a2,zero,4
    jal func_001ca470
    .word 0x72002628
    movz s0,zero,v0
    .word 0x72001628
    .word 0x7bbf0010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,48
}
