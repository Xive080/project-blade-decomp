extern void func_001214b8(void);
extern void func_00170070(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-208
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x3c020030
    .word 0x7fb10010
    addiu v0,v0,23888
    .word 0x7fb00000
    .word 0x70a09e28
    .word 0x70809628
    .word 0xac82000c
    jal func_00170070
    .word 0x72602628
    .word 0x70408e28
    bnez s1,L15c8a0
    .word 0x70008628
    b L15c99c
    .word 0x70001628
    .word 0x70008628
L15c8a0:
    addiu s0,s0,1
    sll v0,s0,0x2
    addu v0,v0,sp
    addiu s4,v0,112
    .word 0xafb10070
L15c8b4:
    .word 0x3c02002f
    addiu a0,sp,96
    addiu a1,v0,-14568
    .word 0x72603628
    jal func_001214b8
    .word 0x72003e28
    jal func_00170070
    addiu a0,sp,96
    beqzl v0,L15c8f0
    .word 0x3c020800
    .word 0xae820000
    addiu s4,s4,4
    b L15c8b4
    addiu s0,s0,1
    .word 0x3c020800
L15c8f0:
    .word 0xae420000
    .word 0xae400004
    .word 0x8e640018
    addiu v0,zero,10000
    .word 0x70001e28
    movz v1,v0,a0
    .word 0xae430008
    .word 0xae510070
    .word 0xae500074
    .word 0x8e620018
    beqz v0,L15c94c
    nop
    .word 0x44820000
    nop
    cvt.s.w $f0,$f0
    .word 0x3c023f80
    .word 0x44820800
    nop
    div.s $f0,$f1,$f0
    nop
    nop
    b L15c950
    nop
L15c94c:
    .word 0x44800000
L15c950:
    .word 0xe640007c
    .word 0x72001628
    .word 0xe6400080
    addiu s0,s0,-1
    beqz v0,L15c998
    .word 0xae400078
    sll v0,s0,0x2
    addu a1,s2,v0
    addu v0,v0,sp
    addiu a0,v0,112
L15c978:
    .word 0x8c830000
    .word 0x72001628
    addiu s0,s0,-1
    .word 0x8c630000
    addiu a0,a0,-4
    .word 0xaca30010
    bnez v0,L15c978
    addiu a1,a1,-4
L15c998:
    addiu v0,zero,1
L15c99c:
    .word 0x7bbf0050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,208
}
