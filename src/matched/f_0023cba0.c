asm void f(void) {
    .set noreorder
    .set noat
    lw v0,-30320(gp)
    .word 0x70003628
    addiu v1,zero,2
    addu v0,a0,v0
    lw a3,0(v0)
    b L23cbe0
    .word 0x70e04628
L23cbbc:
    lw v0,48(t0)
    bne v0,v1,L23cbd8
    addiu v0,a2,1
    andi v0,a2,0xff
    sll v0,v0,0x6
    b L23cbf0
    addu v0,a3,v0
L23cbd8:
    addiu t0,t0,64
    andi a2,v0,0xff
L23cbe0:
    andi v0,a2,0xff
    slti v0,v0,2
    bnez v0,L23cbbc
    .word 0x70001628
L23cbf0:
    sw a1,12(v0)
    jr ra
    .word 0x70801628
}
