asm void func(void) {
    .set noreorder
    .word 0x3c020033
    addiu v0,v0,-23008
    lw v1,0(v0)
    lw v1,20(v1)
    addiu v0,zero,1
    bnel v1,v0,L1
    .word 0x70001628
L1:
    sll v1,v0,2
    addiu v0,gp,-32560
    addu v0,v0,v1
    lw a2,0(v0)
    .word 0x3c020033
    .word 0x2447e620
    lw v1,0(a3)
    addiu v0,zero,3
    addiu a1,v1,20
    lw v1,20(v1)
    bnel v1,v0,L2
    .word 0x70002e28
    addiu v0,zero,2
    sw v0,0(a1)
    lw v0,0(a3)
    lw a1,24(v0)
    nop
L2:
    jr a2
    nop
    nop
    nop
    .word 0x3c02002e
    jr ra
    addiu v0,v0,15504
}
