asm void f(void) {
    .set noreorder
    .set noat
    addiu v1,zero,1
    beq a0,v1,L2105d8
    .word 0x70001628
    beqzl a0,L2105d0
    .word 0x3c02002e
    addiu v1,zero,2
    beql a0,v1,L2105c8
    .word 0x3c02002e
    b L2105e0
    nop
L2105c8:
    b L2105e0
    addiu v0,v0,22928
L2105d0:
    b L2105e0
    addiu v0,v0,23024
L2105d8:
    .word 0x3c02002e
    addiu v0,v0,23120
L2105e0:
    jr ra
    nop
}
