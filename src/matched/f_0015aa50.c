extern void func_00141c60(void);
extern void func_0015bdc0(void);
extern void func_00169860(void);
extern void func_0016a700(void);
extern void func_001f79f0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    sq ra,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    swc1 f12,68(a1)
    swc1 f12,60(a1)
    swc1 f12,76(a1)
    sltu v0,zero,t0
    sw zero,356(a1)
    xori t1,v0,0x1
    sw t1,320(a1)
    sw zero,8(a1)
    sw zero,20(a1)
    sw zero,92(a1)
    lw v0,320(a1)
    .word 0x70808628
    beqz v0,L15aaa4
    .word 0x70a08e28
    b L15aaac
    sw zero,332(s1)
L15aaa4:
    .word 0x3c023f80
    sw v0,332(s1)
L15aaac:
    lw a0,32(a2)
    addiu v1,a2,28
    beq a0,v1,L15aae0
    .word 0x70602e28
L15aabc:
    lw v0,-12(a0)
    slt at,v0,a3
    beqz at,L15aae0
    nop
    .word 0x70802e28
    lw a0,0(a0)
    bne a0,v1,L15aabc
    nop
    nop
L15aae0:
    bne a1,v1,L15aaf4
    addiu v0,a1,-336
    b L15aaf4
    .word 0x70001628
    addiu v0,a1,-336
L15aaf4:
    lwc1 f12,68(s1)
    lw t0,7876(s0)
    .word 0x70c02628
    .word 0x70e03628
    addiu t2,zero,1
    .word 0x72202e28
    jal func_00141c60
    .word 0x70403e28
    .word 0x72002628
    jal func_0015bdc0
    .word 0x72202e28
    lw t0,320(s1)
    beqz t0,L15ab34
    nop
    b L15ab3c
    lw a3,324(s1)
L15ab34:
    lw v0,324(s1)
    addiu a3,v0,-1
L15ab3c:
    lwc1 f13,72(s1)
    lw a2,228(s1)
    mtc1 zero,f12
    addiu a0,s1,24
    addiu t1,zero,2
    mov.s f14,f13
    addiu t2,s1,96
    jal func_00169860
    .word 0x70002e28
    lw s2,4(s1)
    addiu a1,zero,4
    lw v0,60(s2)
    beq v0,a1,L15abb4
    nop
    lw v0,16(s2)
    andi v0,v0,0x2
    bnez v0,L15abb4
    nop
    lw v0,12(s2)
    lw v0,16(v0)
    jalr ra,v0
    .word 0x72402628
    beqz v0,L15abb4
    nop
    lw v0,12(s2)
    addiu a1,zero,4
    .word 0x72402628
    lw v0,20(v0)
    jalr ra,v0
    .word 0x70003628
L15abb4:
    sw zero,12(s1)
    lw v1,12(s1)
    mtc1 zero,f0
    sll v0,v1,0x4
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s0,v0
    lwc1 f1,7632(v0)
    c.le.s f1,f0
    nop
    bc1t L15ac9c
    addiu s0,v0,7620
    jal func_001f79f0
    nop
    andi v0,v0,0x7fff
    bltz v0,L15ac08
    srl v1,v0,0x1
    mtc1 v0,f0
    b L15ac20
    cvt.s.w f0,f0
    srl v1,v0,0x1
L15ac08:
    andi v0,v0,0x1
    or v1,v1,v0
    mtc1 v1,f0
    nop
    cvt.s.w f0,f0
    add.s f0,f0,f0
L15ac20:
    .word 0x3c024700
    mtc1 v0,f1
    lwc1 f2,24(s0)
    div.s f1,f0,f1
    lwc1 f0,28(s0)
    sub.s f0,f0,f2
    mul.s f0,f1,f0
    add.s f0,f2,f0
    jal func_001f79f0
    swc1 f0,348(s1)
    andi v0,v0,0x7fff
    bltz v0,L15ac60
    lwc1 f3,32(s0)
    mtc1 v0,f0
    b L15ac7c
    cvt.s.w f2,f0
L15ac60:
    srl v1,v0,0x1
    andi v0,v0,0x1
    or v1,v1,v0
    mtc1 v1,f0
    nop
    cvt.s.w f2,f0
    add.s f2,f2,f2
L15ac7c:
    .word 0x3c024700
    mtc1 v0,f1
    lwc1 f0,36(s0)
    div.s f1,f2,f1
    sub.s f0,f0,f3
    mul.s f0,f1,f0
    add.s f0,f3,f0
    swc1 f0,344(s1)
L15ac9c:
    lwc1 f12,160(s1)
    addiu a0,s1,96
    addiu a1,s1,24
    jal func_0016a700
    addiu a2,s1,36
    lwc1 f1,44(s1)
    lwc1 f0,40(s1)
    .word 0x3c023f80
    mtc1 v0,f3
    mtc1 zero,f2
    addiu a1,s1,24
    mula.s f3,f1
    msub.s f0,f2,f0
    swc1 f0,48(s1)
    lwc1 f1,36(s1)
    lwc1 f0,44(s1)
    addiu a2,s1,36
    addiu a3,s1,48
    mula.s f2,f1
    msub.s f0,f2,f0
    swc1 f0,52(s1)
    lwc1 f1,40(s1)
    lwc1 f0,36(s1)
    mula.s f2,f1
    msub.s f0,f3,f0
    swc1 f0,56(s1)
    lw a0,4(s1)
    lw v0,12(a0)
    lw v0,44(v0)
    jalr ra,v0
    addiu t0,zero,1
    lq ra,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    addiu v0,zero,1
    jr ra
    addiu sp,sp,64
}
