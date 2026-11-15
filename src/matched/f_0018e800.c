
asm void f(void) {
    .set noreorder
    addiu sp,sp,-64
    sq ra,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    lw a2,984(a0)
    paddub s0,a0,zero
    addiu a0,zero,4
    beq a2,a0,L18e840
    addiu v1,zero,2048
    addiu v1,zero,3
    beq a2,v1,L18e83c
    nop
    b L18e8e0
    nop
L18e83c:
    addiu v1,zero,2048
L18e840:
    beql a1,v1,L18e864
    addiu a1,zero,2
    addiu v1,zero,16384
    beq a1,v1,L18e860
    nop
    addiu v1,zero,4
    bne a1,v1,L18e870
    addiu v1,zero,4096
L18e860:
    addiu a1,zero,2
L18e864:
    b L18e88c
    lw v1,60(s0)
    addiu v1,zero,4096
L18e870:
    beql a1,v1,L18e888
    addiu a1,zero,64
    ori v1,zero,0x8000
    bne a1,v1,L18e888
    nop
    addiu a1,zero,64
L18e888:
    lw v1,60(s0)
L18e88c:
    beq v1,a1,L18e93c
    paddub s1,a1,zero
    lw v1,16(s0)
    andi v1,v1,0x2
    bnez v1,L18e93c
    nop
    lw v0,12(s0)
    paddub a0,s0,zero
    lw v0,16(v0)
    jalr ra,v0
    addiu s2,s0,12
    beqz v0,L18e93c
    nop
    lw v0,0(s2)
    paddub a0,s0,zero
    paddub a1,s1,zero
    lw v0,20(v0)
    jalr ra,v0
    paddub a2,zero,zero
    b L18e940
    lq ra,48(sp)
L18e8e0:
    bne a1,a0,L18e8ec
    nop
    addiu a1,zero,2
L18e8ec:
    lw v1,60(s0)
    beq v1,a1,L18e93c
    paddub s1,a1,zero
    lw v1,16(s0)
    andi v1,v1,0x2
    bnez v1,L18e93c
    nop
    lw v0,12(s0)
    paddub a0,s0,zero
    lw v0,16(v0)
    jalr ra,v0
    addiu s2,s0,12
    beqz v0,L18e93c
    nop
    lw v0,0(s2)
    paddub a0,s0,zero
    paddub a1,s1,zero
    lw v0,20(v0)
    jalr ra,v0
    paddub a2,zero,zero
L18e93c:
    lq ra,48(sp)
L18e940:
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,64
}
