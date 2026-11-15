asm void f(void) {
    .set noreorder
    .set noat
    bnez a1,L243164
    addiu v0,zero,19
    b L2431f4
    addiu v0,zero,1
    addiu v0,zero,19
L243164:
    beq a0,v0,L2431a4
    nop
    addiu v0,zero,23
    beq a0,v0,L2431a4
    nop
    addiu v0,zero,22
    beq a0,v0,L2431a4
    nop
    addiu v0,zero,21
    beq a0,v0,L2431a4
    nop
    addiu v0,zero,18
    beq a0,v0,L2431a4
    nop
    b L2431f4
    addiu v0,zero,1
L2431a4:
    .word 0x3c010030
    lw a0,-23024(at)
    addiu v0,zero,2
    bne a0,v0,L2431c4
    addiu v0,zero,1
    b L2431f4
    addiu v0,zero,1
    addiu v0,zero,1
L2431c4:
    bne a0,v0,L2431d0
    nop
    addiu a0,zero,3
L2431d0:
    lw v0,76(a1)
    addiu v1,zero,1
    sllv v1,v1,a0
    and v0,v0,v1
    bnez v0,L2431f0
    nop
    b L2431f4
    .word 0x70001628
L2431f0:
    addiu v0,zero,1
L2431f4:
    jr ra
    nop
}
