asm void f(void) {
    .set noreorder
    .set noat
    .word 0x3c030030
    addiu v1,v1,25212
    sll a3,a1,0x2
    addu v1,v1,a3
    .word 0x8c630000
    bnez a0,L16fe54
    .word 0x70001628
    .word 0x3c040030
    addiu a0,a0,24688
    sll a1,a1,0x1
    addu a0,a0,a1
    .word 0x9485028c
    .word 0x70003e28
    b L16fe40
    .word 0x70604628
L16fe0c:
    .word 0x8d040000
    beqzl a0,L16fe3c
    addiu t0,t0,4
    slt at,a2,v0
    bnezl at,L16fe38
    addiu v0,v0,1
    sll v0,a3,0x2
    addu v0,v1,v0
    b L16ff14
    .word 0x8c420000
    addiu v0,v0,1
L16fe38:
    addiu t0,t0,4
L16fe3c:
    addiu a3,a3,1
L16fe40:
    slt a0,a3,a1
    bnez a0,L16fe0c
    nop
    b L16ff14
    .word 0x70001628
L16fe54:
    sll a3,a0,0x2
    addu a0,a3,a0
    sll t1,a0,0x2
    .word 0x3c040030
    addiu a0,a0,25112
    addu a0,a0,t1
    .word 0x8c880000
    .word 0x3c010030
    .word 0x8c276070
    sll a1,a1,0x1
    .word 0x70005e28
    .word 0x3c040030
    addiu a0,a0,25116
    addu a0,a0,t1
    addu t0,a3,t0
    .word 0x8c870000
    .word 0x3c040030
    addiu a0,a0,24688
    addu a0,a0,a1
    addu a1,t0,a3
    .word 0x9487028c
    b L16ff00
    .word 0x70604e28
L16feb0:
    .word 0x8d2a0000
    beqzl t2,L16fefc
    addiu t1,t1,4
    sltu a0,t2,t0
    bnez a0,L16fef8
    nop
    sltu at,t2,a1
    beqz at,L16fef8
    nop
    slt at,a2,v0
    bnezl at,L16fef4
    addiu v0,v0,1
    sll v0,t3,0x2
    addu v0,v1,v0
    b L16ff14
    .word 0x8c420000
    addiu v0,v0,1
L16fef4:
    nop
L16fef8:
    addiu t1,t1,4
L16fefc:
    addiu t3,t3,1
L16ff00:
    slt a0,t3,a3
    bnez a0,L16feb0
    nop
    nop
    .word 0x70001628
L16ff14:
    jr ra
    nop
}
