extern void func_00109d00(void);
extern void func_00109d20(void);
extern void func_0011eac8(void);
extern void func_0011fe10(void);
extern void func_001214b8(void);
extern void func_001aa740(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-192
    .word 0x44800000
    .word 0x7fbf0030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    mov.s $f20,$f12
    c.lt.s $f20,$f0
    nop
    bc1f L1a8044
    .word 0x70808628
    b L1a8064
    mov.s $f20,$f0
L1a8044:
    .word 0x3c023f80
    .word 0x44820000
    nop
    c.le.s $f20,$f0
    nop
    bc1t L1a8064
    nop
    mov.s $f20,$f0
L1a8064:
    .word 0x3c020032
    addiu v0,v0,30400
    sll v1,s0,0x2
    addu s1,v0,v1
    .word 0xc6200000
    c.eq.s $f0,$f20
    nop
    bc1t L1a818c
    nop
    jal func_00109d20
    lw a0,-32660(gp)
    .word 0x3c02467f
    ori v0,v0,0xfc00
    .word 0x44820000
    .word 0x3c010032
    sw s0,30528(at)
    mul.s $f0,$f0,$f20
    .word 0x3c010031
    lw t1,30384(at)
    lw v0,-31444(gp)
    .word 0x46000024
    addiu v1,t1,1
    sll s0,v1,0x3
    .word 0x44030000
    .word 0x3c010032
    beqz v0, L1a8114
    sw v1,30532(at)
    .word 0x3c020032
    addiu v0,v0,30528
    lw a3,0(v0)
    addiu a0,sp,64
    addiu t3,zero,8
    ori a2,zero,0x8012
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
    addiu a1,sp,64
L1a8114:
    .word 0x3c010031
    addiu v0,s0,1
    lw a0,30388(at)
    sll v1,v0,0x2
    .word 0x3c020032
    addiu a1,v0,30528
    sll a3,s0,0x2
    addu v0,a0,a3
    ori t0,zero,0x8012
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
    bnez v0, L1a8180
    nop
    jal func_001aa740
    .word 0x70002628
L1a8180:
    jal func_00109d00
    lw a0,-32660(gp)
    .word 0xe6340000
L1a818c:
    .word 0x7bbf0030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,192
}
