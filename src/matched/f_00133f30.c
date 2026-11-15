extern void func_00135b10(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0xac850070
    .word 0xac860074
    .word 0xe48c0094
    addiu v0,zero,1
    .word 0xac870098
    .word 0xac8200b4
    .word 0x8c830008
    .word 0x3c020030
    addiu t0,v0,27992
    .word 0x3c020030
    addiu a1,v0,27996
    .word 0xac67055c
    .word 0x8c890000
    .word 0x3c024422
    ori a2,v0,0x8000
    .word 0x3c02fffe
    .word 0x3c03c220
    ori v0,v0,0xfff
    sll a3,t1,0x3
    subu a3,a3,t1
    sll t1,a3,0x6
    addu a3,t0,t1
    addu a1,a1,t1
    .word 0xc4e10000
    .word 0xc4a00000
    sub.s $f0,$f1,$f0
    .word 0x3c050001
    .word 0xe48000c4
    .word 0xac80009c
    .word 0xac8600a0
    .word 0xac8300a4
    .word 0x8c860008
    .word 0x8cc30010
    and v0,v1,v0
    .word 0xacc20010
    .word 0x8c910008
    .word 0x8e22003c
    beq v0,a1,L13401c
    .word 0x70808628
    .word 0x8e220010
    andi v0,v0,0x2
    bnez v0,L134020
    .word 0x72002628
    .word 0x8e22000c
    .word 0x8c420010
    jalr ra,v0
    .word 0x72202628
    beqz v0,L13401c
    nop
    .word 0x8e22000c
    .word 0x72202628
    .word 0x3c050001
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L13401c:
    .word 0x72002628
L134020:
    jal func_00135b10
    nop
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,48
}
