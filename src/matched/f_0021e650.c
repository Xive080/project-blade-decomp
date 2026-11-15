extern void func_001c3b80(void);
extern void func_001c7340(void);
extern void func_00201090(void);
extern void func_00202b00(void);
extern void func_0020eef0(void);
extern void func_0021e2e0(void);
extern void func_0021e430(void);
extern void func_0021e530(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-96
    sq ra,80(sp)
    sq s4,64(sp)
    sq s3,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    lw s0,8(a0)
    .word 0x7080a628
    .word 0x70a09e28
    .word 0x70c09628
    lw s1,24(s0)
    lw v0,68(s1)
    sw v0,12(a0)
    jal func_00202b00
    .word 0x72202628
    addiu v1,zero,1
    beq v0,v1,L21e6bc
    nop
    lw v0,68(s1)
    lw v1,-30604(gp)
    lhu a1,4(v0)
    jal func_0020eef0
    addu a0,s0,v1
    lw v0,0(v0)
    b L21e6d8
    sw v0,16(s4)
L21e6bc:
    lw v0,68(s1)
    lw v1,-30600(gp)
    lhu a1,4(v0)
    jal func_0020eef0
    addu a0,s1,v1
    lw v0,0(v0)
    sw v0,16(s4)
L21e6d8:
    lw v0,12(s4)
    lhu v0,4(v0)
    bgtz v0,L21e6f0
    .word 0x70001628
    b L21e808
    lq ra,80(sp)
L21e6f0:
    lw v0,24(s0)
    lw v0,36(v0)
    sw v0,32(s4)
    lw v0,32(s4)
    slti at,v0,2
    bnez at,L21e71c
    .word 0x72002628
    lwc1 f1,88(s0)
    lwc1 f0,92(s0)
    mul.s f0,f1,f0
    swc1 f0,28(s4)
L21e71c:
    jal func_0021e2e0
    .word 0x72802e28
    jal func_001c3b80
    lw a0,4(s0)
    lw a0,0(s3)
    .word 0x70402e28
    .word 0x3c020033
    addiu s3,v0,-23008
    .word 0x8e620000
    jal func_001c7340
    addiu a2,v0,32
    .word 0x72002628
    jal func_00201090
    addiu s1,zero,2
    lw a1,0(s3)
    lw a0,-30856(gp)
    addiu a2,zero,6
    .word 0x70c01e28
    addiu a2,a2,-1
    addu a0,a1,a0
    beqz v1,L21e7d0
    addiu a0,a0,96
    lwc1 f0,12(v0)
    lwc1 f7,4(v0)
    lwc1 f5,0(v0)
    lwc1 f3,8(v0)
    neg.s f0,f0
L21e788:
    lwc1 f6,4(a0)
    lwc1 f4,0(a0)
    lwc1 f2,8(a0)
    lwc1 f1,12(a0)
    mul.s f6,f7,f6
    mul.s f4,f5,f4
    adda.s f4,f6
    madd.s f2,f3,f2
    sub.s f2,f2,f1
    c.le.s f2,f0
    nop
    bc1t L21e7c4
    .word 0x70c01628
    b L21e7d0
    addiu s1,zero,1
L21e7c4:
    addiu a0,a0,20
    bnez v0,L21e788
    addiu a2,a2,-1
L21e7d0:
    .word 0x72202e28
    jal func_0021e430
    .word 0x72802628
    lw v1,24(s0)
    addiu v0,zero,1
    .word 0x72402e28
    .word 0x72802628
    lbu v1,2(v1)
    andi v1,v1,0x40
    movz v0,zero,v1
    jal func_0021e530
    sb v0,42(s4)
    addiu v0,zero,1
    lq ra,80(sp)
L21e808:
    lq s4,64(sp)
    lq s3,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,96
}
