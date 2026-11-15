extern void func_00188f00(void);
extern void func_00189fe0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-112
    sq ra,16(sp)
    sq s0,0(sp)
    lw a0,0(a1)
    addiu v0,sp,104
    .word 0x70a08628
    lwc1 f1,16(a0)
    lwc1 f0,20(a0)
    .word 0xe4410000
    jal func_00189fe0
    .word 0xe4400004
    lw a1,0(s0)
    lwc1 f0,104(sp)
    .word 0x3c033f00
    addiu v0,zero,14
    .word 0x3c010033
    swc1 f0,16(a1)
    lwc1 f0,108(sp)
    swc1 f0,20(a1)
    lw a0,12(a1)
    ori a0,a0,0x1
    sw a0,12(a1)
    sw v1,64(sp)
    sw zero,68(sp)
    sw zero,72(sp)
    sw zero,76(sp)
    sw zero,80(sp)
    sw v0,32(sp)
    lw v0,13464(at)
    bltz v0,L25b52c
    srl v1,v0,0x1
    mtc1 v0,f0
    b L25b544
    cvt.s.w f0,f0
    srl v1,v0,0x1
L25b52c:
    andi v0,v0,0x1
    or v1,v1,v0
    mtc1 v1,f0
    nop
    cvt.s.w f0,f0
    add.s f0,f0,f0
L25b544:
    swc1 f0,36(sp)
    sw zero,60(sp)
    sw zero,4(s0)
    lw a0,8(s0)
    addiu a1,sp,32
    .word 0x70003628
    jal func_00188f00
    .word 0x70003e28
    .word 0x3c010033
    lw a2,13448(at)
    .word 0x3c030033
    lw a3,8(s0)
    addiu a0,v1,12896
    .word 0x3c030026
    addiu a1,a2,1
    .word 0x3c010033
    sw a1,13448(at)
    sll a1,a2,0x3
    addu a0,a0,a1
    sw a3,536(a0)
    addiu v1,v1,-18048
    sw v0,540(a0)
    sw v1,64(v0)
    addiu v1,a0,536
    sw v1,68(v0)
    lq ra,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,112
}
