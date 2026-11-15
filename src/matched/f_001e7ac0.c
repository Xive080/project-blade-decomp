extern void func_0011eac8(void);
extern void func_001bee90(void);
extern void func_001bf040(void);
extern void func_001bfc60(void);
extern void func_001ca470(void);
extern void func_001e7460(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-80
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8cb20000
    paddub s1,a1,zero
    paddub s0,a0,zero
    addiu a2,zero,8
    addiu a3,zero,784
    jal func_001bee90
    addiu a1,zero,1
    bnez v0,L1e7b00
    addiu a0,sp,72
    b L1e7be4
    paddub v0,zero,zero
L1e7b00:
    addiu a1,gp,-32424
    jal func_0011eac8
    addiu a2,zero,4
    .word 0x8e220058
    .word 0x92230054
    .word 0x8e26005c
    addiu a0,sp,76
    addiu a1,zero,4
    andi v0,v0,0xf
    sll v0,v0,0x8
    or v1,v1,v0
    andi v0,a2,0xf
    sll v0,v0,0xc
    or v0,v0,v1
    jal func_001bf040
    .word 0xac820000
    addiu a1,sp,72
    paddub a0,s0,zero
    jal func_001ca470
    addiu a2,zero,8
    bnez v0,L1e7b60
    addiu a0,s1,16
    b L1e7be4
    paddub v0,zero,zero
L1e7b60:
    jal func_001bfc60
    paddub a1,s0,zero
    bnez v0,L1e7b78
    addiu a0,s1,48
    b L1e7be4
    paddub v0,zero,zero
L1e7b78:
    jal func_001bfc60
    paddub a1,s0,zero
    bnez v0,L1e7b90
    paddub v0,zero,zero
    b L1e7be8
    .word 0x7bbf0030
L1e7b90:
    .word 0x8f82877c
    addiu s1,zero,76
    paddub a0,s0,zero
    addiu a1,zero,1
    addiu a3,zero,784
    addu v0,s2,v0
    .word 0x8c430028
    .word 0x8c42002c
    addu v0,v1,v0
    addiu v0,v0,12
    addu s1,s1,v0
    jal func_001bee90
    paddub a2,s1,zero
    bnez v0,L1e7bd4
    paddub a0,s0,zero
    b L1e7be4
    paddub v0,zero,zero
L1e7bd4:
    paddub a1,s2,zero
    jal func_001e7460
    paddub a2,s1,zero
    sltu v0,zero,v0
L1e7be4:
    .word 0x7bbf0030
L1e7be8:
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,80
}
