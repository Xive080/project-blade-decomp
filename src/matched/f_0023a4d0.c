extern void sub(void);
asm void first(void) {
    .set noreorder
    j sub
    addiu a0,a0,56
    nop
    nop
    addiu sp,sp,-64
    sq ra,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    paddub s2,a1,zero
    paddub s0,zero,zero
    b L2
    paddub s1,s2,zero
L1:
    lw a1,1560(s1)
    lw a2,1564(s1)
    lw a3,1568(s1)
    lw v0,1572(s1)
    jalr ra,v0
    lw a0,1576(s1)
    addiu s1,s1,20
    addiu s0,s0,1
    nop
L2:
    lw v1,1556(s2)
    sltu v1,s0,v1
    bnez v1,L1
    nop
    lq ra,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,64
}
