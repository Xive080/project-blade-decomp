extern void func_0011a620(void);
extern void func_001c3b70(void);
extern void func_001c7610(void);
extern void func_001ce160(void);
extern void func_001ce240(void);
extern void func_001ce410(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-272
    sq ra,160(sp)
    sq s7,144(sp)
    sq s6,128(sp)
    sq s5,112(sp)
    sq s4,96(sp)
    sq s3,80(sp)
    sq s2,64(sp)
    sq s1,48(sp)
    sq s0,32(sp)
    swc1 f26,24(sp)
    swc1 f25,20(sp)
    swc1 f24,16(sp)
    swc1 f23,12(sp)
    swc1 f22,8(sp)
    swc1 f21,4(sp)
    swc1 f20,0(sp)
    .word 0x7080b628
    jal func_001c3b70
    lw a0,104(a0)
    lw a0,140(s6)
    .word 0x70408628
    lw v0,12(a0)
    lw v0,24(v0)
    jalr ra,v0
    nop
    addiu s1,v0,80
    lw v0,144(s6)
    beqz v0,L166434
    addiu s2,s1,48
    b L166434
    addiu s2,v0,128
    addiu s2,s1,48
L166434:
    lwc1 f1,232(s6)
    lwc1 f0,16(s1)
    addiu v0,sp,180
    addiu v1,sp,184
    addiu s3,sp,196
    mul.s f0,f0,f1
    addiu s4,sp,200
    addiu a0,sp,192
    swc1 f0,176(sp)
    lwc1 f0,20(s1)
    mul.s f0,f0,f1
    .word 0xe4400000
    lwc1 f0,24(s1)
    mul.s f0,f0,f1
    .word 0xe4600000
    lwc1 f1,176(sp)
    lwc1 f0,0(s2)
    add.s f0,f1,f0
    swc1 f0,176(sp)
    .word 0xc4410000
    lwc1 f0,4(s2)
    add.s f0,f1,f0
    .word 0xe4400000
    .word 0xc4610000
    lwc1 f0,8(s2)
    add.s f0,f1,f0
    .word 0xe4600000
    lwc1 f1,48(s0)
    lwc1 f0,176(sp)
    sub.s f0,f1,f0
    swc1 f0,192(sp)
    .word 0xc4550000
    lwc1 f0,52(s0)
    sub.s f0,f0,f21
    .word 0xe6600000
    .word 0xc4760000
    lwc1 f0,56(s0)
    sub.s f0,f0,f22
    jal func_001ce240
    .word 0xe6800000
    lw v0,16(s6)
    andi v0,v0,0x40
    beqz v0,L166640
    mov.s f20,f0
    lwc1 f4,16(s1)
    lwc1 f2,192(sp)
    lwc1 f5,20(s1)
    lwc1 f1,0(s3)
    lwc1 f6,24(s1)
    lwc1 f0,0(s4)
    mtc1 zero,f7
    mul.s f2,f2,f4
    mul.s f1,f1,f5
    adda.s f2,f1
    madd.s f3,f0,f6
    c.le.s f3,f7
    nop
    bc1t L1665ac
    neg.s f0,f7
    .word 0x3c017000
    lwc1 f1,16296(at)
    .word 0x3c02c120
    mtc1 v0,f0
    sub.s f3,f3,f7
    mul.s f0,f0,f1
    c.lt.s f3,f0
    nop
    bc1f L166554
    .word 0x3c024120
    b L166574
    mov.s f3,f0
    .word 0x3c024120
L166554:
    mtc1 v0,f0
    nop
    mul.s f0,f0,f1
    c.le.s f3,f0
    nop
    bc1t L166574
    nop
    mov.s f3,f0
L166574:
    lwc1 f0,192(sp)
    mul.s f2,f4,f3
    sub.s f0,f0,f2
    swc1 f0,192(sp)
    lwc1 f2,0(s3)
    mul.s f1,f5,f3
    sub.s f1,f2,f1
    swc1 f1,0(s3)
    lwc1 f1,0(s4)
    mul.s f0,f6,f3
    sub.s f0,f1,f0
    b L166640
    swc1 f0,0(s4)
    neg.s f0,f7
L1665ac:
    c.lt.s f3,f0
    nop
    bc1f L166644
    addiu a0,sp,192
    .word 0x3c017000
    lwc1 f1,16296(at)
    .word 0x3c02c120
    mtc1 v0,f0
    add.s f3,f3,f7
    mul.s f0,f0,f1
    c.lt.s f3,f0
    nop
    bc1f L1665f0
    .word 0x3c024120
    b L166610
    mov.s f3,f0
    .word 0x3c024120
L1665f0:
    mtc1 v0,f0
    nop
    mul.s f0,f0,f1
    c.le.s f3,f0
    nop
    bc1t L166610
    nop
    mov.s f3,f0
L166610:
    lwc1 f0,192(sp)
    mul.s f2,f4,f3
    sub.s f0,f0,f2
    swc1 f0,192(sp)
    lwc1 f2,0(s3)
    mul.s f1,f5,f3
    sub.s f1,f2,f1
    swc1 f1,0(s3)
    lwc1 f1,0(s4)
    mul.s f0,f6,f3
    sub.s f0,f1,f0
    swc1 f0,0(s4)
L166640:
    addiu a0,sp,192
L166644:
    jal func_001ce160
    .word 0x70802e28
    lwc1 f1,192(sp)
    lwc1 f0,240(s6)
    mul.s f0,f1,f0
    swc1 f0,192(sp)
    lwc1 f1,0(s3)
    lwc1 f0,240(s6)
    mul.s f0,f1,f0
    swc1 f0,0(s3)
    lwc1 f1,0(s4)
    lwc1 f0,240(s6)
    mul.s f0,f1,f0
    swc1 f0,0(s4)
    lwc1 f1,176(sp)
    lwc1 f0,192(sp)
    add.s f0,f1,f0
    swc1 f0,148(s6)
    lwc1 f0,0(s3)
    add.s f0,f21,f0
    swc1 f0,152(s6)
    lwc1 f0,0(s4)
    add.s f0,f22,f0
    swc1 f0,156(s6)
    lw v1,204(s6)
    beqz v1,L166b78
    .word 0x3c023fc0
    lwc1 f0,220(s6)
    mtc1 zero,f25
    nop
    c.le.s f0,f25
    nop
    bc1t L166b74
    nop
    addiu v0,zero,2
    bne v1,v0,L1666fc
    addiu v0,zero,1
    lwc1 f2,208(s6)
    lwc1 f1,212(s6)
    lwc1 f0,216(s6)
    addiu v0,sp,208
    .word 0xe4420000
    .word 0xe4410004
    b L166760
    .word 0xe4400008
    addiu v0,zero,1
L1666fc:
    bne v1,v0,L166728
    addiu v0,zero,-1
    lwc1 f2,32(s1)
    lwc1 f1,36(s1)
    lwc1 f0,40(s1)
    addiu v0,sp,208
    .word 0xe4420000
    .word 0xe4410004
    b L166760
    .word 0xe4400008
    addiu v0,zero,-1
L166728:
    bne v1,v0,L166760
    nop
    lwc1 f0,32(s1)
    .word 0x3c02bf80
    mtc1 v0,f1
    nop
    mul.s f0,f1,f0
    swc1 f0,208(sp)
    lwc1 f0,36(s1)
    mul.s f0,f1,f0
    swc1 f0,212(sp)
    lwc1 f0,40(s1)
    mul.s f0,f1,f0
    swc1 f0,216(sp)
L166760:
    lwc1 f1,148(s6)
    lwc1 f0,176(sp)
    addiu a0,sp,224
    addiu s3,sp,228
    addiu s4,sp,232
    sub.s f0,f1,f0
    .word 0x70802e28
    swc1 f0,224(sp)
    lwc1 f0,152(s6)
    sub.s f0,f0,f21
    .word 0xe6600000
    lwc1 f0,156(s6)
    sub.s f0,f0,f22
    jal func_001ce160
    .word 0xe6800000
    lwc1 f3,224(sp)
    lwc1 f2,208(sp)
    lwc1 f24,212(sp)
    lwc1 f1,0(s3)
    lwc1 f23,216(sp)
    lwc1 f0,0(s4)
    .word 0x3c02bf80
    mul.s f2,f3,f2
    mul.s f1,f1,f24
    adda.s f2,f1
    madd.s f12,f0,f23
    mtc1 v0,f0
    nop
    c.lt.s f12,f0
    nop
    bc1f L1667ec
    .word 0x3c023f80
    b L166808
    mov.s f12,f0
    .word 0x3c023f80
L1667ec:
    mtc1 v0,f0
    nop
    c.le.s f12,f0
    nop
    bc1t L166808
    nop
    mov.s f12,f0
L166808:
    jal func_0011a620
    nop
    .word 0x3c024265
    ori v0,v0,0x2ee1
    mtc1 v0,f2
    mtc1 zero,f1
    nop
    mul.s f26,f2,f0
    c.lt.s f26,f1
    nop
    bc1f L166840
    .word 0x3c0242b4
    mov.s f26,f1
    .word 0x3c0242b4
L166840:
    mtc1 v0,f0
    nop
    c.lt.s f26,f0
    nop
    bc1f L1668a0
    nop
    lwc1 f2,0(s4)
    lwc1 f4,0(s3)
    lwc1 f3,224(sp)
    lwc1 f1,208(sp)
    addiu a0,sp,240
    mula.s f24,f2
    msub.s f0,f23,f4
    swc1 f0,240(sp)
    mula.s f23,f3
    msub.s f0,f1,f2
    mula.s f1,f4
    swc1 f0,244(sp)
    msub.s f0,f24,f3
    .word 0x70802e28
    jal func_001ce160
    swc1 f0,248(sp)
    b L1668c0
    lwc1 f2,248(sp)
L1668a0:
    lwc1 f2,16(s1)
    lwc1 f1,20(s1)
    lwc1 f0,24(s1)
    addiu v0,sp,240
    .word 0xe4420000
    .word 0xe4410004
    .word 0xe4400008
    lwc1 f2,248(sp)
L1668c0:
    lwc1 f4,244(sp)
    lwc1 f3,240(sp)
    lwc1 f0,208(sp)
    addiu a0,sp,256
    mula.s f24,f2
    msub.s f1,f23,f4
    mula.s f23,f3
    addiu s7,sp,260
    msub.s f0,f0,f2
    swc1 f1,256(sp)
    .word 0xe6e00000
    lwc1 f0,208(sp)
    addiu s5,sp,264
    .word 0x70802e28
    mula.s f0,f4
    msub.s f0,f24,f3
    jal func_001ce160
    .word 0xe6a00000
    lwc1 f3,0(s3)
    lwc1 f2,0(s7)
    lw v0,16(s6)
    lwc1 f5,224(sp)
    lwc1 f4,256(sp)
    lwc1 f1,0(s4)
    lwc1 f0,0(s5)
    mul.s f2,f3,f2
    andi v0,v0,0x20
    mul.s f3,f5,f4
    adda.s f3,f2
    beqz v0,L166990
    madd.s f1,f1,f0
    mtc1 zero,f0
    nop
    c.le.s f1,f0
    nop
    bc1t L166968
    nop
    .word 0x3c017000
    lwc1 f1,16296(at)
    lwc1 f0,228(s6)
    b L166a44
    mul.s f25,f0,f1
L166968:
    c.lt.s f1,f0
    nop
    bc1f L166a48
    neg.s f1,f26
    lwc1 f1,228(s6)
    .word 0x3c017000
    lwc1 f0,16296(at)
    neg.s f1,f1
    b L166a44
    mul.s f25,f1,f0
L166990:
    .word 0x3c024120
    mtc1 v0,f2
    mtc1 zero,f0
    sub.s f2,f26,f2
    c.le.s f2,f0
    nop
    bc1tl L1669bc
    mov.s f2,f0
    b L1669bc
    nop
    mov.s f2,f0
L1669bc:
    mtc1 zero,f0
    nop
    c.le.s f1,f0
    nop
    bc1t L166a04
    nop
    lwc1 f1,220(s6)
    .word 0x3c017000
    lwc1 f3,224(s6)
    lwc1 f0,16296(at)
    mul.s f1,f1,f2
    c.le.s f26,f3
    nop
    bc1t L166a44
    mul.s f25,f1,f0
    sub.s f0,f26,f3
    b L166a44
    add.s f25,f25,f0
L166a04:
    c.lt.s f1,f0
    nop
    bc1f L166a44
    nop
    lwc1 f1,220(s6)
    .word 0x3c017000
    lwc1 f3,224(s6)
    lwc1 f0,16296(at)
    mul.s f1,f1,f2
    neg.s f1,f1
    c.le.s f26,f3
    nop
    bc1t L166a44
    mul.s f25,f1,f0
    sub.s f0,f26,f3
    sub.s f25,f25,f0
L166a44:
    neg.s f1,f26
L166a48:
    c.lt.s f25,f1
    nop
    bc1f L166a84
    nop
    mtc1 zero,f0
    nop
    c.eq.s f1,f0
    nop
    bc1t L166a78
    mov.s f25,f1
    b L166a7c
    addiu v0,zero,-1
L166a78:
    .word 0x70001628
L166a7c:
    b L166ac4
    nop
L166a84:
    c.le.s f25,f26
    nop
    bc1t L166ac4
    .word 0x70001628
    mtc1 zero,f0
    nop
    c.eq.s f26,f0
    nop
    bc1t L166ab4
    mov.s f25,f26
    b L166ab8
    addiu v0,zero,1
L166ab4:
    .word 0x70001628
L166ab8:
    b L166ac4
    nop
    .word 0x70001628
L166ac4:
    beqz v0,L166adc
    nop
    lw v1,16(s6)
    addiu v0,zero,-33
    and v0,v1,v0
    sw v0,16(s6)
L166adc:
    mtc1 zero,f0
    nop
    c.eq.s f0,f25
    nop
    bc1t L166b74
    nop
    .word 0x3c027000
    addiu a1,sp,240
    mov.s f12,f25
    ori a0,v0,0x3ed0
    jal func_001c7610
    .word 0x70003628
    lwc1 f1,148(s6)
    lwc1 f0,176(sp)
    addiu a0,s6,148
    .word 0x3c027000
    addiu a2,zero,1
    sub.s f0,f1,f0
    .word 0x70802e28
    ori a3,v0,0x3ed0
    swc1 f0,148(s6)
    lwc1 f0,152(s6)
    sub.s f0,f0,f21
    swc1 f0,152(s6)
    lwc1 f0,156(s6)
    sub.s f0,f0,f22
    jal func_001ce410
    swc1 f0,156(s6)
    lwc1 f1,148(s6)
    lwc1 f0,176(sp)
    add.s f0,f1,f0
    swc1 f0,148(s6)
    lwc1 f0,152(s6)
    add.s f0,f0,f21
    swc1 f0,152(s6)
    lwc1 f0,156(s6)
    add.s f0,f0,f22
    swc1 f0,156(s6)
L166b74:
    .word 0x3c023fc0
L166b78:
    mtc1 v0,f0
    nop
    c.lt.s f20,f0
    nop
    bc1f L166ba8
    nop
    lwc1 f2,148(s6)
    lwc1 f1,152(s6)
    lwc1 f0,156(s6)
    swc1 f2,48(s0)
    swc1 f1,52(s0)
    swc1 f0,56(s0)
L166ba8:
    lwc1 f1,16(s1)
    lwc1 f0,236(s6)
    mul.s f0,f1,f0
    swc1 f0,160(s6)
    lwc1 f1,20(s1)
    lwc1 f0,236(s6)
    mul.s f0,f1,f0
    swc1 f0,164(s6)
    lwc1 f1,24(s1)
    lwc1 f0,236(s6)
    mul.s f0,f1,f0
    swc1 f0,168(s6)
    lwc1 f1,160(s6)
    lwc1 f0,0(s2)
    add.s f0,f1,f0
    swc1 f0,160(s6)
    lwc1 f1,164(s6)
    lwc1 f0,4(s2)
    add.s f0,f1,f0
    swc1 f0,164(s6)
    lwc1 f0,8(s2)
    lwc1 f1,168(s6)
    add.s f0,f1,f0
    swc1 f0,168(s6)
    lw v0,16(s6)
    andi v0,v0,0x10
    beqz v0,L166c2c
    nop
    sw zero,172(s6)
    .word 0x3c023f80
    sw v0,176(s6)
    b L166c44
    sw zero,180(s6)
L166c2c:
    lwc1 f2,16(s1)
    lwc1 f1,20(s1)
    lwc1 f0,24(s1)
    swc1 f2,172(s6)
    swc1 f1,176(s6)
    swc1 f0,180(s6)
L166c44:
    addiu v0,sp,176
    .word 0xc4420000
    .word 0xc4410004
    .word 0xc4400008
    swc1 f2,264(s6)
    swc1 f1,268(s6)
    swc1 f0,272(s6)
    lq ra,160(sp)
    lq s7,144(sp)
    lq s6,128(sp)
    lq s5,112(sp)
    lq s4,96(sp)
    lq s3,80(sp)
    lq s2,64(sp)
    lq s1,48(sp)
    lq s0,32(sp)
    lwc1 f26,24(sp)
    lwc1 f25,20(sp)
    lwc1 f24,16(sp)
    lwc1 f23,12(sp)
    lwc1 f22,8(sp)
    lwc1 f21,4(sp)
    lwc1 f20,0(sp)
    addiu v0,zero,1
    jr ra
    addiu sp,sp,272
}
