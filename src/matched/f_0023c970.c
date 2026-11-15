asm void f(void) {
    .set noreorder
    .set noat
    lw v0,-30320(gp)
    .word 0x70002e28
    addiu v1,zero,1
    addu v0,a0,v0
    lw a2,0(v0)
    b L23c9b0
    .word 0x70c03e28
L23c98c:
    lw v0,48(a3)
    bne v0,v1,L23c9a8
    addiu v0,a1,1
    andi v0,a1,0xff
    sll v0,v0,0x6
    b L23c9c0
    addu v0,a2,v0
L23c9a8:
    addiu a3,a3,64
    andi a1,v0,0xff
L23c9b0:
    andi v0,a1,0xff
    slti v0,v0,2
    bnez v0,L23c98c
    .word 0x70001628
L23c9c0:
    neg.s f0,f12
    swc1 f0,12(v0)
    jr ra
    .word 0x70801628
}
