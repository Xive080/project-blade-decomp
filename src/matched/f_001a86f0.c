extern void func_00109d00(void);
extern void func_00109d20(void);
extern void func_0011eac8(void);
extern void func_0011fe10(void);
extern void func_001214b8(void);
extern void func_001aa740(void);
asm int f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-176
    sq ra,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    lw v1,16(a0)
    addiu v0,zero,1
    beq v1,v0,L1a8718
    .word 0x70808628
    b L1a8838
    .word 0x70001628
L1a8718:
    .word 0x3c02467f
    ori v0,v0,0xfc00
    mtc1 v0,$f0
    nop
    mul.s $f0,$f0,$f12
    lw v0,88(s0)
    .word 0x46000024
    mfc1 s1,$f0
    nop
    beq v0,s1,L1a8838
    addiu v0,zero,1
    sw s1,88(s0)
    jal func_00109d20
    lw a0,-32660(gp)
    .word 0x3c010031
    lw t1,30384(at)
    lw v1,28(s0)
    lw v0,-31444(gp)
    .word 0x3c010032
    sw v1,30528(at)
    addiu v1,t1,1
    .word 0x3c010032
    sw s1,30532(at)
    beqz v0,L1a87c0
    sll s0,v1,0x3
    .word 0x3c020032
    addiu v0,v0,30528
    lw a3,0(v0)
    addiu a0,sp,48
    addiu t3,zero,8
    ori a2,zero,32781
    .word 0x3c020032
    addiu v0,v0,30528
    lw t0,4(v0)
    .word 0x72005628
    .word 0x3c02002f
    jal func_001214b8
    addiu a1,v0,176
    .word 0x3c02002f
    addiu a0,v0,272
    jal func_0011fe10
    addiu a1,sp,48
L1a87c0:
    .word 0x3c010031
    addiu v0,s0,1
    lw a0,30388(at)
    sll v1,v0,0x2
    .word 0x3c020032
    addiu a1,v0,30528
    sll a3,s0,0x2
    addu v0,a0,a3
    ori t0,zero,32781
    sw t0,0(v0)
    .word 0x3c010031
    lw v0,30388(at)
    addiu a2,zero,8
    jal func_0011eac8
    addu a0,v0,v1
    .word 0x3c010031
    lw v0,30384(at)
    addiu v0,v0,1
    .word 0x3c010031
    sw v0,30384(at)
    .word 0x3c010031
    lw v0,30384(at)
    slti v0,v0,1023
    bnez v0,L1a882c
    nop
    jal func_001aa740
    .word 0x70002628
L1a882c:
    jal func_00109d00
    lw a0,-32660(gp)
    addiu v0,zero,1
L1a8838:
    lq ra,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,176
}
