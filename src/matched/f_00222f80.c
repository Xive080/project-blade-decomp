asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-32
    b L223138
    .word 0x70001e28
L222f8c:
    lw t0,60(a2)
    lw t3,60(a0)
    lw a3,8(a1)
    addiu t2,a2,88
    addiu t4,a0,88
    mult1 t0,v1,t0
    addu t0,t2,t0
    mult t3,v1,t3
    lw t2,0(a3)
    addiu t1,zero,103
    lw t2,0(t2)
    bne t2,t1,L2230e8
    addu a3,t4,t3
    lw t2,60(a1)
    .word 0x3c0946ff
    ori t1,t1,0xfe00
    mtc1 t1,f1
    addiu t3,a1,88
    mult t1,v1,t2
    addu t3,t3,t1
    lwc1 f0,4(t3)
    swc1 f0,4(sp)
    lh t1,8(t3)
    mtc1 t1,f0
    nop
    cvt.s.w f0,f0
    div.s f0,f0,f1
    swc1 f0,8(sp)
    lh t1,10(t3)
    mtc1 t1,f0
    nop
    cvt.s.w f0,f0
    div.s f0,f0,f1
    swc1 f0,12(sp)
    lh t2,12(t3)
    bgez t2,L223028
    sra t1,t2,0x1
    addiu t1,t2,1
    sra t1,t1,0x1
L223028:
    mtc1 t1,f0
    nop
    cvt.s.w f2,f0
    .word 0x3c09467f
    ori t2,t1,0xfc00
    .word 0x3c093f80
    mtc1 t2,f0
    mtc1 t1,f1
    nop
    div.s f0,f2,f0
    swc1 f0,16(sp)
    lwc1 f4,8(sp)
    lwc1 f3,12(sp)
    lwc1 f2,16(sp)
    mtc1 zero,f0
    mul.s f4,f4,f4
    mul.s f3,f3,f3
    adda.s f4,f3
    madd.s f2,f2,f2
    sub.s f1,f1,f2
    c.lt.s f1,f0
    nop
    bc1f L223090
    nop
    b L2230a0
    mov.s f1,f0
L223090:
    nop
    nop
    .word 0x46010044
    nop
L2230a0:
    lh t1,12(t3)
    andi t1,t1,0x1
    beqz t1,L2230bc
    nop
    neg.s f0,f1
    b L2230c0
    swc1 f0,20(sp)
L2230bc:
    swc1 f1,20(sp)
L2230c0:
    addiu t1,sp,8
    .word 0xc5230000
    .word 0xc5220004
    .word 0xc5210008
    .word 0xc520000c
    swc1 f3,8(a3)
    swc1 f2,12(a3)
    swc1 f1,16(a3)
    b L223118
    swc1 f0,20(a3)
L2230e8:
    lw t1,60(a1)
    addiu t2,a1,88
    mult t1,v1,t1
    addu t1,t2,t1
    lwc1 f3,8(t1)
    lwc1 f2,12(t1)
    lwc1 f1,16(t1)
    lwc1 f0,20(t1)
    swc1 f3,8(a3)
    swc1 f2,12(a3)
    swc1 f1,16(a3)
    swc1 f0,20(a3)
L223118:
    lwc1 f2,8(t0)
    lwc1 f1,12(t0)
    lwc1 f0,16(t0)
    addiu v1,v1,1
    swc1 f2,24(a3)
    swc1 f1,28(a3)
    swc1 f0,32(a3)
    nop
L223138:
    lw a3,4(a0)
    slt a3,v1,a3
    bnez a3,L222f8c
    nop
    jr ra
    addiu sp,sp,32
}
