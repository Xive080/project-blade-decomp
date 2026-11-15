asm void f(void) {
    .set noreorder
    addiu sp,sp,-96
    sq ra,80(sp)
    sq s4,64(sp)
    sq s3,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    lw s1,16(a0)
    .word 0x70a09e28
    .word 0x7080a628
    sltu at,zero,s1
    beqz at,L2399b8
    .word 0x70008628
    .word 0x70009628
L239978:
    lw a0,20(s4)
    addiu v1,zero,1
    addu a3,a0,s2
    lw a0,0(a3)
    bnel a0,v1,L2399ac
    addiu s0,s0,1
    lw a2,12(a3)
    lw a1,8(a3)
    lw v0,16(a3)
    jalr ra,v0
    .word 0x72602628
    nop
    addiu s0,s0,1
L2399ac:
    sltu v1,s0,s1
    bnez v1,L239978
    addiu s2,s2,24
L2399b8:
    lq ra,80(sp)
    lq s4,64(sp)
    lq s3,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,96
}
