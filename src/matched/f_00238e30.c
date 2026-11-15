asm void f(void) {
    .set noreorder
    .set noat
    bnez a0,L238e40
    .word 0x70003628
    .word 0x3c03002e
    addiu a0,v1,31104
L238e40:
    lw t1,8(a0)
    .word 0x70003e28
    b L238e98
    .word 0x70004628
L238e50:
    lw t2,12(a0)
    addu v1,t2,t0
    lw v1,0(v1)
    beqzl v1,L238e90
    addiu t0,t0,4
    lw v1,0(v1)
    bne a1,v1,L238e8c
    sll v1,a3,0x2
    addu v1,t2,v1
    sw zero,0(v1)
    lw v1,4(a0)
    addiu a2,zero,1
    addiu v1,v1,-1
    b L238ea8
    sw v1,4(a0)
L238e8c:
    addiu t0,t0,4
L238e90:
    addiu a3,a3,1
    nop
L238e98:
    sltu v1,a3,t1
    bnez v1,L238e50
    nop
    nop
L238ea8:
    addiu v1,zero,1
    bne a2,v1,L238f08
    nop
    lw a3,8(a0)
    addiu a1,zero,5
    .word 0x70004e28
    b L238ef8
    .word 0x70003628
L238ec8:
    lw v1,12(a0)
    addu v1,v1,a2
    lw v1,0(v1)
    beqzl v1,L238ef4
    addiu a2,a2,4
    lw t0,0(v1)
    slt v1,t0,a1
    bnez v1,L238ef0
    nop
    addiu a1,t0,1
L238ef0:
    addiu a2,a2,4
L238ef4:
    addiu t1,t1,1
L238ef8:
    sltu v1,t1,a3
    bnez v1,L238ec8
    nop
    sw a1,0(a0)
L238f08:
    jr ra
    nop
}
