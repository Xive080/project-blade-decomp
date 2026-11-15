extern void func_00109d00(void);
extern void func_00109d20(void);
extern void func_0011eac8(void);
extern void func_0011fe10(void);
extern void func_001214b8(void);
extern void func_001aa740(void);
extern void func_00256438(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-176
    .word 0x7fbf0020
    .word 0x7fb00010
    .word 0xe7b50004
    .word 0xe7b40000
    .word 0x70808628
    lw a0,-32660(gp)
    mov.s $f21,$f12
    jal func_00109d20
    mov.s $f20,$f13
    .word 0x44800000
    nop
    c.le.s $f20,$f0
    nop
    bc1t L1a75d8
    addiu v0,zero,16383
    .word 0x3c010031
    .word 0xc42175d4
    .word 0x3c02467f
    ori v0,v0,0xfc00
    .word 0x44820000
    nop
    mul.s $f1,$f20,$f1
    div.s $f12,$f0,$f1
    nop
    nop
    jal func_00256438
    nop
    bnez v0, L1a75c4
    sltiu at,v0,16384
    b L1a75d8
    addiu v0,zero,1
    sltiu at,v0,16384
L1a75c4:
    bnez at, L1a75dc
    .word 0x3c03467f
    b L1a75d8
    addiu v0,zero,16383
    addiu v0,zero,16383
L1a75d8:
    .word 0x3c03467f
L1a75dc:
    ori v1,v1,0xfc00
    .word 0x44830000
    .word 0x3c010032
    sw s0,30528(at)
    mul.s $f0,$f0,$f21
    .word 0x3c010031
    lw t1,30384(at)
    lw v1,-31444(gp)
    .word 0x46000024
    addiu a0,t1,1
    sll s0,a0,0x3
    .word 0x44040000
    .word 0x3c010032
    sw a0,30532(at)
    .word 0x3c010032
    beqz v1, L1a7664
    sw v0,30536(at)
    .word 0x3c020032
    addiu v0,v0,30528
    lw a3,0(v0)
    addiu a0,sp,48
    addiu t3,zero,12
    ori a2,zero,0x8031
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
L1a7664:
    .word 0x3c010031
    addiu v0,s0,1
    lw a0,30388(at)
    sll v1,v0,0x2
    .word 0x3c020032
    addiu a1,v0,30528
    sll a3,s0,0x2
    addu v0,a0,a3
    ori t0,zero,0x8031
    sw t0,0(v0)
    .word 0x3c010031
    lw v0,30388(at)
    addiu a2,zero,12
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
    bnez v0, L1a76d0
    nop
    jal func_001aa740
    .word 0x70002628
L1a76d0:
    jal func_00109d00
    lw a0,-32660(gp)
    .word 0x7bbf0020
    .word 0x7bb00010
    .word 0xc7b50004
    .word 0xc7b40000
    jr ra
    addiu sp,sp,176
}
