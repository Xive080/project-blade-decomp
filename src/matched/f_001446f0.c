extern void func_001c2510(void);
extern void func_001c3b70(void);
extern void func_001ce160(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-336
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
    swc1 f20,0(sp)
    lw v0,0(a0)
    lwc1 f3,8(a3)
    lwc1 f2,16(a3)
    lwc1 f1,12(a3)
    lwc1 f0,20(a3)
    sw a0,268(sp)
    sw v0,224(sp)
    .word 0x3c023f80
    mtc1 v0,f4
    sub.s f2,f3,f2
    .word 0x3c020033
    addiu v0,v0,-23008
    sub.s f0,f1,f0
    .word 0x70a09e28
    .word 0x70c09628
    sw zero,208(sp)
    .word 0x70e08e28
    lw a0,0(v0)
    div.s f20,f4,f2
    nop
    nop
    div.s f21,f4,f0
    nop
    nop
    jal func_001c2510
    nop
    jal func_001c3b70
    .word 0x70402628
    addiu s0,v0,48
    lw v0,28(s1)
    slt at,v0,s3
    beqz at,L1447cc
    nop
    lw v0,208(sp)
    ori v0,v0,0x20
    sw v0,208(sp)
L1447cc:
    lw v0,32(s1)
    slt at,v0,s2
    beqz at,L14481c
    nop
    lw v0,208(sp)
    ori v0,v0,0x40
    sw v0,208(sp)
    lw v0,36(s1)
    slt at,s3,v0
    beqz at,L14481c
    nop
    addiu v1,v0,-1
    lw v0,208(sp)
    slt at,s3,v1
    ori v0,v0,0x80
    beqz at,L14481c
    sw v0,208(sp)
    lw v0,208(sp)
    ori v0,v0,0x100
    sw v0,208(sp)
L14481c:
    lw s8,4(s1)
    .word 0x3c020030
    addiu v0,v0,-4640
    sw zero,192(sp)
    sw zero,240(sp)
    sll v1,s8,0x3
    addu v1,v1,s8
    sll v1,v1,0x2
    .word 0x10000162
    addu s2,v0,v1
    sltiu at,s8,360
L144848:
    .word 0x10200165
    nop
    lw v0,224(sp)
    lw v1,4(v0)
    lw v0,240(sp)
    addu a0,v1,v0
    lw v1,0(a0)
    andi v0,v1,0x8
    .word 0x10400151
    nop
    lw v0,208(sp)
    and v0,v0,v1
    .word 0x1440014d
    nop
    lw v0,224(sp)
    lw v1,4(a0)
    lw a2,8(a0)
    lw a3,12(a0)
    lwc1 f5,16(s1)
    lw t0,12(v0)
    sll a0,v1,0x4
    sll v1,v1,0x2
    .word 0x3c024180
    mtc1 v0,f6
    addu s3,t0,a0
    .word 0x8fa200e0
    lh a1,12(s3)
    lh a0,14(s3)
    lw t1,8(v0)
    mtc1 a1,f1
    mtc1 a0,f0
    nop
    cvt.s.w f22,f1
    sll v0,a2,0x4
    addu s4,t0,v0
    addu v1,t1,v1
    div.s f22,f22,f6
    lwc1 f2,0(v1)
    sll v0,a2,0x2
    addu v0,t1,v0
    lh a0,14(s4)
    lwc1 f3,0(v0)
    lh v1,12(s4)
    sll v0,a3,0x4
    addu s5,t0,v0
    sll v0,a3,0x2
    addu v0,t1,v0
    lwc1 f4,0(v0)
    lh v0,14(s5)
    cvt.s.w f23,f0
    mtc1 v1,f0
    c.lt.s f22,f5
    lh v1,12(s5)
    cvt.s.w f24,f0
    mtc1 a0,f0
    mtc1 v1,f1
    nop
    cvt.s.w f25,f0
    mtc1 v0,f0
    nop
    cvt.s.w f26,f1
    cvt.s.w f27,f0
    div.s f23,f23,f6
    div.s f24,f24,f6
    div.s f25,f25,f6
    nop
    div.s f26,f26,f6
    nop
    nop
    div.s f27,f27,f6
    nop
    nop
    bc1f L144990
    nop
    c.lt.s f24,f5
    nop
    bc1f L144990
    nop
    c.lt.s f26,f5
    nop
    bc1t L144db0
    nop
L144990:
    lwc1 f0,8(s1)
    c.le.s f22,f0
    nop
    bc1t L1449c8
    nop
    c.le.s f24,f0
    nop
    bc1t L1449c8
    nop
    c.le.s f26,f0
    nop
    bc1f L144db0
    nop
    nop
L1449c8:
    lwc1 f0,20(s1)
    c.lt.s f23,f0
    nop
    bc1f L144a00
    nop
    c.lt.s f25,f0
    nop
    bc1f L144a00
    nop
    c.lt.s f27,f0
    nop
    bc1t L144db0
    nop
    nop
L144a00:
    lwc1 f0,12(s1)
    c.le.s f23,f0
    nop
    bc1t L144a38
    nop
    c.le.s f25,f0
    nop
    bc1t L144a38
    nop
    c.le.s f27,f0
    nop
    bc1f L144db0
    nop
    nop
L144a38:
    lwc1 f0,24(s1)
    c.lt.s f2,f0
    nop
    bc1f L144a70
    nop
    c.lt.s f3,f0
    nop
    bc1f L144a70
    nop
    c.lt.s f4,f0
    nop
    bc1t L144db0
    nop
    nop
L144a70:
    lwc1 f1,0(s0)
    lwc1 f0,0(s3)
    addiu a0,sp,272
    addiu s6,sp,276
    addiu s7,sp,280
    sub.s f0,f1,f0
    .word 0x70802e28
    swc1 f0,272(sp)
    lwc1 f1,4(s0)
    lwc1 f0,4(s3)
    sub.s f0,f1,f0
    .word 0xe6c00000
    lwc1 f1,8(s0)
    lwc1 f0,8(s3)
    sub.s f0,f1,f0
    jal func_001ce160
    .word 0xe6e00000
    lwc1 f0,272(sp)
    .word 0x3c023ca3
    ori v0,v0,0xd70a
    mtc1 v0,f1
    addiu a0,sp,272
    mul.s f0,f1,f0
    addiu v1,sp,288
    addiu v0,zero,255
    swc1 f0,272(sp)
    lwc1 f0,0(s6)
    .word 0x70802e28
    mul.s f0,f1,f0
    swc1 f0,0(s6)
    lwc1 f0,0(s7)
    mul.s f0,f1,f0
    swc1 f0,0(s7)
    lwc1 f0,0(s6)
    add.s f0,f0,f1
    swc1 f0,0(s6)
    lwc1 f1,0(s3)
    lwc1 f0,272(sp)
    add.s f0,f1,f0
    swc1 f0,288(sp)
    lwc1 f1,4(s3)
    lwc1 f0,0(s6)
    add.s f0,f1,f0
    swc1 f0,292(sp)
    lwc1 f1,8(s3)
    lwc1 f0,0(s7)
    add.s f0,f1,f0
    swc1 f0,296(sp)
    .word 0xc4620000
    .word 0xc4610004
    .word 0xc4600008
    swc1 f2,0(s2)
    swc1 f1,4(s2)
    swc1 f0,8(s2)
    lwc1 f0,16(s1)
    sub.s f0,f22,f0
    mul.s f0,f20,f0
    swc1 f0,28(s2)
    lwc1 f0,20(s1)
    sub.s f0,f23,f0
    mul.s f0,f21,f0
    swc1 f0,32(s2)
    sb v0,12(s2)
    sb v0,13(s2)
    sb v0,14(s2)
    lb v0,40(s1)
    sb v0,15(s2)
    lwc1 f1,0(s0)
    lwc1 f0,0(s4)
    sub.s f0,f1,f0
    swc1 f0,272(sp)
    lwc1 f1,4(s0)
    lwc1 f0,4(s4)
    sub.s f0,f1,f0
    swc1 f0,0(s6)
    lwc1 f1,8(s0)
    lwc1 f0,8(s4)
    sub.s f0,f1,f0
    jal func_001ce160
    swc1 f0,0(s7)
    lwc1 f0,272(sp)
    .word 0x3c023ca3
    ori v0,v0,0xd70a
    mtc1 v0,f1
    addiu v1,s8,1
    mul.s f0,f1,f0
    sll v0,v1,0x3
    addu v0,v0,v1
    sll v1,v0,0x2
    swc1 f0,272(sp)
    lwc1 f0,0(s6)
    .word 0x3c020030
    addiu v0,v0,-4640
    addu a2,v0,v1
    mul.s f0,f1,f0
    addiu a0,sp,272
    addiu v1,sp,304
    swc1 f0,0(s6)
    lwc1 f0,0(s7)
    addiu v0,zero,255
    .word 0x70802e28
    mul.s f0,f1,f0
    swc1 f0,0(s7)
    lwc1 f0,0(s6)
    add.s f0,f0,f1
    swc1 f0,0(s6)
    lwc1 f1,0(s4)
    lwc1 f0,272(sp)
    add.s f0,f1,f0
    swc1 f0,304(sp)
    lwc1 f1,4(s4)
    lwc1 f0,0(s6)
    add.s f0,f1,f0
    swc1 f0,308(sp)
    lwc1 f1,8(s4)
    lwc1 f0,0(s7)
    add.s f0,f1,f0
    swc1 f0,312(sp)
    .word 0xc4620000
    .word 0xc4610004
    .word 0xc4600008
    swc1 f2,0(a2)
    swc1 f1,4(a2)
    swc1 f0,8(a2)
    lwc1 f0,16(s1)
    sub.s f0,f24,f0
    mul.s f0,f20,f0
    swc1 f0,28(a2)
    lwc1 f0,20(s1)
    sub.s f0,f25,f0
    mul.s f0,f21,f0
    swc1 f0,32(a2)
    sb v0,12(a2)
    sb v0,13(a2)
    sb v0,14(a2)
    lb v0,40(s1)
    sb v0,15(a2)
    lwc1 f1,0(s0)
    lwc1 f0,0(s5)
    sub.s f0,f1,f0
    swc1 f0,272(sp)
    lwc1 f1,4(s0)
    lwc1 f0,4(s5)
    sub.s f0,f1,f0
    swc1 f0,0(s6)
    lwc1 f1,8(s0)
    lwc1 f0,8(s5)
    sub.s f0,f1,f0
    jal func_001ce160
    swc1 f0,0(s7)
    lwc1 f0,272(sp)
    .word 0x3c023ca3
    ori v0,v0,0xd70a
    mtc1 v0,f1
    addiu v1,s8,2
    mul.s f0,f1,f0
    sll v0,v1,0x3
    addu v0,v0,v1
    sll v1,v0,0x2
    swc1 f0,272(sp)
    lwc1 f0,0(s6)
    .word 0x3c020030
    addiu v0,v0,-4640
    addu a0,v0,v1
    mul.s f0,f1,f0
    addiu v1,sp,320
    addiu v0,zero,255
    swc1 f0,0(s6)
    lwc1 f0,0(s7)
    addiu s2,s2,108
    addiu s8,s8,3
    mul.s f0,f1,f0
    swc1 f0,0(s7)
    lwc1 f0,0(s6)
    add.s f0,f0,f1
    swc1 f0,0(s6)
    lwc1 f1,0(s5)
    lwc1 f0,272(sp)
    add.s f0,f1,f0
    swc1 f0,320(sp)
    lwc1 f0,0(s6)
    lwc1 f1,4(s5)
    add.s f0,f1,f0
    swc1 f0,324(sp)
    lwc1 f1,8(s5)
    lwc1 f0,0(s7)
    add.s f0,f1,f0
    swc1 f0,328(sp)
    .word 0xc4620000
    .word 0xc4610004
    .word 0xc4600008
    swc1 f2,0(a0)
    swc1 f1,4(a0)
    swc1 f0,8(a0)
    lwc1 f0,16(s1)
    sub.s f0,f26,f0
    mul.s f0,f20,f0
    swc1 f0,28(a0)
    lwc1 f0,20(s1)
    sub.s f0,f27,f0
    mul.s f0,f21,f0
    swc1 f0,32(a0)
    sb v0,12(a0)
    sb v0,13(a0)
    sb v0,14(a0)
    lb v0,40(s1)
    sb v0,15(a0)
    nop
L144db0:
    lw v0,240(sp)
    addiu v0,v0,16
    sw v0,240(sp)
    lw v0,192(sp)
    addiu v0,v0,1
    sw v0,192(sp)
    lw v0,224(sp)
    lhu v1,0(v0)
    lw v0,192(sp)
    sltu v0,v0,v1
    bnez v0,L144848
    sltiu at,s8,360
    sw s8,4(s1)
    lw v0,268(sp)
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
    addiu sp,sp,336
}
