extern void func_001c3b70(void);
extern void func_001ce3f0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c900014
    .word 0xc48200b8
    .word 0xc48100bc
    .word 0xc48000c0
    addiu v1,sp,48
    .word 0x70808e28
    .word 0xe4620000
    .word 0xe4610004
    .word 0xe4600008
    .word 0x8c840070
    beqz a0,L135b80
    addiu v1,sp,48
    .word 0x8c82000c
    .word 0x8c420018
    jalr ra,v0
    nop
    jal func_001c3b70
    .word 0x70402628
    addiu a0,sp,48
    addiu a2,zero,1
    .word 0x70802e28
    jal func_001ce3f0
    .word 0x70403e28
    addiu v1,sp,48
L135b80:
    .word 0xc4630000
    .word 0xc4620004
    .word 0xc4610008
    .word 0xe6030094
    .word 0xe6020098
    .word 0xe601009c
    .word 0xc6010098
    .word 0x3c034000
    .word 0x44830000
    .word 0x3c03c000
    .word 0x44832000
    sub.s $f0,$f1,$f0
    .word 0xe6000098
    .word 0xc62300f0
    .word 0xc62200f4
    .word 0xc62100f8
    .word 0xc6000094
    mul.s $f3,$f4,$f3
    add.s $f0,$f0,$f3
    .word 0xe6000094
    .word 0xc6000098
    mul.s $f2,$f4,$f2
    add.s $f0,$f0,$f2
    .word 0xe6000098
    .word 0xc600009c
    mul.s $f1,$f4,$f1
    add.s $f0,$f0,$f1
    .word 0xe600009c
    .word 0x8e230008
    .word 0x8e240098
    .word 0x8c63055c
    bne a0,v1,L135c14
    nop
    .word 0xc62100d4
    .word 0xc62300d8
    b L135c34
    .word 0xc62200d0
L135c14:
    .word 0xc62200d0
    .word 0xc62100d4
    .word 0x3c03bf80
    .word 0x44831800
    .word 0xc62000d8
    mul.s $f2,$f3,$f2
    mul.s $f1,$f3,$f1
    mul.s $f3,$f3,$f0
L135c34:
    .word 0xc6000094
    addiu a0,sp,48
    .word 0x3c033f80
    addiu a1,zero,1
    add.s $f0,$f0,$f2
    .word 0xe6000094
    .word 0xc6000098
    add.s $f0,$f0,$f1
    .word 0xe6000098
    .word 0xc600009c
    add.s $f0,$f0,$f3
    .word 0xe600009c
    .word 0xc4820000
    .word 0xc4810004
    .word 0xc4800008
    .word 0xe60200a0
    .word 0xe60100a4
    .word 0xe60000a8
    .word 0xae0000ac
    .word 0xae0300b0
    .word 0xae0000b4
    .word 0x8e03003c
    beq v1,a1,L135cdc
    .word 0x3c033c23
    .word 0x8e030010
    andi v1,v1,0x2
    bnez v1,L135cd8
    nop
    .word 0x8e02000c
    .word 0x72002628
    .word 0x8c420010
    jalr ra,v0
    addiu s1,s0,12
    beqz v0,L135cd8
    nop
    .word 0x8e220000
    addiu a1,zero,1
    .word 0x72002628
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L135cd8:
    .word 0x3c033c23
L135cdc:
    ori v1,v1,0xd70a
    .word 0xae03007c
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,64
}
