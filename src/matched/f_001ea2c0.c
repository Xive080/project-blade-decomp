asm void f(void) {
    .set noreorder
    .set noat
    lw t1,12(a0)
    .word 0x70003628
    .word 0x71203e28
L1:
    lw t0,12(a3)
    sltu at,a1,t0
    bnez at,L2
    nop
    lw v1,0(a0)
    addu v1,t0,v1
    sltu at,a1,v1
    beqz at,L2
    nop
    b L3
    addiu a2,zero,1
L2:
    lw a3,0(a3)
    nop
L3:
    bnez a2,L4
    nop
    bne a3,t1,L1
    nop
L4:
    beqz a2,L5
    nop
    lw v1,8(a3)
    addiu v1,v1,-1
    sw v1,8(a3)
    lw v1,8(a3)
    bnez v1,L5
    nop
    sw zero,4(a3)
L5:
    lw a1,12(a0)
    lw v1,8(a1)
    bnez v1,L6
    nop
    lw v1,0(a1)
    sw v1,12(a0)
L6:
    jr ra
    nop
}
