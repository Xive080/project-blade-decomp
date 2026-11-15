extern void F1e9f90(void);
asm void f(void) {
    .set noreorder
    addiu sp,sp,-48
    sq ra,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    lw v1,8(a0)
    paddub s0,a1,zero
    lw a3,0(a0)
    paddub s1,a0,zero
    addiu v0,zero,-16
    lw a1,4(v1)
    addiu a0,s0,15
    and s0,a0,v0
    addu a0,a1,s0
    sltu at,a3,a0
    bnez at,L1ea0e0
    sltu at,a3,s0
    lw v0,24(s1)
    bne v0,a2,L1ea0e0
    nop
    lw v0,12(v1)
    sw a0,4(v1)
    lw a0,8(v1)
    addu v0,v0,a1
    addiu a0,a0,1
    sw a0,8(v1)
    sw v0,16(s1)
    b L1ea1b4
    sw s0,20(s1)
L1ea0e0:
    bnez at,L1ea1b4
    paddub v0,zero,zero
    lw v0,24(s1)
    addiu a0,zero,63
    xor v0,a2,v0
    movz a0,zero,v0
    addu v0,a1,a0
    nor a0,a0,zero
    and v0,a0,v0
    sw v0,4(v1)
    sw a2,24(s1)
    lw a0,4(v1)
    lw v0,0(s1)
    addu a0,a0,s0
    sltu at,v0,a0
    beqz at,L1ea18c
    nop
    lw v1,0(v1)
    lw v0,8(v1)
    beqz v0,L1ea180
    nop
    lw v0,32(s1)
    bnez v0,L1ea178
    paddub v0,zero,zero
    jal F1e9f90
    paddub a0,s1,zero
    beqz v0,L1ea16c
    paddub a0,zero,zero
    lw v1,8(s1)
    addiu a0,zero,1
    lw v1,0(v1)
    sw v1,0(v0)
    lw v1,8(s1)
    sw v0,0(v1)
    sw v0,8(s1)
L1ea16c:
    bnez a0,L1ea184
    nop
    paddub v0,zero,zero
L1ea178:
    b L1ea1b8
    lq ra,32(sp)
L1ea180:
    sw v1,8(s1)
L1ea184:
    lw v1,8(s1)
    nop
L1ea18c:
    lw v0,12(v1)
    lw a0,4(v1)
    addu v0,v0,a0
    addu a0,a0,s0
    sw a0,4(v1)
    lw a0,8(v1)
    addiu a0,a0,1
    sw a0,8(v1)
    sw v0,16(s1)
    sw s0,20(s1)
L1ea1b4:
    lq ra,32(sp)
L1ea1b8:
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,48
}
