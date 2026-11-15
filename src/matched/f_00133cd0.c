extern void func_00134fd0(void);
extern void func_00149e60(void);
extern void func_001c3b70(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    sq ra,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    sw a1,112(a0)
    sw a2,116(a0)
    swc1 f12,148(a0)
    addiu v0,zero,1
    sw zero,152(a0)
    sw v0,180(a0)
    lw a2,0(a0)
    .word 0x3c020030
    addiu v1,v0,27988
    .word 0x3c020030
    addiu v0,v0,27984
    sll a1,a2,0x3
    subu a1,a1,a2
    sll a1,a1,0x6
    addu v1,v1,a1
    addu v0,v0,a1
    lwc1 f1,0(v1)
    lwc1 f0,0(v0)
    .word 0x3c050002
    .word 0x3c03c220
    sub.s f0,f1,f0
    .word 0x3c024422
    ori a2,v0,0x8000
    .word 0x3c02fffe
    swc1 f0,196(a0)
    sw zero,156(a0)
    sw a2,160(a0)
    sw v1,164(a0)
    lw a2,8(a0)
    ori v0,v0,0xfff
    lw v1,16(a2)
    and v0,v1,v0
    sw v0,16(a2)
    lw s1,8(a0)
    lw v0,60(s1)
    beq v0,a1,L133db4
    .word 0x70808628
    lw v0,16(s1)
    andi v0,v0,0x2
    bnez v0,L133db4
    nop
    lw v0,12(s1)
    lw v0,16(v0)
    jalr ra,v0
    .word 0x72202628
    beqz v0,L133db4
    nop
    lw v0,12(s1)
    .word 0x72202628
    .word 0x3c050002
    lw v0,20(v0)
    jalr ra,v0
    .word 0x70003628
L133db4:
    lw a1,112(s0)
    beqz a1,L133f10
    .word 0x72002628
    addiu a0,zero,1
    b L133dd8
    sw zero,152(s0)
L133dcc:
    lw v0,152(s0)
    addiu v0,v0,1
    sw v0,152(s0)
L133dd8:
    lw a2,152(s0)
    slti at,a2,4
    beqz at,L133e04
    addiu v0,zero,4
    lw v0,208(a1)
    sllv v1,a0,a2
    and v0,v0,v1
    beqz v0,L133dcc
    nop
    nop
    addiu v0,zero,4
L133e04:
    bne a2,v0,L133f0c
    nop
    jal func_00149e60
    nop
    lw v0,24(v0)
    jalr ra,v0
    lw a0,8(s0)
    jal func_001c3b70
    .word 0x70402628
    lw a0,112(s0)
    .word 0x70408e28
    lw v0,12(a0)
    lw v0,24(v0)
    jalr ra,v0
    nop
    jal func_001c3b70
    .word 0x70402628
    lwc1 f7,32(s1)
    lwc1 f0,32(v0)
    lwc1 f2,0(v0)
    lwc1 f6,36(s1)
    lwc1 f4,36(v0)
    lwc1 f1,4(v0)
    lwc1 f8,40(s1)
    mul.s f5,f0,f7
    lwc1 f3,40(v0)
    mul.s f4,f4,f6
    lwc1 f0,8(v0)
    adda.s f5,f4
    mul.s f2,f2,f7
    .word 0x3c023f35
    ori v0,v0,0x4f3
    mul.s f1,f1,f6
    madd.s f3,f3,f8
    adda.s f2,f1
    madd.s f1,f0,f8
    mtc1 v0,f0
    nop
    c.le.s f3,f0
    nop
    bc1t L133eb8
    .word 0x3c02bf35
    b L133f0c
    sw zero,152(s0)
    .word 0x3c02bf35
L133eb8:
    ori v0,v0,0x4f3
    mtc1 v0,f0
    nop
    c.lt.s f3,f0
    nop
    bc1f L133ee0
    nop
    addiu v0,zero,2
    b L133f0c
    sw v0,152(s0)
L133ee0:
    mtc1 zero,f0
    nop
    c.le.s f1,f0
    nop
    bc1t L133f08
    addiu v0,zero,3
    addiu v0,zero,1
    b L133f0c
    sw v0,152(s0)
    addiu v0,zero,3
L133f08:
    sw v0,152(s0)
L133f0c:
    .word 0x72002628
L133f10:
    jal func_00134fd0
    nop
    lq ra,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    addiu v0,zero,1
    jr ra
    addiu sp,sp,48
}
