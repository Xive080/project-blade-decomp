asm void f(void) {
    .set noreorder
    .set noat
    lw v0,-30320(gp)
    .word 0x70002e28
    addiu v1,zero,2
    addu v0,a0,v0
    lw a2,0(v0)
    b L23cc40
    .word 0x70c03e28
L23cc1c:
    lw v0,48(a3)
    bne v0,v1,L23cc38
    addiu v0,a1,1
    andi v0,a1,0xff
    sll v0,v0,0x6
    b L23cc50
    addu v0,a2,v0
L23cc38:
    addiu a3,a3,64
    andi a1,v0,0xff
L23cc40:
    andi v0,a1,0xff
    slti v0,v0,2
    bnez v0,L23cc1c
    .word 0x70001628
L23cc50:
    swc1 f12,8(v0)
    jr ra
    .word 0x70801628
}
