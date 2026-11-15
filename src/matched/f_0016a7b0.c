extern void func_00119ff8(void);
extern void func_00145060(void);
extern void func_00145450(void);
extern void func_00146950(void);
extern void func_00146d40(void);
extern void func_00147300(void);
extern void func_00147b70(void);
extern void func_00147eb0(void);
extern void func_00148000(void);
extern void func_001ce240(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-240
    sq ra,160(sp)
    sq s8,144(sp)
    sq s7,128(sp)
    sq s6,112(sp)
    sq s5,96(sp)
    sq s4,80(sp)
    sq s3,64(sp)
    sq s2,48(sp)
    sq s1,32(sp)
    sq s0,16(sp)
    swc1 f21,4(sp)
    swc1 f20,0(sp)
    lwc1 f2,0(a0)
    lwc1 f1,4(a0)
    lwc1 f0,8(a0)
    .word 0x7080b628
    addiu v0,zero,-1
    addiu s7,sp,180
    swc1 f2,0(t2)
    swc1 f1,4(t2)
    swc1 f0,8(t2)
    lwc1 f2,0(a2)
    lwc1 f1,4(a2)
    lwc1 f0,8(a2)
    addiu s8,sp,184
    addiu a0,sp,176
    .word 0x71009628
    swc1 f2,12(t2)
    swc1 f1,16(t2)
    swc1 f0,20(t2)
    lwc1 f2,0(a1)
    lwc1 f1,4(a1)
    lwc1 f0,8(a1)
    .word 0x71208e28
    .word 0x70a0ae28
    .word 0x70c0a628
    .word 0x70e09e28
    .word 0x71408628
    swc1 f2,24(t2)
    swc1 f1,28(t2)
    swc1 f0,32(t2)
    lwc1 f2,0(a3)
    lwc1 f1,4(a3)
    lwc1 f0,8(a3)
    swc1 f2,36(t2)
    swc1 f1,40(t2)
    swc1 f0,44(t2)
    sw v0,76(t2)
    lwc1 f1,24(t2)
    lwc1 f0,0(t2)
    sub.s f0,f1,f0
    swc1 f0,176(sp)
    lwc1 f1,28(t2)
    lwc1 f0,4(t2)
    sub.s f0,f1,f0
    .word 0xe6e00000
    lwc1 f1,32(t2)
    lwc1 f0,8(t2)
    sub.s f0,f1,f0
    jal func_001ce240
    .word 0xe7c00000
    mtc1 zero,f3
    nop
    c.eq.s f3,f0
    nop
    bc1f L16a8f4
    nop
    lwc1 f2,0(s6)
    lwc1 f1,4(s6)
    lwc1 f0,8(s6)
    swc1 f2,108(s0)
    swc1 f1,112(s0)
    swc1 f0,116(s0)
    lwc1 f2,0(s5)
    lwc1 f1,4(s5)
    lwc1 f0,8(s5)
    swc1 f2,120(s0)
    swc1 f1,124(s0)
    b L16ace4
    swc1 f0,128(s0)
L16a8f4:
    lwc1 f2,0(s0)
    lwc1 f1,12(s0)
    .word 0x3c02bf80
    mtc1 v0,f4
    add.s f1,f2,f1
    swc1 f1,108(s0)
    lwc1 f2,4(s0)
    lwc1 f1,16(s0)
    add.s f1,f2,f1
    swc1 f1,112(s0)
    lwc1 f2,8(s0)
    lwc1 f1,20(s0)
    add.s f1,f2,f1
    swc1 f1,116(s0)
    lwc1 f2,24(s0)
    lwc1 f1,36(s0)
    sub.s f1,f2,f1
    swc1 f1,120(s0)
    lwc1 f2,28(s0)
    lwc1 f1,40(s0)
    sub.s f1,f2,f1
    swc1 f1,124(s0)
    lwc1 f2,32(s0)
    lwc1 f1,44(s0)
    sub.s f1,f2,f1
    swc1 f1,128(s0)
    lwc1 f7,116(s0)
    lwc1 f6,8(s0)
    lwc1 f10,108(s0)
    lwc1 f2,0(s0)
    lwc1 f9,112(s0)
    lwc1 f8,4(s0)
    lwc1 f11,120(s0)
    sub.s f14,f7,f6
    lwc1 f16,0(s7)
    lwc1 f15,0(s8)
    lwc1 f18,0(s1)
    sub.s f12,f10,f2
    lwc1 f7,128(s0)
    lwc1 f6,32(s0)
    lwc1 f1,176(sp)
    sub.s f13,f9,f8
    lwc1 f10,24(s0)
    lwc1 f17,4(s1)
    lwc1 f2,8(s1)
    lwc1 f9,124(s0)
    lwc1 f8,28(s0)
    sub.s f19,f7,f6
    sub.s f10,f11,f10
    mula.s f16,f14
    msub.s f6,f15,f13
    sub.s f11,f9,f8
    mula.s f15,f12
    msub.s f8,f1,f14
    mul.s f7,f6,f18
    mula.s f1,f13
    mul.s f6,f8,f17
    msub.s f9,f16,f12
    adda.s f7,f6
    madd.s f9,f9,f2
    mula.s f16,f19
    msub.s f7,f15,f11
    mul.s f8,f7,f18
    mula.s f15,f10
    msub.s f7,f1,f19
    mul.s f7,f7,f17
    mul.s f6,f16,f10
    mul.s f1,f1,f11
    sub.s f1,f1,f6
    adda.s f8,f7
    madd.s f1,f1,f2
    c.le.s f1,f3
    nop
    bc1t L16aa28
    mov.s f5,f4
    b L16aa44
    addiu v1,zero,1
L16aa28:
    c.lt.s f1,f3
    nop
    bc1f L16aa44
    .word 0x70001e28
    b L16aa44
    addiu v1,zero,-1
    .word 0x70001e28
L16aa44:
    mtc1 zero,f1
    nop
    c.le.s f9,f1
    nop
    bc1t L16aa64
    nop
    b L16aa80
    addiu v0,zero,1
L16aa64:
    c.lt.s f9,f1
    nop
    bc1f L16aa80
    .word 0x70001628
    b L16aa80
    addiu v0,zero,-1
    .word 0x70001628
L16aa80:
    bne v0,v1,L16ac2c
    nop
    addiu v0,zero,1
    sw v0,104(s0)
    lwc1 f6,0(s4)
    lwc1 f3,4(s4)
    lwc1 f2,8(s4)
    addiu a1,sp,208
    .word 0x3c02bdcc
    ori v0,v0,0xcccd
    addiu a0,sp,176
    mtc1 v0,f1
    .word 0xe4a60000
    .word 0xe4a30004
    .word 0xe4a20008
    lwc1 f6,8(s1)
    lwc1 f16,212(sp)
    lwc1 f8,4(s1)
    lwc1 f7,0(s1)
    lwc1 f15,216(sp)
    lwc1 f3,208(sp)
    .word 0xdc820000
    mula.s f16,f6
    .word 0xc4820008
    addiu v1,sp,192
    msub.s f12,f15,f8
    mula.s f15,f7
    msub.s f13,f3,f6
    mula.s f3,f8
    .word 0xfc620000
    .word 0xe4620008
    lwc1 f9,4(s4)
    msub.s f14,f16,f7
    .word 0xc7ab00d0
    lwc1 f2,0(s4)
    lwc1 f8,8(s4)
    lwc1 f7,192(sp)
    mul.s f9,f16,f9
    lwc1 f6,0(s3)
    lwc1 f17,196(sp)
    lwc1 f3,4(s3)
    lwc1 f18,200(sp)
    mul.s f10,f11,f2
    adda.s f10,f9
    madd.s f10,f15,f8
    lwc1 f2,8(s3)
    sub.s f8,f7,f6
    sub.s f19,f17,f3
    sub.s f20,f18,f2
    mul.s f6,f11,f7
    mul.s f9,f12,f7
    mul.s f2,f16,f17
    adda.s f6,f2
    mul.s f7,f11,f8
    mul.s f3,f12,f8
    mul.s f8,f13,f17
    madd.s f11,f15,f18
    adda.s f9,f8
    mul.s f6,f16,f19
    madd.s f8,f14,f18
    adda.s f7,f6
    mul.s f2,f13,f19
    madd.s f6,f15,f20
    adda.s f3,f2
    madd.s f2,f14,f20
    sub.s f2,f2,f8
    mul.s f3,f10,f2
    c.lt.s f3,f1
    nop
    bc1t L16abc0
    sub.s f1,f6,f11
    .word 0x3c023dcc
    ori v0,v0,0xcccd
    mtc1 v0,f1
    nop
    c.le.s f3,f1
    nop
    bc1t L16ac2c
    nop
    sub.s f1,f6,f11
L16abc0:
    .word 0x3c023f2a
    ori v1,v0,0xaaab
    .word 0x3c0241a0
    mula.s f11,f2
    msub.s f1,f8,f1
    div.s f2,f1,f3
    neg.s f1,f8
    mul.s f1,f1,f10
    div.s f1,f1,f3
    mtc1 v1,f3
    mtc1 v0,f6
    mul.s f5,f3,f1
    mul.s f4,f3,f2
    mul.s f1,f6,f5
    c.le.s f4,f1
    nop
    bc1f L16ac20
    .word 0x3c02bf80
    mul.s f1,f6,f4
    c.le.s f5,f1
    nop
    bc1t L16ac2c
    nop
    .word 0x3c02bf80
L16ac20:
    mtc1 v0,f4
    nop
    mov.s f5,f4
L16ac2c:
    mtc1 zero,f1
    nop
    c.lt.s f4,f1
    nop
    bc1t L16ac58
    .word 0x3c023eaa
    c.lt.s f5,f1
    nop
    bc1f L16ac6c
    nop
    .word 0x3c023eaa
L16ac58:
    ori v0,v0,0xaaab
    mtc1 v0,f1
    sw zero,104(s0)
    mul.s f4,f1,f0
    mov.s f5,f4
L16ac6c:
    lwc1 f1,12(s0)
    lwc1 f3,16(s0)
    lwc1 f2,20(s0)
    lwc1 f0,0(s0)
    mul.s f1,f1,f4
    add.s f0,f0,f1
    swc1 f0,108(s0)
    lwc1 f0,4(s0)
    mul.s f3,f3,f4
    add.s f0,f0,f3
    swc1 f0,112(s0)
    lwc1 f0,8(s0)
    mul.s f2,f2,f4
    add.s f0,f0,f2
    swc1 f0,116(s0)
    lwc1 f1,36(s0)
    lwc1 f3,40(s0)
    lwc1 f2,44(s0)
    lwc1 f0,24(s0)
    mul.s f1,f1,f5
    sub.s f0,f0,f1
    swc1 f0,120(s0)
    lwc1 f0,28(s0)
    mul.s f3,f3,f5
    sub.s f0,f0,f3
    swc1 f0,124(s0)
    lwc1 f0,32(s0)
    mul.s f2,f2,f5
    sub.s f0,f0,f2
    swc1 f0,128(s0)
L16ace4:
    jal func_00147eb0
    lw a0,48(s0)
    lw a0,48(s0)
    mtc1 zero,f12
    addiu a3,zero,3
    .word 0x72002e28
    jal func_00148000
    .word 0x70003628
    beqz s2,L16ad28
    sw v0,52(s0)
    lw a0,48(s0)
    .word 0x3c023f00
    mtc1 v0,f12
    addiu a3,zero,4
    .word 0x72402e28
    jal func_00148000
    .word 0x70003628
L16ad28:
    lw a0,48(s0)
    .word 0x3c023f80
    mtc1 v0,f12
    addiu a1,s0,24
    addiu a3,zero,4
    jal func_00148000
    .word 0x70003628
    beqz s2,L16ad54
    sw v0,56(s0)
    jal func_00145060
    lw a0,48(s0)
L16ad54:
    lw a0,48(s0)
    lw a1,52(s0)
    addiu a3,s0,108
    jal func_00145450
    .word 0x70003628
    lw a0,48(s0)
    lw a1,56(s0)
    addiu a2,s0,120
    jal func_00145450
    .word 0x70003e28
    .word 0x3c023db2
    ori v0,v0,0xb8c2
    mtc1 v0,f12
    jal func_00119ff8
    nop
    lw a0,48(s0)
    addiu a1,zero,1
    jal func_00146950
    mov.s f12,f0
    lw a0,48(s0)
    addiu a1,sp,224
    jal func_00147300
    addiu a2,sp,228
    lwc1 f1,228(sp)
    lwc1 f0,224(sp)
    mtc1 zero,f21
    .word 0x70008e28
    .word 0x72009628
    sub.s f0,f1,f0
    swc1 f0,60(s0)
    sw zero,64(s0)
    sw zero,68(s0)
    sw zero,72(s0)
    sw zero,76(s0)
    lwc1 f20,60(s0)
    nop
L16ade4:
    swc1 f21,236(sp)
    lw v0,52(s0)
    b L16ae40
    sw v0,232(sp)
L16adf4:
    jal func_00147b70
    lw a0,48(s0)
    beqzl v0,L16ae54
    addiu s1,s1,1
    lwc1 f1,12(v0)
    lwc1 f0,236(sp)
    c.lt.s f1,f0
    nop
    bc1t L16ae3c
    nop
    lw a0,48(s0)
    addiu a1,sp,236
    addiu a2,s2,80
    addiu t0,sp,232
    jal func_00146d40
    .word 0x70003e28
    b L16ae50
    nop
L16ae3c:
    sw v0,232(sp)
L16ae40:
    lw a1,232(sp)
    bnez a1,L16adf4
    nop
    nop
L16ae50:
    addiu s1,s1,1
L16ae54:
    add.s f21,f21,f20
    slti v0,s1,2
    bnez v0,L16ade4
    addiu s2,s2,12
    lq ra,160(sp)
    lq s8,144(sp)
    lq s7,128(sp)
    lq s6,112(sp)
    lq s5,96(sp)
    lq s4,80(sp)
    lq s3,64(sp)
    lq s2,48(sp)
    lq s1,32(sp)
    lq s0,16(sp)
    lwc1 f21,4(sp)
    lwc1 f20,0(sp)
    addiu v0,zero,1
    jr ra
    addiu sp,sp,240
}
