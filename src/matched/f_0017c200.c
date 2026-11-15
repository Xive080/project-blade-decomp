extern void func_0017c690(void);
extern void func_001c7710(void);
extern void func_001ce160(void);
extern void func_001ce410(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-304
    sq ra,144(sp)
    sq s8,128(sp)
    sq s7,112(sp)
    sq s6,96(sp)
    sq s5,80(sp)
    sq s4,64(sp)
    sq s3,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    .word 0x70c08628
    lw a2,28(a0)
    .word 0x70a08e28
    sw a3,172(sp)
    sw t0,168(sp)
    .word 0x70009e28
    bnez a2,L17c254
    .word 0x7080ae28
    b L17c454
    .word 0x70001628
L17c254:
    lw a1,-30544(gp)
    addiu v0,zero,-2
    daddiu v1,zero,1
    sw a2,16(a1)
    lw a1,-30544(gp)
    sw zero,128(a1)
    lw a2,36(s5)
    lw a1,-30544(gp)
    sw a2,32(a1)
    lw a2,-30544(gp)
    lbu a1,1(a2)
    and v0,a1,v0
    or v0,v0,v1
    sb v0,1(a2)
    lw a1,32(s5)
    jal func_001c7710
    addiu a0,sp,176
    lw s4,40(s5)
    lwc1 f2,0(s1)
    lwc1 f1,4(s1)
    lwc1 f0,8(s1)
    addiu v0,sp,288
    addiu s7,sp,280
    addiu s8,sp,276
    .word 0xe4420000
    .word 0xe4410004
    .word 0xe4400008
    .word 0xaee00000
    .word 0xafc00000
    lw v1,-30544(gp)
    sw zero,272(sp)
L17c2d0:
    lw v0,0(v1)
    andi v0,v0,0x100
    nop
    nop
    nop
    bnez v0,L17c2d0
    nop
    .word 0x70009628
    b L17c3a8
    .word 0x7000b628
    andi v0,s4,0x1
L17c2fc:
    beqzl v0,L17c39c
    addiu s6,s6,16
    .word 0x3c017000
    lw v0,12(at)
    addiu a1,sp,176
    addiu t0,sp,240
    addiu t1,sp,256
    addu a0,v0,s6
    .word 0x72203628
    jal func_0017c690
    .word 0x72003e28
    beqz v0,L17c398
    nop
    lwc1 f1,0(s1)
    lwc1 f0,256(sp)
    addiu s3,s3,1
    add.s f0,f1,f0
    swc1 f0,0(s1)
    lwc1 f1,4(s1)
    lwc1 f0,260(sp)
    add.s f0,f1,f0
    swc1 f0,4(s1)
    lwc1 f1,8(s1)
    lwc1 f0,264(sp)
    add.s f0,f1,f0
    swc1 f0,8(s1)
    lwc1 f2,240(sp)
    lwc1 f0,272(sp)
    lwc1 f1,244(sp)
    add.s f0,f2,f0
    swc1 f0,272(sp)
    lwc1 f0,0(s8)
    add.s f0,f1,f0
    swc1 f0,0(s8)
    lwc1 f1,248(sp)
    lwc1 f0,0(s7)
    add.s f0,f1,f0
    swc1 f0,0(s7)
    nop
L17c398:
    addiu s6,s6,16
L17c39c:
    addiu s2,s2,1
    sra s4,s4,0x1
    nop
L17c3a8:
    lw v0,28(s5)
    lw v0,0(v0)
    slt v0,s2,v0
    bnez v0,L17c2fc
    andi v0,s4,0x1
    beqz s3,L17c454
    .word 0x70001628
    lwc1 f3,0(s1)
    lwc1 f2,288(sp)
    addiu a0,sp,272
    lwc1 f1,292(sp)
    lwc1 f0,296(sp)
    addiu a2,zero,1
    sub.s f2,f3,f2
    swc1 f2,256(sp)
    lwc1 f2,4(s1)
    sub.s f1,f2,f1
    swc1 f1,260(sp)
    lwc1 f1,8(s1)
    sub.s f0,f1,f0
    swc1 f0,264(sp)
    lw a3,32(s5)
    jal func_001ce410
    .word 0x70802e28
    lw a3,32(s5)
    addiu a0,sp,256
    addiu a2,zero,1
    jal func_001ce410
    .word 0x70802e28
    lw a0,172(sp)
    jal func_001ce160
    addiu a1,sp,272
    addiu v0,sp,256
    lw v1,168(sp)
    .word 0xc4420000
    .word 0xc4410004
    .word 0xc4400008
    swc1 f2,0(v1)
    swc1 f1,4(v1)
    addiu v0,zero,1
    b L17c454
    swc1 f0,8(v1)
    .word 0x70001628
L17c454:
    lq ra,144(sp)
    lq s8,128(sp)
    lq s7,112(sp)
    lq s6,96(sp)
    lq s5,80(sp)
    lq s4,64(sp)
    lq s3,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,304
}
