asm void f(void) {
    .set noreorder
    lw a2,0(a0)
    addiu v0,zero,4
    lw v1,88(a2)
    beq v1,v0,L23d9b0
    .word 0x70002e28
    addiu v0,zero,2
    beq v1,v0,L23d9b4
    .word 0x70001628
    addiu v0,zero,3
    beql v1,v0,L23d9a8
    ori a1,a1,0x1
    addiu v0,zero,1
    beq v1,v0,L23d9a0
    addiu v0,zero,-4
    b L23d9b0
    nop
L23d9a0:
    b L23d9bc
    and a1,a1,v0
L23d9a8:
    b L23d9c0
    lw v1,92(a2)
L23d9b0:
    .word 0x70001628
L23d9b4:
    b L23da18
    nop
L23d9bc:
    lw v1,92(a2)
L23d9c0:
    addiu v0,zero,4
    beq v1,v0,L23da08
    .word 0x70001628
    addiu v0,zero,2
    beq v1,v0,L23da04
    addiu v0,zero,3
    beql v1,v0,L23d9fc
    ori a1,a1,0x4
    addiu v0,zero,1
    beq v1,v0,L23d9f4
    addiu v0,zero,-13
    b L23da04
    nop
L23d9f4:
    b L23da10
    and a1,a1,v0
L23d9fc:
    b L23da14
    sd a1,24(a0)
L23da04:
    .word 0x70001628
L23da08:
    b L23da18
    nop
L23da10:
    sd a1,24(a0)
L23da14:
    addiu v0,zero,1
L23da18:
    jr ra
    nop
}
