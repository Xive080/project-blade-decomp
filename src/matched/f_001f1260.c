asm void f(void) {
    .set noreorder
    .set noat
    .word 0x3c0b0033
    addiu t6,t3,-2320
    .word 0x3c0b0033
    addiu t7,t3,-2304
    lw t3,96(a0)
    lwc1 f0,128(a0)
    .word 0x3c080033
    addiu t4,t0,-2384
    .word 0x3c080033
    addiu t5,t0,-2368
    .word 0x3c030033
    .word 0xe5a0000c
    .word 0xe5a00008
    .word 0xe5a00004
    .word 0xe5a00000
    lwc1 f0,132(a0)
    .word 0x3c050033
    .word 0x3c060033
    .word 0x3c070033
    .word 0x3c080033
    .word 0x3c090033
    .word 0xe580000c
    .word 0xe5800008
    .word 0xe5800004
    .word 0xe5800000
    lwc1 f0,12(t3)
    .word 0x3c0a0033
    addiu v1,v1,-2528
    addiu a1,a1,-2512
    addiu a2,a2,-2496
    addiu a3,a3,-2480
    cvt.s.w f0,f0
    addiu t0,t0,-2352
    addiu t1,t1,-2336
    addiu t2,t2,-2288
    swc1 f0,0(t6)
    lwc1 f0,16(t3)
    cvt.s.w f0,f0
    swc1 f0,4(t6)
    lwc1 f0,140(a0)
    swc1 f0,8(t6)
    sw zero,12(t6)
    sw zero,0(t7)
    sw zero,4(t7)
    lwc1 f0,144(a0)
    swc1 f0,8(t7)
    sw zero,12(t7)
    lh t5,28(t3)
    lw t4,0(t3)
    addiu t6,t5,2048
    lw t5,12(t4)
    bgez t5,L1f133c
    sra t4,t5,0x1
    addiu t4,t5,1
    sra t4,t4,0x1
L1f133c:
    lw t5,12(t3)
    subu t6,t6,t4
    bgez t5,L1f1354
    sra t4,t5,0x1
    addiu t4,t5,1
    sra t4,t4,0x1
L1f1354:
    addu t4,t4,t6
    mtc1 t4,f0
    nop
    cvt.s.w f0,f0
    swc1 f0,0(t1)
    lh t5,30(t3)
    lw t4,0(t3)
    addiu t6,t5,2048
    lw t5,16(t4)
    bgez t5,L1f1388
    sra t4,t5,0x1
    addiu t4,t5,1
    sra t4,t4,0x1
L1f1388:
    lw t5,16(t3)
    subu t6,t6,t4
    bgez t5,L1f13a0
    sra t4,t5,0x1
    addiu t4,t5,1
    sra t4,t4,0x1
L1f13a0:
    addu t4,t4,t6
    mtc1 t4,f0
    nop
    cvt.s.w f0,f0
    swc1 f0,4(t1)
    sw zero,8(t1)
    sw zero,12(t1)
    lh t4,28(t3)
    lw t1,0(t3)
    addiu t5,t4,2048
    lw t4,12(t1)
    bgez t4,L1f13dc
    sra t1,t4,0x1
    addiu t1,t4,1
    sra t1,t1,0x1
L1f13dc:
    subu t1,t5,t1
    mtc1 t1,f0
    nop
    cvt.s.w f0,f0
    swc1 f0,0(t0)
    lh t4,30(t3)
    lw t1,0(t3)
    addiu t4,t4,2048
    lw t3,16(t1)
    bgez t3,L1f1410
    sra t1,t3,0x1
    addiu t1,t3,1
    sra t1,t1,0x1
L1f1410:
    subu t1,t4,t1
    mtc1 t1,f0
    nop
    cvt.s.w f0,f0
    swc1 f0,4(t0)
    sw zero,8(t0)
    sw zero,12(t0)
    lw t0,-30740(gp)
    beqz t0,L1f146c
    addiu t1,gp,-30744
    lwc1 f1,132(a0)
    .word 0x3c08c37f
    mtc1 t0,f0
    nop
    swc1 f1,12(t2)
    lwc1 f2,132(a0)
    lwc1 f1,136(a0)
    sub.s f1,f2,f1
    div.s f0,f0,f1
    nop
    nop
    b L1f1494
    swc1 f0,8(t2)
L1f146c:
    lwc1 f1,0(t1)
    .word 0x3c08c37f
    mtc1 t0,f0
    nop
    swc1 f1,12(t2)
    lwc1 f2,0(t1)
    lwc1 f1,136(a0)
    sub.s f1,f2,f1
    div.s f0,f0,f1
    swc1 f0,8(t2)
L1f1494:
    .word 0x3c083f80
    mtc1 t0,f3
    .word 0x3c0944ff
    addiu t0,gp,-31004
    .word 0x8d0b0000
    ori t2,t1,0xfdff
    lwc1 f1,132(a0)
    lwc1 f0,128(a0)
    mtc1 t2,f2
    addiu t1,zero,1
    lw t3,0(t3)
    sub.s f0,f1,f0
    sra t3,t3,0x1
    mtc1 t3,f1
    nop
    cvt.s.w f1,f1
    sub.s f1,f2,f1
    swc1 f1,0(v1)
    .word 0x8d0a0000
    lw t2,0(t2)
    sra t2,t2,0x1
    mtc1 t2,f1
    nop
    cvt.s.w f1,f1
    sub.s f1,f2,f1
    div.s f1,f3,f1
    swc1 f1,4(v1)
    lwc1 f1,132(a0)
    swc1 f1,12(v1)
    .word 0x8d0a0000
    lw t2,4(t2)
    sra t2,t2,0x1
    mtc1 t2,f1
    nop
    cvt.s.w f1,f1
    sub.s f1,f2,f1
    swc1 f1,0(a1)
    .word 0x8d0a0000
    lw t2,4(t2)
    sra t2,t2,0x1
    mtc1 t2,f1
    nop
    cvt.s.w f1,f1
    sub.s f1,f2,f1
    div.s f1,f3,f1
    swc1 f1,4(a1)
    lwc1 f1,128(a0)
    swc1 f1,12(a1)
    .word 0x8d0a0000
    lw t2,0(t2)
    sra t2,t2,0x1
    addiu t2,t2,5
    mtc1 t2,f1
    nop
    cvt.s.w f1,f1
    swc1 f1,0(a2)
    .word 0x8d0a0000
    lw t2,0(t2)
    sra t2,t2,0x1
    addiu t2,t2,5
    mtc1 t2,f1
    nop
    cvt.s.w f1,f1
    div.s f1,f3,f1
    swc1 f1,4(a2)
    lwc1 f1,132(a0)
    swc1 f1,12(a2)
    .word 0x8d0a0000
    lw t2,4(t2)
    sra t2,t2,0x1
    addiu t2,t2,5
    mtc1 t2,f1
    nop
    cvt.s.w f1,f1
    swc1 f1,0(a3)
    .word 0x8d080000
    .word 0x8d080004
    sra t0,t0,0x1
    addiu t0,t0,5
    mtc1 t0,f1
    nop
    cvt.s.w f1,f1
    div.s f1,f3,f1
    swc1 f1,4(a3)
    lwc1 f1,128(a0)
    swc1 f1,12(a3)
    lw t0,20(a0)
    bne t0,t1,L1f1644
    div.s f0,f3,f0
    lwc1 f2,132(a0)
    .word 0x3c08c000
    mtc1 t0,f3
    lwc1 f1,128(a0)
    mul.s f2,f3,f2
    mul.s f1,f2,f1
    mul.s f1,f0,f1
    swc1 f1,8(a2)
    swc1 f1,8(v1)
    lwc1 f2,132(a0)
    lwc1 f1,128(a0)
    add.s f1,f2,f1
    mul.s f0,f0,f1
    swc1 f0,8(a3)
    swc1 f0,8(a1)
    lbu v1,-30772(gp)
    andi v1,v1,0xf7
    b L1f1684
    sb v1,-30772(gp)
L1f1644:
    lwc1 f4,132(a0)
    lwc1 f3,128(a0)
    neg.s f2,f0
    .word 0x3c044000
    mtc1 a0,f1
    nop
    mul.s f0,f1,f0
    add.s f1,f4,f3
    mul.s f1,f2,f1
    swc1 f1,8(a2)
    swc1 f1,8(v1)
    swc1 f0,8(a3)
    swc1 f0,8(a1)
    lbu v1,-30772(gp)
    ori v1,v1,0x8
    sb v1,-30772(gp)
L1f1684:
    jr ra
    nop
}
