extern void func_0015aa50(void);
extern void func_001f79f0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-304
    sq ra,176(sp)
    sq s8,160(sp)
    sq s7,144(sp)
    sq s6,128(sp)
    sq s5,112(sp)
    sq s4,96(sp)
    sq s3,80(sp)
    sq s2,64(sp)
    sq s1,48(sp)
    sq s0,32(sp)
    swc1 f27,28(sp)
    swc1 f26,24(sp)
    swc1 f25,20(sp)
    swc1 f24,16(sp)
    swc1 f23,12(sp)
    swc1 f22,8(sp)
    swc1 f21,4(sp)
    .word 0x7080f628
    bnez s8,L15a29c
    swc1 f20,0(sp)
    .word 0x3c020030
    addiu s8,v0,15952
L15a29c:
    .word 0x3c02471c
    ori v0,v0,0x4000
    sw v0,7872(s8)
    lw a3,7892(s8)
    beqz a3,L15a2c4
    .word 0x70001628
    lw v0,16(s8)
    bnez v0,L15a2d0
    .word 0x3c034000
    .word 0x70001628
L15a2c4:
    .word 0x100001cd
    lq ra,176(sp)
    .word 0x3c034000
L15a2d0:
    mtc1 v1,f1
    lwc1 f24,388(s8)
    mtc1 zero,f0
    .word 0x3c033f80
    .word 0x44832000
    .word 0x70002e28
    .word 0x70003628
    b L15a420
    mov.s f5,f0
L15a2f4:
    lw v1,7900(s8)
    lwc1 f8,7860(s8)
    lwc1 f9,7864(s8)
    lwc1 f10,7868(s8)
    lwc1 f11,7872(s8)
    addu a0,v1,a2
    lw t1,16(a0)
    lw t0,12(a0)
    addiu v1,t1,1
    lwc1 f3,0(t0)
    mtc1 v1,f6
    lwc1 f2,4(t0)
    cvt.s.w f7,f6
    lwc1 f6,8(t0)
    sub.s f3,f3,f8
    sub.s f2,f2,f9
    mul.s f3,f3,f3
    mul.s f2,f2,f2
    adda.s f3,f2
    sub.s f2,f6,f10
    madd.s f2,f2,f2
    c.lt.s f2,f11
    nop
    bc1f L15a360
    div.s f7,f7,f1
    b L15a3b0
    addiu v1,zero,1
L15a360:
    lw v1,8(a0)
    sll v1,v1,0x5
    addu v1,t0,v1
    lwc1 f6,-32(v1)
    lwc1 f3,-28(v1)
    lwc1 f2,-24(v1)
    sub.s f6,f6,f8
    sub.s f8,f3,f9
    sub.s f9,f2,f10
    mul.s f3,f6,f6
    mul.s f2,f8,f8
    adda.s f3,f2
    madd.s f2,f9,f9
    c.lt.s f2,f11
    nop
    bc1f L15a3b0
    .word 0x70001e28
    b L15a3b0
    addiu v1,zero,1
    .word 0x70001e28
L15a3b0:
    beqzl v1,L15a41c
    addiu a2,a2,68
    lw v1,8(a0)
    addiu v1,v1,-1
    sll v1,v1,0x5
    addu v1,t0,v1
    lwc1 f2,28(v1)
    lwc1 f8,24(v1)
    sub.s f6,f2,f8
    c.eq.s f5,f6
    nop
    bc1f L15a3f0
    mul.s f2,f1,f7
    b L15a414
    add.s f0,f0,f8
    mul.s f2,f1,f7
L15a3f0:
    sll v1,t1,0x1
    sub.s f3,f2,f4
    mtc1 v1,f2
    nop
    cvt.s.w f2,f2
    div.s f2,f3,f2
    mul.s f2,f2,f6
    add.s f8,f8,f2
    add.s f0,f0,f8
L15a414:
    nop
    addiu a2,a2,68
L15a41c:
    addiu a1,a1,1
L15a420:
    slt v1,a1,a3
    bnez v1,L15a2f4
    nop
    .word 0x70002e28
    .word 0x70002628
    b L15a458
    .word 0x73c03628
L15a43c:
    lw v1,20(a2)
    bnezl v1,L15a454
    addiu a2,a2,380
    addiu a1,a1,1
    nop
    addiu a2,a2,380
L15a454:
    addiu a0,a0,1
L15a458:
    slt v1,a0,v0
    bnez v1,L15a43c
    nop
    bnez a1,L15a478
    .word 0x3c033fc0
    .word 0x10000162
    .word 0x70001628
    .word 0x3c033fc0
L15a478:
    mtc1 v1,f1
    .word 0x70008e28
    subu v1,v0,a1
    mtc1 v1,f2
    mul.s f27,f1,f24
    .word 0x73c02628
    cvt.s.w f2,f2
    mul.s f2,f27,f2
    mtc1 a1,f1
    nop
    sub.s f0,f0,f2
    cvt.s.w f1,f1
    div.s f20,f0,f1
L15a4ac:
    addiu v1,a0,20
    sw v1,240(sp)
    lw v1,20(a0)
    beqzl v1,L15a4d4
    addiu v0,zero,1
    addiu s1,s1,1
    slt v1,s1,v0
    bnez v1,L15a4ac
    addiu a0,a0,380
    addiu v0,zero,1
L15a4d4:
    sw v0,208(sp)
    sll v0,s1,0x1
    addu v0,v0,s1
    sll v0,v0,0x5
    subu v0,v0,s1
    sll v0,v0,0x2
    addu s7,s8,v0
    .word 0x3c02bfc0
    mtc1 v0,f0
    sw zero,272(sp)
    mul.s f26,f0,f24
    .word 0x10000137
    sw zero,256(sp)
    .word 0x3c024000
L15a50c:
    mtc1 v0,f8
    lw v1,7900(s8)
    lw v0,256(sp)
    lwc1 f4,7860(s8)
    lwc1 f5,7864(s8)
    lwc1 f6,7868(s8)
    lwc1 f7,7872(s8)
    addu s6,v1,v0
    lw a0,16(s6)
    lw v1,12(s6)
    lw s2,32(s6)
    addiu s3,s6,28
    addiu v0,a0,1
    lwc1 f2,0(v1)
    mtc1 v0,f0
    lwc1 f1,4(v1)
    cvt.s.w f0,f0
    lwc1 f3,8(v1)
    sub.s f2,f2,f4
    sub.s f1,f1,f5
    mul.s f2,f2,f2
    mul.s f1,f1,f1
    adda.s f2,f1
    sub.s f1,f3,f6
    madd.s f1,f1,f1
    c.lt.s f1,f7
    nop
    bc1f L15a588
    div.s f0,f0,f8
    b L15a5d8
    addiu v0,zero,1
L15a588:
    lw v0,8(s6)
    sll v0,v0,0x5
    addu v0,v1,v0
    lwc1 f3,-32(v0)
    lwc1 f2,-28(v0)
    lwc1 f1,-24(v0)
    sub.s f3,f3,f4
    sub.s f4,f2,f5
    sub.s f5,f1,f6
    mul.s f2,f3,f3
    mul.s f1,f4,f4
    adda.s f2,f1
    madd.s f1,f5,f5
    c.lt.s f1,f7
    nop
    bc1f L15a5d8
    .word 0x70001628
    b L15a5d8
    addiu v0,zero,1
    .word 0x70001628
L15a5d8:
    .word 0x104000fb
    nop
    lw v0,8(s6)
    mtc1 zero,f1
    addiu v0,v0,-1
    sll v0,v0,0x5
    addu v0,v1,v0
    lwc1 f2,28(v0)
    lwc1 f5,24(v0)
    sub.s f4,f2,f5
    c.eq.s f1,f4
    nop
    bc1f L15a61c
    sll v0,a0,0x1
    .word 0x1000000f
    div.s f1,f5,f20
    sll v0,a0,0x1
L15a61c:
    mtc1 v0,f1
    .word 0x3c024000
    .word 0x44821000
    cvt.s.w f1,f1
    .word 0x3c023f80
    mul.s f3,f2,f0
    mtc1 v0,f2
    nop
    sub.s f2,f3,f2
    div.s f1,f2,f1
    mul.s f1,f1,f4
    add.s f5,f5,f1
    div.s f1,f5,f20
    .word 0x46000864
    mfc1 v0,f1
    mtc1 zero,f22
    sw v0,192(sp)
    lw v0,192(sp)
    bgtz v0,L15a670
    addiu s0,zero,1
    sw s0,192(sp)
L15a670:
    lw v0,192(sp)
    mtc1 zero,f1
    addiu v0,v0,1
    mtc1 v0,f2
    nop
    cvt.s.w f3,f2
    .word 0x3c023f00
    .word 0x44821000
    nop
    add.s f2,f2,f3
    div.s f21,f5,f2
    nop
    sub.s f23,f21,f24
    c.lt.s f23,f1
    nop
    bc1f L15a6b8
    nop
    mov.s f23,f1
L15a6b8:
    lw v0,192(sp)
    addiu v0,v0,1
    slt at,zero,v0
    .word 0x102000c0
    sw zero,288(sp)
    .word 0x3c024000
    mtc1 v0,f1
    addiu s5,zero,32
    mul.s f0,f1,f0
    .word 0x3c023f80
    .word 0x72e0a628
    .word 0x44820800
    nop
    sub.s f25,f0,f1
L15a6f0:
    lw v0,8(s6)
    lw a3,12(s6)
    sll v1,s0,0x5
    .word 0x72002628
    addiu a2,v0,-1
    addu a1,a3,v1
    mtc1 zero,f1
    addiu a1,a1,32
L15a710:
    lwc1 f0,28(a1)
    lwc1 f3,24(a1)
    addiu a0,a0,1
    sub.s f2,f0,f3
    c.eq.s f1,f2
    nop
    bc1f L15a738
    .word 0x70001e28
    b L15a758
    nop
L15a738:
    lw v0,16(s6)
    sll v0,v0,0x1
    mtc1 v0,f0
    nop
    cvt.s.w f0,f0
    div.s f0,f25,f0
    mul.s f0,f0,f2
    add.s f3,f3,f0
L15a758:
    bne a0,a2,L15a768
    nop
    b L15a820
    addiu v1,zero,1
L15a768:
    c.lt.s f3,f23
    nop
    bc1t L15a808
    nop
    beq s2,s3,L15a808
    nop
L15a780:
    lw v0,-12(s2)
    sll v0,v0,0x5
    addu v0,a3,v0
    lwc1 f0,28(v0)
    lwc1 f4,24(v0)
    sub.s f2,f0,f4
    c.eq.s f1,f2
    nop
    bc1f L15a7b0
    nop
    b L15a7d4
    sub.s f0,f4,f23
L15a7b0:
    lw v0,16(s6)
    sll v0,v0,0x1
    mtc1 v0,f0
    nop
    cvt.s.w f0,f0
    div.s f0,f25,f0
    mul.s f0,f0,f2
    add.s f4,f4,f0
    sub.s f0,f4,f23
L15a7d4:
    c.lt.s f0,f27
    nop
    bc1f L15a7fc
    nop
    c.lt.s f0,f26
    nop
    bc1t L15a7fc
    nop
    b L15a808
    addiu v1,zero,1
L15a7fc:
    lw s2,0(s2)
    bne s2,s3,L15a780
    nop
L15a808:
    c.lt.s f3,f23
    nop
    bc1f L15a820
    nop
    bnezl v1,L15a710
    addiu a1,a1,32
L15a820:
    .word 0x14600026
    .word 0x72801e28
    addiu v0,a0,-1
    subu v0,v0,s0
    sw v0,224(sp)
    lw v0,224(sp)
    slti at,v0,2
    .word 0x1420000b
    .word 0x72003e28
    jal func_001f79f0
    nop
    lw v1,224(sp)
    .word 0x0043001b
    .word 0x00000000
    .word 0x00000000
    mfhi v0
    b L15a870
    addu a3,s0,v0
    .word 0x72003e28
    nop
L15a870:
    lw v0,20(s6)
    beqz v0,L15a890
    nop
    lw v0,208(sp)
    sltu v0,zero,v0
    xori v0,v0,0x1
    b L15a898
    sw v0,208(sp)
L15a890:
    sw zero,208(sp)
    nop
L15a898:
    lw a1,240(sp)
    lw t0,208(sp)
    .word 0x3c023f80
    mtc1 v0,f12
    .word 0x73c02628
    jal func_0015aa50
    .word 0x72c03628
    nop
    .word 0x72801e28
    nop
L15a8c0:
    addiu v0,v1,20
    sw v0,240(sp)
    lw v0,20(v1)
    beqz v0,L15a8f0
    nop
    lw v0,16(s8)
    addiu s1,s1,1
    addiu v1,v1,380
    addiu s4,s4,380
    slt v0,s1,v0
    bnez v0,L15a8c0
    addiu s7,s7,380
L15a8f0:
    lw v0,16(s8)
    slt v0,s1,v0
    bnez v0,L15a908
    nop
    b L15a9f8
    addiu v0,zero,1
L15a908:
    lw v0,8(s6)
    add.s f22,f22,f21
    .word 0x72a01e28
    add.s f23,f23,f21
    addiu a0,v0,-1
    nop
    mtc1 zero,f1
    addiu s0,s0,1
L15a928:
    addiu v1,v1,32
    slt at,s0,a0
    beqz at,L15a998
    addiu s5,s5,32
    lw v0,12(s6)
    addu v0,v0,v1
    lwc1 f0,28(v0)
    lwc1 f3,24(v0)
    sub.s f2,f0,f3
    c.eq.s f1,f2
    nop
    bc1f L15a964
    nop
    b L15a984
    nop
L15a964:
    lw v0,16(s6)
    sll v0,v0,0x1
    mtc1 v0,f0
    nop
    cvt.s.w f0,f0
    div.s f0,f25,f0
    mul.s f0,f0,f2
    add.s f3,f3,f0
L15a984:
    c.lt.s f3,f22
    nop
    bc1tl L15a928
    addiu s0,s0,1
    nop
L15a998:
    slt at,s0,a0
    beqz at,L15a9c8
    nop
    lw v0,288(sp)
    addiu v0,v0,1
    sw v0,288(sp)
    lw v0,192(sp)
    addiu v1,v0,1
    lw v0,288(sp)
    slt v0,v0,v1
    bnez v0,L15a6f0
    nop
L15a9c8:
    lw v0,256(sp)
    addiu v0,v0,68
    sw v0,256(sp)
    lw v0,272(sp)
    addiu v0,v0,1
    sw v0,272(sp)
    lw v1,7892(s8)
    lw v0,272(sp)
    slt v0,v0,v1
    bnez v0,L15a50c
    .word 0x3c024000
    addiu v0,zero,1
L15a9f8:
    lq ra,176(sp)
    lq s8,160(sp)
    lq s7,144(sp)
    lq s6,128(sp)
    lq s5,112(sp)
    lq s4,96(sp)
    lq s3,80(sp)
    lq s2,64(sp)
    lq s1,48(sp)
    lq s0,32(sp)
    lwc1 f27,28(sp)
    lwc1 f26,24(sp)
    lwc1 f25,20(sp)
    lwc1 f24,16(sp)
    lwc1 f23,12(sp)
    lwc1 f22,8(sp)
    lwc1 f21,4(sp)
    lwc1 f20,0(sp)
    jr ra
    addiu sp,sp,304
}
