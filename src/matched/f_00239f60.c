extern void func_00238c10(void);
extern void func_00239360(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-112
    .word 0x7fbf0060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    beqz a1,L239f9c
    paddub s4,a0,zero
    .word 0x8ca30000
    addiu v0,a1,68
    .word 0xae830014
    b L239fa0
    .word 0xae820018
L239f9c:
    .word 0xae800014
L239fa0:
    .word 0x8e910014
    slt at,zero,s1
    beqz at,L239ff8
    paddub s0,zero,zero
    paddub s3,a1,zero
    paddub s2,zero,zero
L239fb8:
    .word 0x8e820018
    .word 0x8e650004
    addu v0,v0,s2
    .word 0x8c550000
    jal func_00238c10
    paddub a0,s5,zero
    beqzl v0,L239fe4
    addiu s0,s0,1
    jal func_00239360
    paddub a0,s5,zero
    addiu s0,s0,1
L239fe4:
    addiu s2,s2,4
    slt v0,s0,s1
    bnez v0,L239fb8
    addiu s3,s3,4
    nop
L239ff8:
    .word 0x7bbf0060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,112
}
