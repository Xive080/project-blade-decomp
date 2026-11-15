asm void func(void) {
    .set noreorder
    .set noat
    .word 0x3c020033
    addiu a1,v0,-6624
    lw a2,20(a0)
    .word 0x8ca30000
    addiu v0,zero,3
    addiu a0,v1,20
    lw v1,20(v1)
    .word 0x54620006
    .word 0x70002628
    addiu v0,zero,2
    sw v0,0(a0)
    lw v0,0(a1)
    lw a0,24(v0)
    nop
    lw v1,8(a0)
    addiu v0,zero,-1
    lw v1,0(v1)
    bne v1,v0,L210694
    sll v0,v1,0x3
    b L2106c4
    .word 0x70002e28
L210694:
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v1,v0,a0
    lw v0,24(v1)
    sw v0,28(v1)
    lw v0,8(a0)
    lw v1,0(v0)
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,a0,v0
    addiu a1,v0,20
L2106c4:
    lw v1,8(a0)
    addiu v0,zero,-1
    lw v1,4(v1)
    bne v1,v0,L2106e0
    sll v0,v1,0x3
    b L210710
    .word 0x70001628
L2106e0:
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v1,v0,a0
    lw v0,24(v1)
    sw v0,28(v1)
    lw v0,8(a0)
    lw v1,4(v0)
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,a0,v0
    addiu v0,v0,20
L210710:
    lw a0,8(a1)
    .word 0x080841f4
    lw a1,8(v0)
    nop
    beqz a0,L210748
    .word 0x70001628
    lw v1,12(a0)
    beqz v1,L210748
    nop
    lw v0,20(a0)
    beqzl v0,L210748
    .word 0x70801628
    sw a1,0(v0)
    .word 0x70801628
L210748:
    jr ra
    nop
}
