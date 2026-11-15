asm void func(void) {
    .set noreorder
    .set noat
    lw v1,-30224(gp)
    sll v0,a0,0x2
    addu v0,v0,v1
    lw v1,44(v0)
    lw v0,40(v1)
    bnez v0,L24b334
    nop
    b L24b35c
    .word 0x70001628
L24b334:
    lw v1,36(v1)
    andi v0,v1,0x3
    beqz v0,L24b35c
    addiu v0,zero,1
    andi a0,v1,0x20
    addiu v0,zero,3
    addiu v1,zero,2
    b L24b35c
    movz v0,v1,a0
    addiu v0,zero,1
L24b35c:
    jr ra
    nop
}
