extern void func_00188ff0(void);
extern void func_001892c0(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    paddub s0,a0,zero
    jal func_00188ff0
    .word 0x8c840098
    .word 0xae000098
    .word 0x8e04009c
    beqz a0,L2500bc
    nop
    jal func_00188ff0
    nop
    .word 0xae00009c
L2500bc:
    .word 0x8e0400a0
    beqz a0,L2500fc
    addiu s1,s0,176
    jal func_00188ff0
    nop
    .word 0xae0000a0
    jal func_00188ff0
    .word 0x8e0400a4
    .word 0xae0000a4
    jal func_00188ff0
    .word 0x8e0400a8
    .word 0xae0000a8
    jal func_00188ff0
    .word 0x8e0400ac
    .word 0xae0000ac
    addiu s1,s0,176
L2500fc:
    paddub s2,zero,zero
L250100:
    .word 0x8e240000
    beqzl a0,L250134
    addiu s2,s2,1
    jal func_00188ff0
    nop
    .word 0xae200000
    .word 0x8e240004
    beqz a0,L250130
    nop
    jal func_00188ff0
    nop
    .word 0xae200004
L250130:
    addiu s2,s2,1
L250134:
    slti v0,s2,5
    bnez v0,L250100
    addiu s1,s1,8
    jal func_001892c0
    .word 0x8e0400d8
    .word 0xae0000d8
    .word 0x7bbf0030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,64
}
