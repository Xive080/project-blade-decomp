asm void *f(void *d, void *s, unsigned n) {
    .set noreorder
    daddu t0,a0,zero
    sltiu v0,a2,32
    bnez v0,L4
    daddu v1,t0,zero
    or v0,a1,t0
    andi v0,v0,0xf
    bnezl v0,L5
    addiu a2,a2,-1
    daddu a3,t0,zero
L1:
    lq v1,0(a1)
    addiu a2,a2,-32
    addiu a1,a1,16
    sltiu a0,a2,32
    sq v1,0(a3)
    addiu a3,a3,16
    lq v0,0(a1)
    addiu a1,a1,16
    sq v0,0(a3)
    beqz a0,L1
    addiu a3,a3,16
    sltiu v0,a2,8
    bnez v0,L4
    daddu v1,a3,zero
L2:
    ld v1,0(a1)
    addiu a2,a2,-8
    addiu a1,a1,8
    sltiu v0,a2,8
    sd v1,0(a3)
    beqz v0,L2
    addiu a3,a3,8
    daddu v1,a3,zero
L4:
    addiu a2,a2,-1
L5:
    addiu v0,zero,-1
    beq a2,v0,L7
    daddu a0,v0,zero
L6:
    lbu v0,0(a1)
    addiu a2,a2,-1
    addiu a1,a1,1
    sb v0,0(v1)
    nop
    bne a2,a0,L6
    addiu v1,v1,1
L7:
    jr ra
    daddu v0,t0,zero
}
