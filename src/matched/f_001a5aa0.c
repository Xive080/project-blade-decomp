extern void func_00119ff8(void);
extern void func_001c3b80(void);
extern void func_001c7320(void);
extern void func_001c7610(void);
extern void func_001c7710(void);
extern void func_001ce160(void);
extern void func_001ce270(void);
extern void func_001ce3f0(void);
extern void func_001ce410(void);
extern void func_00200ee0(void);
extern void func_00202880(void);
extern void func_00202b10(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-480
    sq ra,128(sp)
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
    .word 0x3c02002e
    swc1 f21,4(sp)
    addiu v0,v0,13888
    swc1 f20,0(sp)
    ld a2,0(v0)
    lwc1 f0,8(v0)
    addiu a3,sp,368
    addiu v1,sp,400
    .word 0x70808628
    .word 0x3c02002e
    .word 0xfce60000
    addiu a1,v0,13904
    .word 0xe4e00008
    .word 0xdca20000
    .word 0xc4a00008
    .word 0xfc620000
    .word 0xe4600008
    jal func_001c3b80
    lw a0,4(a0)
    .word 0x70409628
    lw v0,-31452(gp)
    addu v0,s0,v0
    lw s1,0(v0)
    bnez s1,L1a5b40
    nop
    b L1a638c
    .word 0x70001628
L1a5b40:
    lwc1 f0,64(s1)
    .word 0x3c023f80
    mtc1 v0,f1
    lwc1 f20,16(s1)
    .word 0x3c023fc9
    ori v1,v0,0xfdb
    add.s f1,f1,f0
    lwc1 f21,68(s1)
    .word 0x3c023f00
    lwc1 f2,56(s1)
    mtc1 v1,f0
    lwc1 f3,60(s1)
    mtc1 v0,f4
    mul.s f21,f21,f0
    sub.s f0,f2,f3
    mul.s f21,f21,f4
    mul.s f24,f1,f0
    mul.s f26,f20,f20
    add.s f23,f2,f3
    jal func_00119ff8
    mov.s f12,f21
    .word 0x3c024265
    mov.s f22,f0
    ori v0,v0,0x2ee0
    mtc1 v0,f0
    .word 0x72402e28
    .word 0x3c023f80
    sw v0,264(sp)
    sw v0,244(sp)
    sw v0,224(sp)
    addiu s2,sp,240
    mul.s f21,f21,f0
    .word 0xae400000
    sw zero,232(sp)
    sw zero,228(sp)
    addiu s3,sp,256
    sw zero,260(sp)
    .word 0xae600000
    sw zero,248(sp)
    sw zero,280(sp)
    sw zero,276(sp)
    .word 0x3c020002
    addiu a2,sp,236
    sw zero,272(sp)
    .word 0x8cc30000
    ori v0,v0,0x3
    addiu a0,sp,288
    or v0,v1,v0
    jal func_001c7710
    .word 0xacc20000
    addiu a1,s1,72
    addiu a0,sp,352
    addiu a2,zero,1
    jal func_001ce410
    addiu a3,sp,288
    addiu a1,sp,352
    addiu s1,sp,224
    jal func_001ce160
    .word 0x72402628
    addiu s5,sp,372
    mov.s f25,f0
    lwc1 f4,4(s2)
    .word 0xc6a50000
    lwc1 f1,0(s2)
    lwc1 f0,368(sp)
    addiu s4,sp,376
    lwc1 f3,8(s2)
    .word 0x3c023f66
    mul.s f2,f4,f5
    .word 0xc6860000
    ori v0,v0,0x6666
    mul.s f0,f1,f0
    adda.s f0,f2
    mtc1 v0,f0
    madd.s f1,f3,f6
    c.le.s f1,f0
    nop
    bc1f L1a5c9c
    nop
    .word 0x3c02bf66
    ori v0,v0,0x6666
    mtc1 v0,f0
    nop
    c.lt.s f1,f0
    nop
    bc1fl L1a5d50
    mula.s f4,f6
L1a5c9c:
    lwc1 f1,8(s1)
    lwc1 f0,4(s1)
    .word 0x72602628
    .word 0x72602e28
    mula.s f4,f1
    msub.s f0,f3,f0
    swc1 f0,0(s3)
    lwc1 f3,8(s2)
    lwc1 f2,0(s1)
    lwc1 f1,0(s2)
    lwc1 f0,8(s1)
    mula.s f3,f2
    msub.s f0,f1,f0
    swc1 f0,4(s3)
    lwc1 f3,0(s2)
    lwc1 f2,4(s1)
    lwc1 f1,4(s2)
    lwc1 f0,0(s1)
    mula.s f3,f2
    msub.s f0,f1,f0
    jal func_001ce160
    swc1 f0,8(s3)
    lwc1 f3,4(s2)
    lwc1 f2,8(s3)
    lwc1 f1,8(s2)
    lwc1 f0,4(s3)
    mula.s f3,f2
    msub.s f0,f1,f0
    swc1 f0,0(s1)
    lwc1 f3,8(s2)
    lwc1 f2,0(s3)
    lwc1 f1,0(s2)
    lwc1 f0,8(s3)
    mula.s f3,f2
    msub.s f0,f1,f0
    swc1 f0,4(s1)
    lwc1 f3,0(s2)
    lwc1 f2,4(s3)
    lwc1 f1,4(s2)
    lwc1 f0,0(s3)
    mula.s f3,f2
    msub.s f0,f1,f0
    b L1a5df0
    swc1 f0,8(s1)
    mula.s f4,f6
L1a5d50:
    msub.s f0,f3,f5
    swc1 f0,0(s3)
    lwc1 f3,8(s2)
    lwc1 f2,368(sp)
    lwc1 f1,0(s2)
    lwc1 f0,0(s4)
    .word 0x72602628
    .word 0x72602e28
    mula.s f3,f2
    msub.s f0,f1,f0
    swc1 f0,4(s3)
    lwc1 f3,0(s2)
    lwc1 f2,0(s5)
    lwc1 f1,4(s2)
    lwc1 f0,368(sp)
    mula.s f3,f2
    msub.s f0,f1,f0
    jal func_001ce160
    swc1 f0,8(s3)
    lwc1 f3,4(s2)
    lwc1 f2,8(s3)
    lwc1 f1,8(s2)
    lwc1 f0,4(s3)
    mula.s f3,f2
    msub.s f0,f1,f0
    swc1 f0,0(s1)
    lwc1 f3,8(s2)
    lwc1 f2,0(s3)
    lwc1 f1,0(s2)
    lwc1 f0,8(s3)
    mula.s f3,f2
    msub.s f0,f1,f0
    swc1 f0,4(s1)
    lwc1 f3,0(s2)
    lwc1 f2,4(s3)
    lwc1 f1,4(s2)
    lwc1 f0,0(s3)
    mula.s f3,f2
    msub.s f0,f1,f0
    swc1 f0,8(s1)
L1a5df0:
    jal func_001c7320
    addiu a0,sp,224
    addiu a0,sp,288
    jal func_001c7710
    addiu a1,sp,224
    addiu a0,sp,368
    addiu a2,zero,1
    addiu a3,sp,288
    jal func_001ce410
    .word 0x70802e28
    addiu a0,sp,160
    mov.s f12,f21
    addiu a1,sp,400
    jal func_001c7610
    .word 0x70003628
    addiu a0,sp,416
    addiu a1,sp,368
    addiu a2,zero,1
    jal func_001ce410
    addiu a3,sp,160
    addiu a0,sp,160
    neg.s f12,f21
    addiu a1,sp,400
    jal func_001c7610
    .word 0x70003628
    addiu a0,sp,432
    addiu a1,sp,368
    addiu a2,zero,1
    jal func_001ce410
    addiu a3,sp,160
    addiu v1,sp,392
    .word 0xac600000
    addiu v0,sp,388
    sw zero,384(sp)
    .word 0x3c043f80
    .word 0xac440000
    lwc1 f3,0(s5)
    .word 0xc4490000
    lwc1 f11,384(sp)
    lwc1 f4,368(sp)
    lwc1 f5,0(s4)
    .word 0xc46a0000
    mul.s f0,f9,f3
    mul.s f1,f11,f4
    adda.s f1,f0
    madd.s f0,f10,f5
    c.le.s f0,f22
    nop
    bc1f L1a5f3c
    addiu a2,sp,384
    lwc1 f8,416(sp)
    lwc1 f7,420(sp)
    lwc1 f2,432(sp)
    lwc1 f1,436(sp)
    lwc1 f6,424(sp)
    lwc1 f0,440(sp)
    mul.s f8,f11,f8
    mul.s f7,f9,f7
    adda.s f8,f7
    mul.s f2,f11,f2
    mul.s f1,f9,f1
    madd.s f6,f10,f6
    adda.s f2,f1
    madd.s f0,f10,f0
    c.le.s f6,f0
    nop
    bc1t L1a5f20
    addiu a2,sp,432
    addiu a2,sp,416
    .word 0xdcc40000
    .word 0xc4c00008
    addiu a1,sp,448
    .word 0xfca40000
    b L1a5f50
    .word 0xe4a00008
    addiu a2,sp,432
L1a5f20:
    ld a0,0(a2)
    lwc1 f0,8(a2)
    addiu a1,sp,448
    .word 0xfca40000
    b L1a5f50
    .word 0xe4a00008
    addiu a2,sp,384
L1a5f3c:
    ld a0,0(a2)
    lwc1 f0,8(a2)
    addiu a1,sp,448
    .word 0xfca40000
    .word 0xe4a00008
L1a5f50:
    addiu a3,sp,452
    mtc1 zero,f2
    .word 0xc4e00000
    c.le.s f0,f2
    nop
    bc1tl L1a5f80
    mul.s f0,f24,f0
    mul.s f0,f23,f0
    mula.s f20,f0
    b L1a5f9c
    madd.s f1,f25,f26
    mul.s f0,f24,f0
L1a5f80:
    mula.s f20,f0
    madd.s f1,f25,f26
    c.lt.s f1,f2
    nop
    bc1f L1a5f9c
    nop
    mov.s f1,f2
L1a5f9c:
    sw zero,0(v1)
    sw zero,384(sp)
    .word 0x3c04bf80
    sw a0,0(v0)
    lwc1 f12,384(sp)
    lwc1 f10,0(v0)
    lwc1 f11,0(v1)
    mul.s f2,f12,f4
    mul.s f0,f10,f3
    adda.s f2,f0
    madd.s f0,f11,f5
    c.le.s f0,f22
    nop
    bc1f L1a605c
    addiu a2,sp,384
    lwc1 f9,416(sp)
    lwc1 f8,420(sp)
    lwc1 f6,432(sp)
    lwc1 f2,436(sp)
    lwc1 f7,424(sp)
    lwc1 f0,440(sp)
    mul.s f9,f12,f9
    mul.s f8,f10,f8
    adda.s f9,f8
    mul.s f6,f12,f6
    mul.s f2,f10,f2
    madd.s f7,f11,f7
    adda.s f6,f2
    madd.s f0,f11,f0
    c.le.s f7,f0
    nop
    bc1t L1a6040
    addiu a2,sp,432
    addiu a2,sp,416
    .word 0xdcc40000
    .word 0xc4c00008
    addiu a1,sp,448
    .word 0xfca40000
    b L1a6070
    .word 0xe4a00008
    addiu a2,sp,432
L1a6040:
    ld a0,0(a2)
    lwc1 f0,8(a2)
    addiu a1,sp,448
    .word 0xfca40000
    b L1a6070
    .word 0xe4a00008
    addiu a2,sp,384
L1a605c:
    ld a0,0(a2)
    lwc1 f0,8(a2)
    addiu a1,sp,448
    .word 0xfca40000
    .word 0xe4a00008
L1a6070:
    lwc1 f6,0(a3)
    mtc1 zero,f0
    nop
    c.lt.s f6,f0
    nop
    bc1f L1a60d4
    nop
    neg.s f0,f6
    mul.s f2,f23,f0
    .word 0x3c044000
    mtc1 a0,f0
    nop
    mul.s f0,f0,f25
    div.s f2,f2,f0
    nop
    nop
    c.le.s f2,f20
    nop
    bc1t L1a60c8
    mul.s f0,f23,f6
    mov.s f2,f20
    mul.s f0,f23,f6
L1a60c8:
    mula.s f2,f0
    mul.s f0,f25,f2
    madd.s f0,f2,f0
L1a60d4:
    sw zero,0(v1)
    .word 0x3c04bf80
    sw zero,0(v0)
    sw a0,384(sp)
    lwc1 f11,0(v0)
    mtc1 a0,f2
    lwc1 f12,0(v1)
    mul.s f2,f2,f4
    mul.s f6,f11,f3
    adda.s f2,f6
    madd.s f2,f12,f5
    c.le.s f2,f22
    nop
    bc1f L1a61a4
    addiu a2,sp,384
    lwc1 f9,420(sp)
    lwc1 f13,384(sp)
    lwc1 f10,416(sp)
    lwc1 f7,432(sp)
    lwc1 f6,436(sp)
    lwc1 f8,424(sp)
    mul.s f9,f11,f9
    lwc1 f2,440(sp)
    mul.s f10,f13,f10
    adda.s f10,f9
    mul.s f7,f13,f7
    mul.s f6,f11,f6
    madd.s f8,f12,f8
    adda.s f7,f6
    madd.s f2,f12,f2
    c.le.s f8,f2
    nop
    bc1f L1a6160
    addiu a0,zero,1
    .word 0x70002628
L1a6160:
    beqz a0,L1a6188
    addiu a2,sp,432
    addiu a2,sp,416
    .word 0xdcc40000
    .word 0xc4c20008
    addiu a1,sp,448
    .word 0xfca40000
    b L1a61b8
    .word 0xe4a20008
    addiu a2,sp,432
L1a6188:
    ld a0,0(a2)
    lwc1 f2,8(a2)
    addiu a1,sp,448
    .word 0xfca40000
    b L1a61b8
    .word 0xe4a20008
    addiu a2,sp,384
L1a61a4:
    ld a0,0(a2)
    lwc1 f2,8(a2)
    addiu a1,sp,448
    .word 0xfca40000
    .word 0xe4a20008
L1a61b8:
    lwc1 f2,448(sp)
    mtc1 zero,f6
    mul.s f2,f23,f2
    mul.s f2,f20,f2
    c.le.s f2,f6
    nop
    bc1t L1a61dc
    nop
    mov.s f2,f6
L1a61dc:
    sw zero,0(v1)
    .word 0x3c043f80
    sw zero,0(v0)
    sw a0,384(sp)
    lwc1 f9,0(v0)
    mtc1 a0,f6
    lwc1 f10,0(v1)
    mul.s f4,f6,f4
    mul.s f3,f9,f3
    adda.s f4,f3
    madd.s f3,f10,f5
    c.le.s f3,f22
    nop
    bc1f L1a62ac
    addiu a0,sp,384
    lwc1 f7,420(sp)
    lwc1 f11,384(sp)
    lwc1 f8,416(sp)
    lwc1 f5,432(sp)
    lwc1 f4,436(sp)
    lwc1 f6,424(sp)
    mul.s f7,f9,f7
    lwc1 f3,440(sp)
    mul.s f8,f11,f8
    adda.s f8,f7
    mul.s f5,f11,f5
    mul.s f4,f9,f4
    madd.s f6,f10,f6
    adda.s f5,f4
    madd.s f3,f10,f3
    c.le.s f6,f3
    nop
    bc1f L1a6268
    addiu v0,zero,1
    .word 0x70001628
L1a6268:
    beqz v0,L1a6290
    addiu a0,sp,432
    addiu a0,sp,416
    .word 0xdc820000
    .word 0xc4830008
    addiu v1,sp,448
    .word 0xfc620000
    b L1a62c0
    .word 0xe4630008
    addiu a0,sp,432
L1a6290:
    ld v0,0(a0)
    lwc1 f3,8(a0)
    addiu v1,sp,448
    .word 0xfc620000
    b L1a62c0
    .word 0xe4630008
    addiu a0,sp,384
L1a62ac:
    ld v0,0(a0)
    lwc1 f3,8(a0)
    addiu v1,sp,448
    .word 0xfc620000
    .word 0xe4630008
L1a62c0:
    lwc1 f4,448(sp)
    mtc1 zero,f3
    mul.s f4,f23,f4
    mul.s f4,f20,f4
    c.lt.s f4,f3
    nop
    bc1f L1a62e8
    sub.s f5,f4,f2
    mov.s f4,f3
    .word 0x46022141
L1a62e8:
    .word 0x3c033f00
    .word 0x3c024000
    mtc1 v1,f4
    sub.s f6,f1,f0
    mul.s f3,f4,f5
    add.s f2,f3,f2
    swc1 f2,464(sp)
    mul.s f2,f5,f5
    mtc1 v0,f1
    nop
    mula.s f1,f2
    mul.s f1,f4,f6
    add.s f0,f1,f0
    swc1 f0,468(sp)
    madd.s f12,f6,f6
    jal func_001ce270
    sw zero,472(sp)
    .word 0x3c023f00
    mtc1 v0,f1
    addiu a0,sp,464
    mul.s f20,f1,f0
    addiu a2,zero,1
    addiu a3,sp,224
    jal func_001ce3f0
    .word 0x70802e28
    addiu a0,sp,464
    .word 0xdc820000
    .word 0xc4800008
    addiu v1,sp,144
    .word 0xfc620000
    .word 0xe4600008
    swc1 f20,156(sp)
    lw a0,24(s0)
    jal func_00202b10
    .word 0x70002e28
    addiu a1,sp,144
    jal func_00202880
    .word 0x70402628
    jal func_00200ee0
    .word 0x72002628
    .word 0x72001628
L1a638c:
    lq ra,128(sp)
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
    jr ra
    addiu sp,sp,480
}
