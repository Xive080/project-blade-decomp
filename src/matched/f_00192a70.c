asm void func(void) {
    .set noreorder
    .set noat
    lw v0,-31560(gp)
    beqz v0,L1
    .word 0x70001628
    lw v0,484(a0)
    bnez v0,L2
    addiu v0,zero,1
    .word 0x70001628
L1:
    b L3
    nop
    addiu v0,zero,1
L2:
    sw a1,488(a0)
L3:
    jr ra
    nop
}
